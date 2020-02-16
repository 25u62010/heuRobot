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
		QAxObject *excel = new QAxObject("Excel.Application");//����Excel�ؼ�
		excel->dynamicCall("SetVisible (bool Visible)", false);//����ʾ����
		excel->setProperty("DisplayAlerts", true);//����ʾ�κξ�����Ϣ�����Ϊtrue��ô�ڹر��ǻ�������ơ��ļ����޸ģ��Ƿ񱣴桱����ʾ
		QAxObject *workbooks = excel->querySubObject("WorkBooks");//��ȡ����������
		workbooks->dynamicCall("Add");//�½�һ��������
		QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//��ȡ��ǰ������
		QAxObject *worksheets = workbook->querySubObject("Sheets");//��ȡ��������
		QAxObject *worksheet = worksheets->querySubObject("Item(int)", 1);//��ȡ�������ϵĹ�����1����sheet1
		QString data = "";
		QTableWidgetItem *item;
		int rowNum = 1;
		int columnNum = _dataName.size();
		QList<QVariant> firstRowsData;//�������
		for (auto name : _dataName) {
			firstRowsData << name;
		}
		QString range = intRangeToString(1, 1, rowNum, columnNum);
		QAxObject *titleRange = worksheet->querySubObject("Range(const QString )", range);
		titleRange->dynamicCall("SetValue(const QVariant&)", QVariant(firstRowsData));//�洢�������ݵ� excel ��,��������,�ٶȼ���
		columnNum = 0;
		for (auto id : _dataID) {
			QList<QVariant> allRowsData;//��������������			
			columnNum++;
			rowNum = dataBuffer[id].size();
			for (auto data : dataBuffer[id]) {
				QList<QVariant> rowData;//����ÿ������
				rowData .append( QVariant(data));
				allRowsData .append(QVariant(rowData));
			}
			QString drange = intRangeToString(2, columnNum, rowNum+1, columnNum);
			QAxObject *dataRange = worksheet->querySubObject("Range(const QString )", drange);
			dataRange->dynamicCall("SetValue(const QVariant&)", QVariant(allRowsData));//�洢�������ݵ� excel ��,��������,�ٶȼ���
		}
		
		workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(_filePath));//������filepath��ע��һ��Ҫ��QDir::toNativeSeparators��·���е�"/"ת��Ϊ"\"����Ȼһ�����治�ˡ�
		workbook->dynamicCall("Close()");//�رչ�����
		excel->dynamicCall("Quit()");//�ر�excel
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
