#include "passWin.h"

passWin::passWin(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.passwordEdit->setEchoMode(QLineEdit::Password);
}

passWin::~passWin()
{
}

void passWin:: on_password_clicked()
{
	//if (ui.passwordEdit->text() == "heurobocon") {
		this->hide();
		w.show();
	//}
	//else{
	//	
	//}
}