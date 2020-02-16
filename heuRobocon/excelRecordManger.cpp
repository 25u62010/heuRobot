#include "excelRecordManger.h"
#include <QFileDialog>
#include <qdatetime.h>
#include <qtoolbutton.h>
#include <qmessagebox.h>
excelRecordManger::excelRecordManger(QVector<quint16> dataID,QWidget *parent)
	: QWidget(parent) ,_dataID(dataID)
{
	ui.setupUi(this);
	QVector<QString> text;
	this->setWindowTitle(QStringLiteral("正在记录"));
	if (_dataID.isEmpty() == true) {
		QMessageBox::information(NULL, "error", QStringLiteral("请选择要记录的数据！"));
		ui.stopRecordButton->setEnabled(false);
		ui.dataNameEdit->setEnabled(false);

	}
	else {
		for (auto id : _dataID) {
			dataName.append("dataID:" + QString::number(id));
		}
		ui.dataNameEdit->setText(dataName[0]);
		ui.dataIDComboBox->addItems(dataName);
	}
	_timeId = QObject::startTimer(100);
	dataTime.start();
}
void excelRecordManger::getInfo()
{
	QDateTime *dataTime = new QDateTime();
	if (dataName.isEmpty() == false) {
		emit sendDataNameSignals(dataName);
		QString fileName1 = QString("/pidRecord") + dataTime->currentDateTime().toString("(yyyyMMddHHmm)");
		QString filepath = QFileDialog::getSaveFileName(NULL, QObject::tr("Save orbit"), fileName1, QObject::tr("(*.xlsx);;(*.xls)"));
		emit sendFilePath(filepath);
	}
	else {
		QMessageBox::information(NULL, "error", QStringLiteral("请选择要记录的数据！"));
		this->close();
	}
}
void excelRecordManger::closeEvent(QCloseEvent *event)
{
	emit quitThread();
}
void excelRecordManger::on_dataIDComboBox_currentIndexChanged(int index)
{
	ui.dataNameEdit->setText(dataName[index]);
}
void excelRecordManger::on_dataNameEdit_textEdited(const QString &text)
{
	int index = ui.dataIDComboBox->currentIndex();
	dataName[index] = text;
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
excelRecordManger::~excelRecordManger()
{
}
