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
	this->setWindowTitle(QStringLiteral("���ڼ�¼"));
	if (_dataID.isEmpty() == true) {
		QMessageBox::information(NULL, "error", QStringLiteral("��ѡ��Ҫ��¼�����ݣ�"));
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
	//��ʱ��
	_timeId = QObject::startTimer(100);
	dataTime.start();


}
void excelRecordManger::getInfo()
{
	QDateTime *dataTime = new QDateTime();
	ui.stopRecordButton->setDisabled(true);
	emit sendDataInfo(dataInfo);
	this->setWindowTitle(QStringLiteral("���ڱ���..."));
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
		tray->showMessage(QStringLiteral("���ݼ�¼"), QStringLiteral("������������"));
		hide();//���ش���
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
		QMessageBox::information(NULL, "error", QStringLiteral("��ѡ��Ҫ��¼�����ݣ�"));
	}
}
void excelRecordManger::trayInit()
{
	tray = new QSystemTrayIcon(this);//��ʼ�����̶���tray
	tray->setIcon(QIcon(QPixmap("./logo.ico")));
	tray->show();//������ͼ����ʾ��ϵͳ������

	QObject::connect(tray, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(TrayIconAction(QSystemTrayIcon::ActivationReason)));
	
	QAction *reset;//�˵�ʵ�ֹ��ܣ��ָ�����
	QAction *quit;//�˵�ʵ�ֹ��ܣ��˳�����
	QAction *stop;//�˵�ʵ�ֹ��ܣ�ֹͣ��¼

	menu = new QMenu(this);//��ʼ���˵�
	reset = new QAction(this);//��ʼ���ָ�����
	reset->setText(QStringLiteral("��ʾ����"));
	QObject::connect(reset, SIGNAL(triggered()), this, SLOT(showNormal()));//�˵��е���ʾ���ڣ�����������ʾ����

	quit = new QAction(this);//��ʼ���˳�����
	quit->setText(QStringLiteral("�˳�����"));
	QObject::connect(quit, SIGNAL(triggered()), this, SLOT(close()));

	stop = new QAction(this);//��ʼ���˳�����
	stop->setText(QStringLiteral("ֹͣ��¼"));
	QObject::connect(stop, SIGNAL(triggered()), this, SLOT(on_stopRecordButton_clicked()));

	tray->setContextMenu(menu);
	menu->setTitle(QStringLiteral("���ݼ�¼"));
	menu->addAction(reset);
	menu->addAction(stop);
	menu->addAction(quit);
}
void excelRecordManger::TrayIconAction(QSystemTrayIcon::ActivationReason reason)
{
	if (reason == QSystemTrayIcon::Trigger) {
		this->showNormal();//�����ͼ����е���������ʾ������С�Ĵ���
	}
		
}
excelRecordManger::~excelRecordManger()
{
}
