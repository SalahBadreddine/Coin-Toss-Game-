/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Title;
    QLabel *current;
    QLabel *Balance;
    QLabel *Coin10;
    QLabel *Coin50;
    QLabel *Coin20;
    QPushButton *btn_toss;
    QLabel *Result10;
    QLabel *Result50;
    QLabel *Result20;
    QLabel *NULL10;
    QLabel *NULL20;
    QLabel *NULL50;
    QLabel *Win;
    QLabel *Loss;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(891, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Title = new QLabel(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(260, 20, 331, 51));
        Title->setStyleSheet(QString::fromUtf8("font-size: 20px ;"));
        current = new QLabel(centralwidget);
        current->setObjectName("current");
        current->setGeometry(QRect(260, 100, 141, 51));
        current->setStyleSheet(QString::fromUtf8("font-size: 20px;"));
        Balance = new QLabel(centralwidget);
        Balance->setObjectName("Balance");
        Balance->setGeometry(QRect(430, 100, 111, 51));
        Balance->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"border: 2px solid black ;\n"
"text-align: center;"));
        Coin10 = new QLabel(centralwidget);
        Coin10->setObjectName("Coin10");
        Coin10->setGeometry(QRect(30, 180, 261, 201));
        Coin10->setPixmap(QPixmap(QString::fromUtf8("10da.png")));
        Coin10->setScaledContents(true);
        Coin50 = new QLabel(centralwidget);
        Coin50->setObjectName("Coin50");
        Coin50->setGeometry(QRect(310, 180, 261, 201));
        Coin50->setPixmap(QPixmap(QString::fromUtf8("50da.png")));
        Coin50->setScaledContents(true);
        Coin20 = new QLabel(centralwidget);
        Coin20->setObjectName("Coin20");
        Coin20->setGeometry(QRect(600, 180, 261, 201));
        Coin20->setPixmap(QPixmap(QString::fromUtf8("20da.png")));
        Coin20->setScaledContents(true);
        btn_toss = new QPushButton(centralwidget);
        btn_toss->setObjectName("btn_toss");
        btn_toss->setGeometry(QRect(290, 520, 291, 61));
        Result10 = new QLabel(centralwidget);
        Result10->setObjectName("Result10");
        Result10->setGeometry(QRect(110, 410, 61, 51));
        Result10->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color:  #00FF00 ;"));
        Result50 = new QLabel(centralwidget);
        Result50->setObjectName("Result50");
        Result50->setGeometry(QRect(400, 410, 61, 51));
        Result50->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color:  #00FF00 ;"));
        Result20 = new QLabel(centralwidget);
        Result20->setObjectName("Result20");
        Result20->setGeometry(QRect(690, 410, 61, 51));
        Result20->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color:  #00FF00 ;"));
        NULL10 = new QLabel(centralwidget);
        NULL10->setObjectName("NULL10");
        NULL10->setGeometry(QRect(110, 410, 61, 51));
        NULL10->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color: #808080;"));
        NULL20 = new QLabel(centralwidget);
        NULL20->setObjectName("NULL20");
        NULL20->setGeometry(QRect(690, 410, 61, 51));
        NULL20->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color: #808080;"));
        NULL50 = new QLabel(centralwidget);
        NULL50->setObjectName("NULL50");
        NULL50->setGeometry(QRect(400, 410, 61, 51));
        NULL50->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color: #808080;"));
        Win = new QLabel(centralwidget);
        Win->setObjectName("Win");
        Win->setGeometry(QRect(370, 450, 121, 61));
        Win->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"text-align: center ;\n"
"color: #00FF00 ;"));
        Loss = new QLabel(centralwidget);
        Loss->setObjectName("Loss");
        Loss->setGeometry(QRect(370, 450, 121, 61));
        Loss->setStyleSheet(QString::fromUtf8("font-size: 25px ;\n"
"color: #FF0000 ;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "WELCOME TO THE COIN TOSS GAME", nullptr));
        current->setText(QCoreApplication::translate("MainWindow", "Current Balance:", nullptr));
        Balance->setText(QString());
        Coin10->setText(QString());
        Coin50->setText(QString());
        Coin20->setText(QString());
        btn_toss->setText(QCoreApplication::translate("MainWindow", "TOSS THE COINS !", nullptr));
        Result10->setText(QString());
        Result50->setText(QString());
        Result20->setText(QString());
        NULL10->setText(QString());
        NULL20->setText(QString());
        NULL50->setText(QString());
        Win->setText(QString());
        Loss->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
