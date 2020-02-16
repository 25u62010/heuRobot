#include "myLineSries.h"

myLineSries::myLineSries()
	:QLineSeries()
{

}
myLineSries::myLineSries(quint16 _ID) 
	: QLineSeries()
{
	id = _ID;
}
myLineSries::myLineSries(QString name)
	: QLineSeries()
{
	this->setName(name);
}
myLineSries::myLineSries(quint16 _ID, QString name)
	: QLineSeries()
{
	id = _ID;
	this->setName(name);
}
void myLineSries::setLineShowStatus(bool status)
{
	this->lineShowStatus = status;
	if (status == true) {
		this->show();	
	}
	else if (status == false) {
		this->hide();
	}
}
void myLineSries::updataYminYmax(double data)
{
	if (data > yMax) {
		yMax = data;
	}
	else if (data < yMin) {
		yMin = data;
	}
}
void myLineSries::compareWithYminYmax(double& min, double& max)
{
	if (this->lineShowStatus==false) {
		return;
	}
	if (yMin < min) {
		min = yMin;
	}
	else if (yMax > max) {
		max = yMax;
	}
}
myLineSries::~myLineSries()
{

}


