#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LisaNappi_clicked()
{
    // 1. lue numero elementistä
    QString str = ui->numeroNaytto->text();
    int num = str.toInt();
    qDebug() << "Numero= " << num;
    // 2. kasvata numeroa yhdellä
    num++;
    // 3. aseta numero takaisin elementtiin
    qDebug() << "Kasvatettu numero= " << num;
    QString uusStr = QString::number(num);
    ui->numeroNaytto->setText(uusStr);
}


void MainWindow::on_ResetNappi_clicked()
{
    // asettaa elementin takaisin nollaan
    QString str = ui->numeroNaytto->text();
    int num = str.toInt();
    qDebug() << "Numero= " << num;
    num = 0;
    qDebug() << "Nollattu numero= " << num;
    QString uusStr = QString::number(num);
    ui->numeroNaytto->setText(uusStr);
}

