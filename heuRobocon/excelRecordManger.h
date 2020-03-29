#pragma once

#include <QWidget>
#include "ui_excelRecordManger.h"
#include <QCloseEvent>
#include <qtime>
#include <qmap.h>
#include <myRecordInfo.h>
#include <QSystemTrayIcon>
#include <qmenu.h>
class excelRecordManger : public QWidget
{
	Q_OBJECT

public:
	excelRecordManger(QVector<quint16> dataID,QWidget *parent = Q_NULLPTR);
	~excelRecordManger();
	Ui::excelRecordManger ui;
signals:
	void quitThread();
signals:
	void sendFilePath(QString filePath);
signals:
	void sendDataInfo(QMap<quint16, myRecordInfo*>);
signals:
	void endRecordSignal();
public slots:
	void getInfo();
	void on_dataIDComboBox_currentIndexChanged(int index);
	void on_dataNameEdit_textEdited(const QString &text);
	void on_averageImportCheckBox_clicked(bool action);
	void on_stdDevImportCheckBox_clicked(bool action);
	void on_varianceImportcheckBox_clicked(bool action);
	void dataNumUpdata();
	void TrayIconAction(QSystemTrayIcon::ActivationReason reason);//对托盘图标操作的槽：本代码实现单机图标恢复窗口功能
	void on_stopRecordButton_clicked();
private:
	void timerEvent(QTimerEvent *event) Q_DECL_OVERRIDE;
	void trayInit();
	QVector<quint16> _dataID;
	QMap<quint16, myRecordInfo*>  dataInfo;

	int _dataCount=0;
	int _timeId;
	QTime dataTime = QTime(0, 0, 0);

	QSystemTrayIcon *tray;//托盘图标
	QMenu *menu;//托盘菜单
	

protected:
	void closeEvent(QCloseEvent *event);
	void changeEvent(QEvent* event);
};
