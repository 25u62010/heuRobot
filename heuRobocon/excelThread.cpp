#include "excelThread.h"
#include "qdebug"
#include "QThread"
#include <qdatetime.h>
#include <QFileDialog>
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
void excelThread::getDataInfo(QMap<quint16, myRecordInfo*> dataInfoMap)
{
	if (dataInfoMap.isEmpty() == false) {
		_dataInfo = dataInfoMap;
		nameReady = true;
	}
	else{
		emit quitCurrentThread();
		this->destroyed();
	}
}
void excelThread::saveData()
{
	if (_filePath.isEmpty()==false&& _dataInfo.isEmpty() == false) {
		QAxObject *excel = new QAxObject("Excel.Application");//����Excel�ؼ�

		excel->dynamicCall("SetVisible (bool Visible)", false);//����ʾ����
		excel->setProperty("DisplayAlerts", true);//����ʾ�κξ�����Ϣ�����Ϊtrue��ô�ڹر��ǻ�������ơ��ļ����޸ģ��Ƿ񱣴桱����ʾ
		QAxObject *workbooks = excel->querySubObject("WorkBooks");//��ȡ����������
		workbooks->dynamicCall("Add");//�½�һ��������
		QAxObject *workbook = excel->querySubObject("ActiveWorkBook");//��ȡ��ǰ������
		
		QAxObject *worksheets = workbook->querySubObject("Sheets");//��ȡ��������
		QAxObject *staticsSheet = worksheets->querySubObject("Item(int)", 1);
		
		saveStatistics(staticsSheet);
		worksheets->dynamicCall("Add");//�½�һ��������
		QAxObject *worksheet = worksheets->querySubObject("Item(int)", 1);//��ȡ�������ϵĹ�����1����sheet1
		saveData(worksheet);
		workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(_filePath));//������filepath��ע��һ��Ҫ��QDir::toNativeSeparators��·���е�"/"ת��Ϊ"\"����Ȼһ�����治�ˡ�
		workbook->dynamicCall("Close()");//�رչ�����
		excel->dynamicCall("Quit()");//�ر�excel
		delete excel;
		excel = NULL;
	}
	emit quitCurrentThread();
}
void excelThread::saveData(QAxObject *worksheet)
{
	worksheet->querySubObject("Name", QStringLiteral("����"));
	QString data = "";
	QTableWidgetItem *item;
	int rowNum = 1;
	int columnNum = _dataInfo.size();
	QList<QVariant> firstRowsData;//�������
	for (auto id : _dataID) {
		firstRowsData << _dataInfo[id]->getDataName();
	}
	QString range = intRangeToString(1, 1, rowNum, columnNum);
	QAxObject *titleRange = worksheet->querySubObject("Range(const QString )", range);

	titleRange->dynamicCall("SetValue(const QVariant&)", QVariant(firstRowsData));
	columnNum = 0;
	int maxRowNum=0;
	for (auto id : _dataID) {
		QList<QVariant> allRowsData;
		columnNum++;
		rowNum = dataBuffer[id].size();
		for (auto data : dataBuffer[id]) {
			QList<QVariant> rowData;
			rowData.append(QVariant(data));
			allRowsData.append(QVariant(rowData));
		}
		QString drange = intRangeToString(2, columnNum, rowNum + 1, columnNum);
		QAxObject *dataRange = worksheet->querySubObject("Range(const QString )", drange);
		dataRange->dynamicCall("SetValue(const QVariant&)", QVariant(allRowsData));
		if (rowNum > maxRowNum) {
			maxRowNum=rowNum;
		}
	}
	QString drange = intRangeToString(1, 1, maxRowNum+1, columnNum);
	QAxObject *dataRange = worksheet->querySubObject("Range(const QString )", drange);
	addBordes(dataRange);
}
void excelThread::saveStatistics(QAxObject *worksheet)
{
	worksheet->querySubObject("Name", QStringLiteral("ͳ������"));
	QList<QVariant> avrTitleRow;
	QList<QVariant> avrDataRow;
	QList<QVariant> stdTitleRow;
	QList<QVariant> stdDataRow;
	QList<QVariant> varTitleRow;
	QList<QVariant> varDataRow;
	int avrNum=0, stdNum=0, varNum=0;
	for (auto id : _dataID) {
		if (_dataInfo[id]->getRecordAvrStatus() == true) {
			avrTitleRow.append(QVariant(_dataInfo[id]->getDataName()));
			avrDataRow.append(QVariant(getMean(dataBuffer[id])));
			avrNum++;
		}
		if (_dataInfo[id]->getRecordVarStatus() == true) {
			varTitleRow.append(QVariant(_dataInfo[id]->getDataName()));
			varDataRow.append(QVariant(getVar(dataBuffer[id])));
			stdNum++;
		}
		if (_dataInfo[id]->getRecordStdStatus() == true) {
			stdTitleRow.append(QVariant(_dataInfo[id]->getDataName()));
			stdDataRow.append(QVariant(getStd(dataBuffer[id])));
			varNum++;
		}
	}
	int columnNum =max3int(avrNum, stdNum, varNum);
	if (columnNum == 0) {
		return;
	}
	QList<QVariant> allRowsData;
	QList<QVariant> titleTmp;
	titleTmp.push_front( QStringLiteral("ƽ��ֵ"));
	Supplementary(columnNum, titleTmp);
	allRowsData.append(QVariant(titleTmp));

	Supplementary(columnNum, avrTitleRow);
	allRowsData.append(QVariant(avrTitleRow));

	Supplementary(columnNum, avrDataRow);
	allRowsData.append(QVariant(avrDataRow));

	titleTmp.replace(0,QStringLiteral("��׼��"));
	allRowsData.append(QVariant(titleTmp));

	Supplementary(columnNum, stdTitleRow);
	allRowsData.append(QVariant(stdTitleRow));

	Supplementary(columnNum, stdDataRow);
	allRowsData.append(QVariant(stdDataRow));

	titleTmp.replace(0, QStringLiteral("����"));
	allRowsData.append(QVariant(titleTmp));

	Supplementary(columnNum, varTitleRow);
	allRowsData.append(QVariant(varTitleRow));

	Supplementary(columnNum, varDataRow);
	allRowsData.append(QVariant(varDataRow));

	QString drange = intRangeToString(1, 1, 9, columnNum);
	QAxObject *dataRange = worksheet->querySubObject("Range(const QString )", drange);
	dataRange->dynamicCall("SetValue(const QVariant&)", QVariant(allRowsData));
	addBordes(dataRange);
	merageExcelCell(worksheet, 1, 1, 1, columnNum);
	merageExcelCell(worksheet, 4, 1, 4, columnNum);
	merageExcelCell(worksheet, 7, 1, 7, columnNum);
}
int excelThread::max3int(int a,int b,int c)
{
	int max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	return max;
}
double excelThread::getMean(QVector<double> data)
{
	if (data.size() == 0) {
		return 0;
	}
	double sum = std::accumulate(data.begin(), data.end(), 0.0);
	
	double mean = sum / data.size(); 
	return mean;
}
double excelThread::getVar(QVector<double> data)
{
	if (data.size() == 0) {
		return 0;
	}
	double mean = getMean(data);
	double accum = 0.0;
	std::for_each(std::begin(data), std::end(data), [&](const double d) {
		accum += (d - mean)*(d - mean);
	});
	return accum/data.size();
}
double excelThread::getStd(QVector<double> data)
{
	if (data.size() == 0) {
		return 0;
	}
	double accum=getVar(data);
	return sqrt(accum);
}
void excelThread::merageExcelCell(QAxObject *worksheet,int r1, int c1, int r2, int c2)
{
	QString drange = intRangeToString(r1, c1, r2, c2);
	QAxObject *dataRange = worksheet->querySubObject("Range(const QString )", drange);
	dataRange->setProperty("MergeCells", true);
	dataRange->setProperty("HorizontalAlignment", -4108);
}
QString excelThread::intRangeToString(int r1, int c1, int r2, int c2)
{
	QString str;
	str = QString(char('A' + c1 - 1))+QString::number(r1)+str+":"+ QString(char('A' + c2 - 1))+ QString::number(r2);
	return str;
}
void excelThread::addBordes(QAxObject *dataRange)
{
	QAxObject *borders = dataRange->querySubObject("Borders");
	borders->setProperty("LineStyle", 1);
}
void excelThread::Supplementary(int maxNum, QList<QVariant>& row)
{
	for (int i = maxNum; maxNum > row.size(); i++) {
		row.append(QVariant(""));
	}
}
excelThread::~excelThread()
{
}
