#pragma once

#include <QDialog>
#include "ui_saveTableDialog.h"

class saveTableDialog : public QDialog
{
	Q_OBJECT

public:
	saveTableDialog(QWidget *parent = Q_NULLPTR);
	~saveTableDialog();

private:
	Ui::saveTableDialog ui;
private slots:
	void on_saveButton_clicked();
	void on_broseButton_clicked();
signals:
	void convertDir(QString);

};
