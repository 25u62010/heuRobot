#include "excelRecordManger.h"
#include <QFileDialog>
#include <qdatetime.h>
#include <qtoolbutton.h>
#include <qmessagebox.h>
excelRecordManger::excelRecordManger(QVector<quint16> dataID, QWidget *parent)
	: QWidget(parent), _dataID(dataID)
{
	ui.setupUi(this);
	QVector<QString> text;
	this->setWindowTitle(QStringLiteral("正在记录"));
	if (_dataID.isEmpty() == true) {
		QMessageBox::information(NULL, "error", QStringLiteral("请选择要记录的数据！"));
		ui.stopRecordButton->setEnabled(false);
		ui.dataNameEdit->setEnabled(false);
		ui.averageImportCheckBox->setEnabled(false);
		ui.stdDevImportCheckBox->setEnabled(false);
		ui.varianceImportcheckBox->setEnabled(false);
	}
	else {
		QStringList dataNameList;
		for (auto id : _dataID) {
			QString dataName;
			if (id < 0x80) {
				dataName = "dataID:" + QString::number(id);

			}
			else {
				dataName = "targetID:" + QString::number(id - 0x80);
			}
			dataInfo[id] = new myRecordInfo(dataName);
			dataNameList.append(dataName);
		}
		ui.dataNameEdit->setText(dataInfo[dataID[0]]->getDataName());
		ui.dataIDComboBox->addItems(dataNameList);
	}
	trayInit();
	//计时器
	_timeId = QObject::startTimer(100);
	dataTime.start();


}
void excelRecordManger::getInfo()
{
	QDateTime *dataTime = new QDateTime();
	ui.stopRecordButton->setDisabled(true);
	emit sendDataInfo(dataInfo);
	this->setWindowTitle(QStringLiteral("正在保存..."));
	QString fileName1 = QString("/dataRecord") + dataTime->currentDateTime().toString("(yyyyMMddHHmm)");
	QString filepath = QFileDialog::getSaveFileName(NULL, QObject::tr("Save orbit"), fileName1, QObject::tr("(*.xlsx);;(*.xls)"));
	emit sendFilePath(filepath);
}
void excelRecordManger::closeEvent(QCloseEvent *event)
{
	emit quitThread();
	tray->hide();
}
void excelRecordManger::changeEvent(QEvent* event)
{
	if (this->windowState() == Qt::WindowMinimized){
		tray->showMessage(QStringLiteral("数据记录"), QStringLiteral("已隐藏至托盘"));
		hide();//隐藏窗口
	}
}
void excelRecordManger::on_averageImportCheckBox_clicked(bool action)
{
	int index = ui.dataIDComboBox->currentIndex();
	quint16 dataID = _dataID[index];
	dataInfo[dataID]->setRecordAvrStatus(action);
}
void excelRecordManger::on_stdDevImportCheckBox_clicked(bool action)
{
	int index = ui.dataIDComboBox->currentIndex();
	quint16 dataID = _dataID[index];
	dataInfo[dataID]->setRecordStdStatus(action);
}
void excelRecordManger::on_varianceImportcheckBox_clicked(bool action)
{
	int index = ui.dataIDComboBox->currentIndex();
	quint16 dataID = _dataID[index];
	dataInfo[dataID]->setRecordVarStatus(action);
}
void excelRecordManger::on_dataIDComboBox_currentIndexChanged(int index)
{
	index = ui.dataIDComboBox->currentIndex();
	quint16 dataID = _dataID[index];
	ui.dataNameEdit->setText(dataInfo[dataID]->getDataName());
	ui.averageImportCheckBox->setChecked(dataInfo[dataID]->getRecordAvrStatus());
	ui.stdDevImportCheckBox->setChecked(dataInfo[dataID]->getRecordStdStatus());
	ui.varianceImportcheckBox->setChecked(dataInfo[dataID]->getRecordVarStatus());
}
void excelRecordManger::on_dataNameEdit_textEdited(const QString &text)
{
	int index = ui.dataIDComboBox->currentIndex();
	quint16 dataID = _dataID[index];
	dataInfo[dataID]->setDataName(text);
}
void excelRecordManger::dataNumUpdata()
{
	_dataCount++;
	ui.recordNumLabel->setText(QString::number(_dataCount));
}
void excelRecordManger::timerEvent(QTimerEvent *event)
{
	int totalMilliseconds = dataTime.elapsed();
	int totalSeconds = totalMilliseconds / 1000;
	QString sStr = QString("%1").arg(totalSeconds % 60, 2, 10, QChar('0'));
	int totalMinutes = totalSeconds /60;
	QString mStr = QString("%1").arg(totalMinutes % 60, 2, 10, QChar('0'));
	int totalHours = totalMinutes / 60;
	QString hStr = QString("%1").arg(totalHours % 60, 2, 10, QChar('0'));
	if (event->timerId() == _timeId) {
		ui.TimeTotalLabel->setText(hStr +":"+mStr+":"+sStr);
	}
}
void excelRecordManger::on_stopRecordButton_clicked()
{
	if (dataInfo.isEmpty() == false) {
		emit endRecordSignal();
	}
	else {
		QMessageBox::information(NULL, "error", QStringLiteral("请选择要记录的数据！"));
	}
}
void excelRecordManger::trayInit()
{
	tray = new QSystemTrayIcon(this);//初始化托盘对象tray
	tray->setIcon(QIcon(QPixmap("./logo.ico")));
	tray->show();//让托盘图标显示在系统托盘上

	QObject::connect(tray, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(TrayIconAction(QSystemTrayIcon::ActivationReason)));
	
	QAction *reset;//菜单实现功能：恢复窗口
	QAction *quit;//菜单实现功能：退出程序
	QAction *stop;//菜单实现功能：停止记录

	menu = new QMenu(this);//初始化菜单
	reset = new QAction(this);//初始化恢复窗口
	reset->setText(QStringLiteral("显示窗口"));
	QObject::connect(reset, SIGNAL(triggered()), this, SLOT(showNormal()));//菜单中的显示窗口，单击连接显示窗口

	quit = new QAction(this);//初始化退出程序
	quit->setText(QStringLiteral("退出程序"));
	QObject::connect(quit, SIGNAL(triggered()), this, SLOT(close()));

	stop = new QAction(this);//初始化退出程序
	stop->setText(QStringLiteral("停止记录"));
	QObject::connect(stop, SIGNAL(triggered()), this, SLOT(on_stopRecordButton_clicked()));

	tray->setContextMenu(menu);
	menu->setTitle(QStringLiteral("数据记录"));
	menu->addAction(reset);
	menu->addAction(stop);
	menu->addAction(quit);
}
void excelRecordManger::TrayIconAction(QSystemTrayIcon::ActivationReason reason)
{
	if (reason == QSystemTrayIcon::Trigger) {
		this->showNormal();//如果对图标进行单击，则显示正常大小的窗口
	}
		
}
excelRecordManger::~excelRecordManger()
{
}
