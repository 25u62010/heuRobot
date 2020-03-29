#include "myRecordInfo.h"

myRecordInfo::myRecordInfo(QString dataName, QObject *parent)
	: QObject(parent)
{
	_isRecordAvr = false;
	_isRecordStd = false;
	_isRecordVar = false;
	_dataName = dataName;
}

myRecordInfo::~myRecordInfo()
{
}
