#pragma once

#include <QObject>
#include <QVector>
#include <qlist.h>
#include <qmap.h>
#include <QAxObject>
#include <myRecordInfo.h>
class excelThread : public QObject
{
	Q_OBJECT

public:
	excelThread(QObject *parent = Q_NULLPTR);
	excelThread(QVector<quint16> dataID) :_dataID(dataID){}
	~excelThread();
signals:
	void quitCurrentThread();
signals:
	void askForInfo();
signals:
	void dataNumChanged();
public slots:
	void startRecordSlot();
	void endRecordSlot();
	void addData(quint16 id, double);
	void reviveFilePath(QString filePath);
	void getDataInfo(QMap<quint16, myRecordInfo*>);
private:
	QVector<quint16> _dataID;
	QString _filePath;
	QMap<quint16, myRecordInfo*> _dataInfo;
	bool nameReady=false;
	QMap<quint16,QVector<double>> dataBuffer;
	void saveData();
	inline void saveStatistics(QAxObject *worksheet);
	inline void saveData(QAxObject *worksheet);
	inline double getMean(QVector<double> data);
	inline double getVar(QVector<double> data);
	inline double getStd(QVector<double> data);
	inline int max3int(int a, int b, int c);
	inline QString intRangeToString(int r1, int c1, int r2, int c2);
	inline void merageExcelCell(QAxObject *worksheet,int r1, int c1, int r2, int c2);
	inline void Supplementary(int maxNum, QList<QVariant>& row);
	inline void addBordes(QAxObject *dataRange);
};
