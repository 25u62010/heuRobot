#pragma once

#include <QWidget>
#include "ui_excelRecordManger.h"
#include <QCloseEvent>
#include <qtime>
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
	void sendDataNameSignals(QStringList);
public slots:
	void getInfo();
	void on_dataIDComboBox_currentIndexChanged(int index);
	void on_dataNameEdit_textEdited(const QString &text);
	void dataNumUpdata();
private:
	void timerEvent(QTimerEvent *event) Q_DECL_OVERRIDE;
	QVector<quint16> _dataID;
	QStringList dataName;
	int _dataCount=0;
	int _timeId;
	QTime dataTime = QTime(0, 0, 0);
protected:
	void closeEvent(QCloseEvent *event);
};
