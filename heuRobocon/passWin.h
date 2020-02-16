#pragma once

#include <QWidget>
#include "ui_passWin.h"
#include "heuRobocon.h"

class passWin : public QWidget
{
	Q_OBJECT

public:
	passWin(QWidget *parent = Q_NULLPTR);
	~passWin();
private slots:
	void on_password_clicked();
private:
	Ui::passWin ui;
	heuRobocon w;

};
