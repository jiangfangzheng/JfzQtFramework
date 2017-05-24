#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qApp->setFont(QFont("Microsoft YaHei", 9));

	MainWindow w;
	w.show();

	return a.exec();
}
