#pragma once
#include <qlineseries.h>
#include <qstring.h>
using namespace QtCharts;

class myLineSries :
	public QLineSeries
{
public:
	myLineSries();
	myLineSries(quint16 _ID);
	myLineSries(QString name);
	myLineSries(quint16 _ID,QString name);
	~myLineSries();
	inline quint16 getLineID() {
		return id;
	}
	inline bool getLineShowStatus() {
		return lineShowStatus;
	}
	void setLineShowStatus(bool status);
	void updataYminYmax(double data);
	void compareWithYminYmax(double& min,double& max);
private:
	quint16 id;
	bool lineShowStatus=true;
	double yMin=0;
	double yMax=0;
};

