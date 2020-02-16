#pragma once

#include <QObject>
#include <QVector>
#include <qlist.h>
#include <qmap.h>
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
	void getDataName(QStringList dataName);
private:
	QVector<quint16> _dataID;
	QStringList _dataName;
	QString _filePath;
	bool nameReady=false;
	QMap<quint16,QVector<double>> dataBuffer;
	void saveData();
	inline QString intRangeToString(int r1, int c1, int r2, int c2);
};
