#include "excelThread.h"
#include "qdebug"
#include "QThread"
#include <qdatetime.h>
#include <QFileDialog>
#include <QAxObject>
#include <windows.h>
#include <QTableWidgetItem>
#include <qmessagebox.h>
//#include <opencv2/opencv.hpp>
excelThread::excelThread(QObject *parent)
	: QObject(parent)
{
}
void excelThread::startRecordSlot()
{
	qDebug() << QThread::currentThreadId();
}
void excelThread::endRecordSlot()
{
	emit askForInfo();
}
void excelThread::addData(quint16 id, double data)
{
	for (auto _id : _dataID) {
		if (_id == id) {
			dataBuffer[id].append(data);
			emit dataNumChanged();
			break;
		}
	}
}
void excelThread::reviveFilePath(QString filePath)
{
	_filePath = filePath;
	while (nameReady==false) {
		return;
	}
	saveData();
}
void excelThread::getDataName(QStringList dataName)
{
	if (dataName.isEmpty() == false) {
		_dataName = dataName;
		nameReady = true;
	}
	else{
		emit quitCurrentThread();
		this->destroyed();
	}
}
void excelThread::saveData()
{
	if (_filePath.isEmpty()==false&& _dataName.isEmpty() == false) {
		QAxObject *excel = new QAxObject("Excel.Application");//连接Excel控件
		excel->dynamicCall("SetVisible (bool Visible)", false);//不显示窗体
		excel->setProperty("DisplayAlerts", true);//不显示任何警告信息。如果为true那么在关闭是会出现类似“文件已修改，是否保存”的提示
		QAxObject *workbooks = excel->querySubObject("WorkBooks");//获取工作簿集合
		workbooks->dynamicCall("Add");//新建一个工作簿
		QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//获取当前工作簿
		QAxObject *worksheets = workbook->querySubObject("Sheets");//获取工作表集合
		QAxObject *worksheet = worksheets->querySubObject("Item(int)", 1);//获取工作表集合的工作表1，即sheet1
		QString data = "";
		QTableWidgetItem *item;
		int rowNum = 1;
		int columnNum = _dataName.size();
		QList<QVariant> firstRowsData;//保存标题
		for (auto name : _dataName) {
			firstRowsData << name;
		}
		QString range = intRangeToString(1, 1, rowNum, columnNum);
		QAxObject *titleRange = worksheet->querySubObject("Range(const QString )", range);
		titleRange->dynamicCall("SetValue(const QVariant&)", QVariant(firstRowsData));//存储所有数据到 excel 中,批量操作,速度极快
		columnNum = 0;
		for (auto id : _dataID) {
			QList<QVariant> allRowsData;//保存所有行数据			
			columnNum++;
			rowNum = dataBuffer[id].size();
			for (auto data : dataBuffer[id]) {
				QList<QVariant> rowData;//保存每列数据
				rowData .append( QVariant(data));
				allRowsData .append(QVariant(rowData));
			}
			QString drange = intRangeToString(2, columnNum, rowNum+1, columnNum);
			QAxObject *dataRange = worksheet->querySubObject("Range(const QString )", drange);
			dataRange->dynamicCall("SetValue(const QVariant&)", QVariant(allRowsData));//存储所有数据到 excel 中,批量操作,速度极快
		}
		
		workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(_filePath));//保存至filepath，注意一定要用QDir::toNativeSeparators将路径中的"/"转换为"\"，不然一定保存不了。
		workbook->dynamicCall("Close()");//关闭工作簿
		excel->dynamicCall("Quit()");//关闭excel
		delete excel;
		excel = NULL;
	}
	emit quitCurrentThread();
}
QString excelThread::intRangeToString(int r1, int c1, int r2, int c2)
{
	QString str;
	str = QString(char('A' + c1 - 1))+QString::number(r1)+str+":"+ QString(char('A' + c2 - 1))+ QString::number(r2);
	return str;
}
excelThread::~excelThread()
{
}
