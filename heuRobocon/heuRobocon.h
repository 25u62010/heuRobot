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
#include <QTableWidgetItem>
#include <QListWidget>
#include <dataFormat.h>
#include <qbluetoothdevicediscoveryagent.h>
#include <QBluetoothLocalDevice>
#include <QBluetoothSocket.h>
#include <myRecordInfo.h>

#include <windows.h>  
#include <BluetoothAPIs.h>  

class heuRobocon : public QMainWindow
{
	Q_OBJECT

public:
	heuRobocon(QWidget *parent = Q_NULLPTR);
	
private:
	Ui::heuRoboconClass ui;
	int currentRow=0;
	std::map<quint16,int> dataStorge;
	QMap<quint16,double> targetLinInit;
	QUdpSocket *clientudp;
	QTimer* m_Timer;
	QBluetoothDeviceDiscoveryAgent *discoveryAgent;
	QBluetoothLocalDevice *localDevice;
	QBluetoothSocket *socket;
	
	inline QHostAddress getHostAddress();
	inline quint16 getPort();
	template <typename T>
	   QVector<double> dataConvert(const QByteArray data);
	void dataStore(QVector<double>, quint16 idStart, quint16 num);
	inline void dataRecv(const QByteArray data);
	inline void heuRobocon::dataSend(const QByteArray data);
	inline void  autoAbjustPIDRceordTable();
	inline QVector<quint16> readItemsDig(QListWidget*);
	inline QVector<double> searchForInitData(QVector<quint16> dataID, QVector<quint16>& targetDataId);
	inline void writeToRecvieArea(const QByteArray data, bool ifAccordantRule);
	inline bool checkReciveData(const QByteArray data, quint16 dataId);
	inline void writeToSendArea(const QByteArray data);
	inline void updateReciveNum(int dataSize);
	inline void updateSendNum(int dataSize);
	inline void reciveDateDeal(const QByteArray data, const quint16 dataId);
	inline void writeToPIDRecordTable(const QStringList pidStringList);
	void resizeEvent(QResizeEvent * event);
	template<typename T, quint16 num>
		QByteArray covertDataToSend(HEURC_dataFormat::dataInfoDef _dataInfo, double data[num]);
	void udpInit();
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
	
	void udpRecv();
	void on_generalSend_clicked();
	void on_readPIDButton_clicked();
	void changePID(QVector<double>);
	void on_exportPIDTableButton_clicked();
	void on_clearTableButton_clicked();
	void saveTable(QString dir);
	void on_addRow_clicked();
	void on_painterTemp_clicked();
	void on_addSelectdeButton_clicked();
	void on_deleteSelectButton_clicked();	
	void on_clearTxRxButton_clicked();
	void on_deleteRecordButton_clicked();
	void on_addRecordButton_clicked();
	void on_dataIDButton_clicked();
	void on_startRecordButton_clicked();
	void on_deleteSelected0Button_clicked();
	void on_deleteRowButton_clicked();
	void on_addTargetLineButton_clicked();
	void on_illustratePDFLinkButton_clicked();
	void on_startBluetoothButton_clicked();
	void addBlueToothDevicesToList(QBluetoothDeviceInfo);
	void on_connectBlueToothButton_clicked();
	void killPainter(painter* painterToKill) {
		delete painterToKill;
	}
	void on_targetButton_clicked();
	void bluetoothConnectedEvent();
};
