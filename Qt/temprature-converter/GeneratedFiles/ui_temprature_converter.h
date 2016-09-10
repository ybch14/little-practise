/********************************************************************************
** Form generated from reading UI file 'temprature_converter.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPRATURE_CONVERTER_H
#define UI_TEMPRATURE_CONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tempconverter
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *CelsiusGroupBox;
    QLCDNumber *CelsiusNumber;
    QDial *CelsiusDial;
    QGroupBox *FahrenheitGroupBox;
    QDial *FahrenheitDial;
    QLCDNumber *FahrenheitNumber;

    void setupUi(QMainWindow *tempconverter)
    {
        if (tempconverter->objectName().isEmpty())
            tempconverter->setObjectName(QStringLiteral("tempconverter"));
        tempconverter->resize(262, 191);
        centralWidget = new QWidget(tempconverter);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 261, 191));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CelsiusGroupBox = new QGroupBox(layoutWidget);
        CelsiusGroupBox->setObjectName(QStringLiteral("CelsiusGroupBox"));
        CelsiusNumber = new QLCDNumber(CelsiusGroupBox);
        CelsiusNumber->setObjectName(QStringLiteral("CelsiusNumber"));
        CelsiusNumber->setGeometry(QRect(20, 150, 91, 31));
        CelsiusDial = new QDial(CelsiusGroupBox);
        CelsiusDial->setObjectName(QStringLiteral("CelsiusDial"));
        CelsiusDial->setGeometry(QRect(10, 0, 111, 171));
        CelsiusDial->setMinimum(-50);
        CelsiusDial->setMaximum(100);

        horizontalLayout->addWidget(CelsiusGroupBox);

        FahrenheitGroupBox = new QGroupBox(layoutWidget);
        FahrenheitGroupBox->setObjectName(QStringLiteral("FahrenheitGroupBox"));
        FahrenheitGroupBox->setCheckable(false);
        FahrenheitDial = new QDial(FahrenheitGroupBox);
        FahrenheitDial->setObjectName(QStringLiteral("FahrenheitDial"));
        FahrenheitDial->setGeometry(QRect(10, 0, 111, 171));
        FahrenheitDial->setMinimum(-58);
        FahrenheitDial->setMaximum(212);
        FahrenheitNumber = new QLCDNumber(FahrenheitGroupBox);
        FahrenheitNumber->setObjectName(QStringLiteral("FahrenheitNumber"));
        FahrenheitNumber->setGeometry(QRect(20, 150, 91, 31));

        horizontalLayout->addWidget(FahrenheitGroupBox);

        tempconverter->setCentralWidget(centralWidget);

        retranslateUi(tempconverter);

        QMetaObject::connectSlotsByName(tempconverter);
    } // setupUi

    void retranslateUi(QMainWindow *tempconverter)
    {
        tempconverter->setWindowTitle(QApplication::translate("tempconverter", "temprature_converter", 0));
        CelsiusGroupBox->setTitle(QApplication::translate("tempconverter", "Celsius", 0));
        FahrenheitGroupBox->setTitle(QApplication::translate("tempconverter", "Fahrenheit", 0));
    } // retranslateUi

};

namespace Ui {
    class tempconverter: public Ui_tempconverter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPRATURE_CONVERTER_H
