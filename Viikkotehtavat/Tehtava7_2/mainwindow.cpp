#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    if (tila == 3){
    QString num1Str = ui->num1->text();
    int Num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int Num2 = num2Str.toInt();

    int result = Num1+Num2;
    qDebug() << "Plus: " << result << "=" << Num1 << " + " << Num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    setActiveControls();
    }
}


void MainWindow::on_sub_clicked()
{
    if (tila == 3){
    QString num1Str = ui->num1->text();
    int Num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int Num2 = num2Str.toInt();

    int result = Num1 - Num2;
    qDebug() << "Miinus: " << result << "=" << Num1 << " - " << Num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    setActiveControls();
    }
}


void MainWindow::on_mul_clicked()
{
    if (tila == 3){
    QString num1Str = ui->num1->text();
    int Num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int Num2 = num2Str.toInt();

    int result = Num1 * Num2;
    qDebug() << "Kerto: " << result << "=" << Num1 << " * " << Num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    setActiveControls();
    }
}


void MainWindow::on_div_clicked()
{
    if (tila == 3){
    QString num1Str = ui->num1->text();
    int Num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int Num2 = num2Str.toInt();

    int result = Num1 / Num2;
    qDebug() << "Jako: " << result << "=" << Num1 << " / " << Num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    setActiveControls();
    }

}

void MainWindow::on_n1_clicked()
{
    QString str = ui->n1->text();
    int n = str.toInt();
    NumberClickHandler(n);
}

void MainWindow::on_n2_clicked()
{
    QString str = ui->n2->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n3_clicked()
{
    QString str = ui->n3->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n4_clicked()
{
    QString str = ui->n4->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n5_clicked()
{
    QString str = ui->n5->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n6_clicked()
{
    QString str = ui->n6->text();
    int n = str.toInt();
    NumberClickHandler(n);
}

void MainWindow::on_n7_clicked()
{
    QString str = ui->n7->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n8_clicked()
{
    QString str = ui->n8->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n9_clicked()
{
    QString str = ui->n9->text();
    int n = str.toInt();
    NumberClickHandler(n);
}


void MainWindow::on_n0_clicked()
{
    QString str = ui->n0->text();
    int n = str.toInt();
    NumberClickHandler(n);
}

void MainWindow::NumberClickHandler(int n)
{
    qDebug() << "Valittu numero= " << n;
    QString str = QString::number(n);
    if(tila == 1){
        qDebug() << "Elementti num1";
        ui->num1->setText(str);
    } else if (tila == 2){
        qDebug() << "Elementti num2";
        ui->num2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if(tila == 1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    }
    else if(tila == 2)
    {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    }
    else if(tila == 3)
    {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->mul->setEnabled(true);
        ui->div->setEnabled(true);
    }
}

void MainWindow::on_enter_clicked()
{
    if(tila == 1){
        tila = 2;
    }
    else if(tila == 2)
    {
        tila = 3;
    }
    else
    {
        tila = 1;
    }
    setActiveControls();
}

void MainWindow::on_clear_clicked()
{
    int num1 = 0;
    QString str = QString::number(num1);
    ui->num1->setText(str);
    ui->num2->setText(str);
    ui->result->setText(str);

    tila = 1;
    setActiveControls();
}
