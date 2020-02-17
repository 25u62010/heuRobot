
#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QTimer>
#include <QList>
#include <ui_painter.h>
#include <qmessagebox.h>
#include "QChartView"
#include <QChart> 
#include "QtCharts/QChart"
#include "QLineSeries"
#include "QValueAxis"
#include "QTime"
#include "qmath.h"
#include "QDebug"
#include <myLineSries.h>
#include <qvector.h>
#include <qthread.h>
enum painterMode {
	autoAbjustMode = 0,
	selectPartMode,
	showAllMode,
	stopShow,
	pauseShow
};
class painter : public QWidget
{
	Q_OBJECT

protected:
	QtCharts::QChart *m_chart;	
	QVector<myLineSries*> lineSeriesVector;
	void timerEvent(QTimerEvent *event) Q_DECL_OVERRIDE;
public:
	painter() {}
	painter(QVector<quint16> lineToShow,QWidget *parent = 0);
	painter::painter(QVector<quint16> line, QVector<quint16> targetLineIDVector, QVector<double> targetLineInit, QWidget *parent = 0);
	~painter();
signals:
	void killMyself(painter*);
private:
	Ui::painter ui;
	QVector<QPointF> getData(quint16 id);
	QVector<quint16> lineID;
	void lineSeriesInit();
	int timeId;
	double time=0;
	double showTime = 0;
	double yMin= qInf();
	double yMax=-qInf();
	int maxSize = 5000;
	enum painterMode painterNowStatus= stopShow;
	QTime dataTime;
	double dtime;
	QtCharts::QValueAxis *axisX = new QtCharts::QValueAxis;
	QtCharts::QValueAxis *axisY = new QtCharts::QValueAxis;
	inline void autoAbjust();
	inline void showAll();
	inline void selectLIneComboBoxInit();
	inline void upDataYMaxYmin();
	std::map<quint16, QVector<double>> dataStorge;
	std::map<quint16, double> dataTemp;
private slots:
	void on_viewAllButton_clicked();
	void on_autoAbjustButton_clicked();
	void on_painterScrollBar_sliderMoved();
	void on_showRegionTimeButton_clicked();
	void on_selectLIneButton_clicked();
	void on_selectLIneComboBox_currentIndexChanged(const QString &text);
	void on_pauseShowButton_clicked();
	void on_clearLineButton_clicked();
	void reciveFilter(quint16 dataID, double);
	void on_selectLIneComboBox_currentTextChanged(const QString &text);
	void on_showAllButton_clicked();
	void on_hideAllButton_clicked();
	void on_getProcess_clicked();
	void autostart();
protected:
	void closeEvent(QCloseEvent *event) {
		emit killMyself(this);
	}
}; 

#endif 