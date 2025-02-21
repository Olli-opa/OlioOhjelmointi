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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Number1;
    QLabel *Number2;
    QLabel *Result_2;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *n1;
    QPushButton *n4;
    QPushButton *n7;
    QPushButton *n2;
    QPushButton *n0;
    QPushButton *n5;
    QPushButton *n8;
    QPushButton *clear;
    QPushButton *n3;
    QPushButton *enter;
    QPushButton *n9;
    QPushButton *n6;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Number1 = new QLabel(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(70, 10, 37, 12));
        Number2 = new QLabel(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(170, 10, 37, 12));
        Result_2 = new QLabel(centralwidget);
        Result_2->setObjectName("Result_2");
        Result_2->setGeometry(QRect(280, 10, 37, 12));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(50, 30, 81, 20));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(150, 30, 81, 20));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(250, 30, 81, 20));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName("n1");
        n1->setGeometry(QRect(50, 60, 56, 18));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName("n4");
        n4->setGeometry(QRect(50, 90, 56, 18));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName("n7");
        n7->setGeometry(QRect(50, 120, 56, 18));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName("n2");
        n2->setGeometry(QRect(120, 60, 56, 18));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName("n0");
        n0->setGeometry(QRect(50, 150, 56, 18));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName("n5");
        n5->setGeometry(QRect(120, 90, 56, 18));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName("n8");
        n8->setGeometry(QRect(120, 120, 56, 18));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(120, 150, 56, 18));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName("n3");
        n3->setGeometry(QRect(190, 60, 56, 18));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(190, 150, 56, 18));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName("n9");
        n9->setGeometry(QRect(190, 120, 56, 18));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName("n6");
        n6->setGeometry(QRect(190, 90, 56, 18));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(260, 60, 56, 18));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(260, 90, 56, 18));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(260, 120, 56, 18));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(260, 150, 56, 18));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Number1->setText(QCoreApplication::translate("MainWindow", "Number1", nullptr));
        Number2->setText(QCoreApplication::translate("MainWindow", "Number2", nullptr));
        Result_2->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
