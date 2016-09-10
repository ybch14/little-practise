#ifndef TEMPRATURE_CONVERTER_H
#define TEMPRATURE_CONVERTER_H
#include <QtGui>
#include <QtWidgets/QMainWindow>
#include "ui_temprature_converter.h"
class tempconverter:public QMainWindow,public Ui::tempconverter
{
	Q_OBJECT
public:
	tempconverter(int t_tempcelsius,QWidget *parent=0);
	//int tempcelsius()const;
	//int tempfahrenheit()const;
public slots:
	void setCelsiusValue(int);
	void setFahrenheitValue(int);
signals:
	void CelsiusValueChanged(int);
	void FahrenheitValueChanged(int);
private:
	int tempcelsius;
};
#endif // TEMPRATURE_CONVERTER_H
