#include "heuRobocon.h"
#include <QtWidgets/QApplication>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	heuRobocon mainWindow;
	mainWindow.show();
	
	return a.exec();
}
