#pragma once

#include <QObject>

class myRecordInfo : public QObject
{
	Q_OBJECT

public:
	myRecordInfo(QString dataName,QObject *parent = nullptr);
	~myRecordInfo();

	QString inline getDataName() { return _dataName; }
	bool inline getRecordAvrStatus() { return _isRecordAvr; }
	bool inline getRecordStdStatus() { return _isRecordStd; }
	bool inline getRecordVarStatus() { return _isRecordVar; }

	void inline setDataName(QString newDataName) { _dataName = newDataName; };
	void inline setRecordAvrStatus(bool sta) { _isRecordAvr = sta; }
	void inline setRecordStdStatus(bool sta) { _isRecordStd = sta; }
	void inline setRecordVarStatus(bool sta) { _isRecordVar = sta; }

private:
	QString _dataName;
	bool _isRecordAvr;
	bool _isRecordStd;
	bool _isRecordVar;
	
};
