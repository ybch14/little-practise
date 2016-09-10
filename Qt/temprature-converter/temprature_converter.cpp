#include "temprature_converter.h"
tempconverter::tempconverter(int t_tempcelsius,QWidget *parent)
	:QMainWindow(parent)
{
	setupUi(this);
	tempcelsius=t_tempcelsius;
	connect(CelsiusDial,SIGNAL(valueChanged(int)),this,SLOT(setCelsiusValue(int)));
	connect(FahrenheitDial,SIGNAL(valueChanged(int)),this,SLOT(setFahrenheitValue(int)));
	connect(CelsiusDial,SIGNAL(valueChanged(int)),CelsiusNumber,SLOT(display(int)));
	connect(FahrenheitDial,SIGNAL(valueChanged(int)),FahrenheitNumber,SLOT(display(int)));
	connect(this,SIGNAL(CelsiusValueChanged(int)),CelsiusDial,SLOT(setValue(int)));
	connect(this,SIGNAL(FahrenheitValueChanged(int)),FahrenheitDial,SLOT(setValue(int)));
}
void tempconverter::setCelsiusValue(int tempCelsius)
{
	if(tempcelsius==tempCelsius)
		return;
	tempcelsius=tempCelsius;
	emit CelsiusValueChanged(tempcelsius);
	emit FahrenheitValueChanged(tempcelsius*9.0/5.0+32);
}
void tempconverter::setFahrenheitValue(int tempFahrenheit)
{
	int temp=(5.0/9.0)*(tempFahrenheit-32);
	setCelsiusValue(temp);
}
