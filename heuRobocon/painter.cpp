#include "painter.h"
#include <QPainter>
#include "QtCharts/QChart"
#include "QLineSeries"
#include "QValueAxis"
#include "QTimer"
#include "QTime"
#include "QList"
#include "qmath.h"
#include "QPointF"
#include "QDebug"
#include "QChartView"
#include "qvalidator.h"
#include <QVBoxLayout> 
#include <qdebug.h>
painter::painter(QVector<quint16> lineToShow,QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
	m_chart = new QtCharts::QChart;
	QtCharts::QChartView *chartView = new QtCharts::QChartView(m_chart);
	chartView->setRubberBand(QtCharts::QChartView::RectangleRubberBand);
	lineID = lineToShow;
	if (lineID.isEmpty() == false) {
		ui.autoAbjustButton->setEnabled(true);
		ui.clearLineButton->setEnabled(true);
		ui.downTimeEdit->setEnabled(true);
		ui.longestTimeEdit->setEnabled(true);
		ui.pauseShowButton->setEnabled(true);
		ui.selectLIneButton->setEnabled(true);
		ui.selectLIneComboBox->setEnabled(true);
		ui.showRegionTimeButton->setEnabled(true);
		ui.uperTimeEdit->setEnabled(true);
		ui.viewAllButton->setEnabled(true);
		ui.showAllButton->setEnabled(true);
		ui.hideAllButton->setEnabled(true);
	}
	axisX->setRange(0, maxSize);
	axisX->setLabelFormat("%g");
	axisX->setTitleText("axisX");

	axisY->setRange(-1.5, 1.5);
	axisY->setLabelFormat("%g");
	axisY->setTitleText("axisY");

	lineSeriesInit();

	m_chart->legend()->show();
	m_chart->setTitle("heuRobocon");

	QVBoxLayout *layout = ui.painterLayout;
	layout->insertWidget(0, chartView);
	timeId = QObject::startTimer(0);

	QDoubleValidator *v = new QDoubleValidator();
	ui.longestTimeEdit->setValidator(v);
	ui.downTimeEdit->setValidator(v);
	ui.uperTimeEdit->setValidator(v);
	double maxTimeDisplay = ui.longestTimeEdit->text().toDouble();
	axisX->setRange(0, maxTimeDisplay);
	dataTime = QTime(0,0,0);
}
painter::painter(QVector<quint16> line,QVector<quint16> targetLineIDVector, QVector<double> targetLineInit, QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
	lineID = line;
	for (int i = 0; i < targetLineIDVector.size();i++) {
		dataTemp[targetLineIDVector[i]] = targetLineInit[i];
	}
	m_chart = new QtCharts::QChart;
	QtCharts::QChartView *chartView = new QtCharts::QChartView(m_chart);
	chartView->setRubberBand(QtCharts::QChartView::RectangleRubberBand);
	if (lineID.isEmpty() == false) {
		ui.autoAbjustButton->setEnabled(true);
		ui.clearLineButton->setEnabled(true);
		ui.downTimeEdit->setEnabled(true);
		ui.longestTimeEdit->setEnabled(true);
		ui.pauseShowButton->setEnabled(true);
		ui.selectLIneButton->setEnabled(true);
		ui.selectLIneComboBox->setEnabled(true);
		ui.showRegionTimeButton->setEnabled(true);
		ui.uperTimeEdit->setEnabled(true);
		ui.viewAllButton->setEnabled(true);
		ui.showAllButton->setEnabled(true);
		ui.hideAllButton->setEnabled(true);
	}
	axisX->setRange(0, maxSize);
	axisX->setLabelFormat("%g");
	axisX->setTitleText("axisX");

	axisY->setRange(-1.5, 1.5);
	axisY->setLabelFormat("%g");
	axisY->setTitleText("axisY");
	lineSeriesInit();
	m_chart->legend()->show();
	m_chart->setTitle("heuRobocon");

	QVBoxLayout *layout = ui.painterLayout;
	layout->insertWidget(0, chartView);
	timeId = QObject::startTimer(5);

	QDoubleValidator *v = new QDoubleValidator();
	ui.longestTimeEdit->setValidator(v);
	ui.downTimeEdit->setValidator(v);
	ui.uperTimeEdit->setValidator(v);
	double maxTimeDisplay = ui.longestTimeEdit->text().toDouble();
	axisX->setRange(0, maxTimeDisplay);
	dataTime = QTime(QTime::currentTime());
}
void painter::lineSeriesInit()
{
	lineSeriesVector.clear();
	for (auto id : lineID) {
		myLineSries* lineSeies;
		if (id < 0x80){
			lineSeies = new myLineSries(id, "ID:" + QString::number(id));
		}
		else {
			lineSeies = new myLineSries(id, "targetID:" + QString::number(id-0x80));
		}
		m_chart->addSeries(lineSeies);
		lineSeies->setUseOpenGL(true);//openGl 加速
		//qDebug() << lineSeies->useOpenGL();
		m_chart->setAxisY(axisY, lineSeies);
		m_chart->setAxisX(axisX, lineSeies);
		lineSeriesVector.append(lineSeies);
	}
	selectLIneComboBoxInit();
}
QVector<QPointF> painter::getData(quint16 id) {	
	
	QVector<QPointF> points;
	QVector<double> dataBuffer=dataStorge[id];
	int dataNum = dataBuffer.size();
	double partTime = dtime / (dataNum);
	for (int i = 0; i < dataNum;i++) {
		QPointF point;	
		point = QPointF(time-dtime +(i+1)* partTime, dataBuffer[i]);
		points.append(point);
	}
	if (points.isEmpty()) {
		QPointF point;
		point = QPointF(showTime, dataTemp[id]);//如果该段时间没接收到数据，用临时数据代替
		points.append(point);
	}
	dataStorge[id].clear();
	return points;
}
void painter::timerEvent(QTimerEvent *event)
{		
	if (event->timerId() == timeId) {//模拟数据填充
		if (painterNowStatus == stopShow) {
			return;
		}
		dtime = (double)(dataTime.elapsed());
		time += dtime / 1000;
		dataTime.restart();
		
		if (painterNowStatus == pauseShow ) {
			return;
		}
		else if (painterNowStatus == autoAbjustMode) {
			autoAbjust();
		}
		else if (painterNowStatus == showAllMode) {
			showAll();
		}
		else {//防呆处理
			return;
		}
		showTime = time;
		for (auto &lineSerie : lineSeriesVector) {
			quint16 id = lineSerie->getLineID();
			QVector<QPointF> points;
			points = getData(id);//从存储区读取最新数据点
			if (points.isEmpty() == false) {
				for (auto &point : points) {
					lineSerie->append(point);//将数据点绘制出
					lineSerie->updataYminYmax(point.y());
				}
			}	
			
		}
		upDataYMaxYmin();
	}
	return;
}
void painter::upDataYMaxYmin()
{
	yMin = 0, yMax = 0;
	for (auto line : lineSeriesVector) {
		line->compareWithYminYmax(yMin, yMax);
	}
}
void painter::on_viewAllButton_clicked()
{
	if (painterNowStatus != pauseShow && painterNowStatus != stopShow) {
		painterNowStatus = showAllMode;
	}
	showAll();
}
void painter::showAll()
{
	axisX->setRange(0, showTime);
	axisY->setRange(yMin - 0.2*abs(yMin), yMax + 0.2*abs(yMax));
}
void painter::on_autoAbjustButton_clicked()
{
	if (painterNowStatus != pauseShow && painterNowStatus != stopShow) {
		painterNowStatus = autoAbjustMode;
	}
	autoAbjust();
}
void painter::autoAbjust()
{
	qreal xMin, xMax;
	double maxTimeDisplay= ui.longestTimeEdit->text().toDouble();
	xMax = showTime;
	xMin = xMax- maxTimeDisplay;
	int scrollBarMax = int(showTime / maxTimeDisplay * 10);

	if (xMax < maxTimeDisplay) {
		ui.painterScrollBar->setMaximum(0);
		ui.painterScrollBar->setValue(0);
		axisX->setRange(0, ui.longestTimeEdit->text().toDouble());
	}
	else {
		ui.painterScrollBar->setMaximum(scrollBarMax);
		ui.painterScrollBar->setValue(scrollBarMax);		
		axisX->setRange(xMin, xMax);
	}	
	axisY->setRange(yMin-0.2*abs(yMin), yMax+0.2*abs(yMax));
}
void painter::on_painterScrollBar_sliderMoved()
{
	if (painterNowStatus != pauseShow && painterNowStatus != stopShow) {
		painterNowStatus = selectPartMode;
	}
	double maxTimeDisplay = ui.longestTimeEdit->text().toDouble();
	int nowValue = ui.painterScrollBar->value();
	int maxValue = ui.painterScrollBar->maximum();
	qreal xMax = showTime * nowValue / maxValue;
	qreal xMin = xMax - maxTimeDisplay;
	if (xMin < 0) {
		axisX->setRange(0, maxTimeDisplay);
	}
	else {
		axisX->setRange(xMin, xMax);
	}	
}
void painter::on_showRegionTimeButton_clicked()
{
	if (painterNowStatus != pauseShow && painterNowStatus != stopShow) {
		painterNowStatus = selectPartMode;
	}
	double upperTime = ui.uperTimeEdit->text().toDouble();
	double lowerTime = ui.downTimeEdit->text().toDouble();
	axisX->setRange(upperTime, lowerTime);
}
void painter::selectLIneComboBoxInit()
{
	ui.selectLIneComboBox->clear();
	for (auto &lineSerie : lineSeriesVector) {
		ui.selectLIneComboBox->addItem(lineSerie->name());
	}
}
void painter::on_selectLIneButton_clicked()
{
	QString lineName = ui.selectLIneComboBox->currentText();
	int currentIndex = ui.selectLIneComboBox->currentIndex();
	myLineSries* lineSerie= lineSeriesVector[currentIndex];
	if (lineSerie->getLineShowStatus() == true) {
		lineSerie->setLineShowStatus(false);
		ui.selectLIneButton->setText(QStringLiteral("显示"));
	}
	else{
		lineSerie->setLineShowStatus(true);
		ui.selectLIneButton->setText(QStringLiteral("隐藏"));
	}
			
}
void painter::on_selectLIneComboBox_currentIndexChanged(const QString &text)
{
	int currentIndex = ui.selectLIneComboBox->currentIndex();

	if (lineSeriesVector[currentIndex]->getLineShowStatus() == true) {
		ui.selectLIneButton->setText(QStringLiteral("隐藏"));
	}
	else {
		ui.selectLIneButton->setText(QStringLiteral("显示"));
	}
}
void painter::on_pauseShowButton_clicked()
{
	
	if (painterNowStatus == stopShow) {
		time = 0;
		showTime = 0;
		painterNowStatus = autoAbjustMode;
		dataTime.restart();
		ui.pauseShowButton->setText(QStringLiteral("暂停显示"));
	}	
	else if(painterNowStatus == pauseShow){
		painterNowStatus = autoAbjustMode;
		ui.pauseShowButton->setText(QStringLiteral("暂停显示"));
	}
	else {
		painterNowStatus = pauseShow;
		ui.pauseShowButton->setText(QStringLiteral("开始显示"));
	}

}
void painter::on_clearLineButton_clicked()
{
	double maxTimeDisplay = ui.longestTimeEdit->text().toDouble();
	for (auto &lineSerie : lineSeriesVector) {
		lineSerie->clear();
	}	
	if (painterNowStatus == pauseShow) {
		painterNowStatus = stopShow;
	}
	axisX->setRange(0, maxTimeDisplay);
	time = 0;showTime = 0;yMin = qInf();yMax =-qInf();
}
void painter::reciveFilter(quint16 dataID, double data)
{
	dataStorge[dataID].append(data);
	dataTemp[dataID] = data;
}
void painter::on_selectLIneComboBox_currentTextChanged(const QString &text)
{
	int currentIndex=ui.selectLIneComboBox->currentIndex();
	ui.selectLIneComboBox->setItemText(currentIndex,text);
	lineSeriesVector[currentIndex]->setName(text);
}
void painter::on_getProcess_clicked()
{
	qDebug() << "从线程ID" << QThread::currentThread();
}
void painter::on_showAllButton_clicked()
{
	for (auto lineSeries : lineSeriesVector) {
		lineSeries->setLineShowStatus(true);
		ui.selectLIneButton->setText(QStringLiteral("隐藏"));
	}
}
void painter::on_hideAllButton_clicked()
{
	for (auto lineSeries : lineSeriesVector) {
		lineSeries->setLineShowStatus(false);
		ui.selectLIneButton->setText(QStringLiteral("显示"));
	}
}
void painter::autostart()
{
	if (lineSeriesVector.isEmpty() == false) {
		painterNowStatus = autoAbjustMode;
		ui.pauseShowButton->setText(QStringLiteral("暂停显示"));
	}
}
painter::~painter()
{
}