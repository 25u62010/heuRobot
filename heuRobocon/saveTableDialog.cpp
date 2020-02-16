#include "saveTableDialog.h"
#include <QFileDialog.h>
#include <QFileDialog>
#include <qstring.h>
#include <qdatetime.h>
saveTableDialog::saveTableDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}
void saveTableDialog::on_saveButton_clicked()
{
	QString dir = ui.dirEdit->text();
	emit convertDir(dir);
	this->accept();
}
void saveTableDialog::on_broseButton_clicked()
{
	QDateTime *dataTime = new QDateTime();
	QString fileName1 = QString("/pidRecord") + dataTime->currentDateTime().toString("(yyyyMMddHHmm)");
	QString directory = QFileDialog::getSaveFileName(NULL, QObject::tr("Save orbit"), fileName1, QObject::tr("(*.xlsx);;(*.xls)"));
	ui.dirEdit->setText(directory);
}
saveTableDialog::~saveTableDialog()
{
}
