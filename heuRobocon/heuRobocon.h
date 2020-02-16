#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_heuRobocon.h"
#include <QUdpSocket>
#include "qhostaddress.h"
#include "qvalidator.h"
#include <QTextCodec>
#include <QDebug>
#include <qvector.h>
#include <saveTableDialog.h>
#include <qtimer.h>
#include "painter.h"
#include <qvector.h>
#include <qmap.h>
class heuRobocon : public QMainWindow
{
	Q_OBJECT

public:
	heuRobocon(QWidget *parent = Q_NULLPTR);
	QUdpSocket *clientudp;
	QTimer* m_Timer;
private:
	Ui::heuRoboconClass ui;
	int currentRow=0;
	std::map<quint16,int> dataStorge;
private:
	inline QHostAddress getHostAddress();
	inline quint16 getPort();
	template <typename T>
	   QVector<double> dataConvert(const QByteArray data);
	void dataStore(QVector<double>, quint16 idStart, quint16 num);
	
	inline QVector<quint16> readItemsDig(QListWidget*);
signals:
	void sendData(quint16 dataID,double);
signals:
	void sendPID(QVector<double>);
signals:
	void  controlStartPaint();
signals:
	void excelRecordStarted();
signals:
	void excelRecordEnd();

private slots:
	void on_sendButton_clicked();
	void on_IP1_changed();
	void on_IP2_changed();
	void on_IP3_changed();
	void on_IP4_changed();
	void recv();
	void on_generalSend_clicked();
	void on_readPIDButton_clicked();
	void changePID(QVector<double>);
	void on_exportPIDTableButton_clicked();
	void on_clearTableButton_clicked();
	void saveTable(QString dir);
	void on_painterTemp_clicked();
	void on_addSelectdeButton_clicked();
	void on_deleteSelectButton_clicked();	
	void on_clearTxRxButton_clicked();
	void on_deleteRecordButton_clicked();
	void on_addRecordButton_clicked();
	void on_dataIDButton_clicked();
	void on_startRecordButton_clicked();
	void on_deleteSelected0Button_clicked();
};
