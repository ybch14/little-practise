#include "temprature_converter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	tempconverter *temp=new tempconverter(0);
	temp->show();
	return a.exec();
}
