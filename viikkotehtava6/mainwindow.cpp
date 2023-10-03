#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    isnum2Active = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N0_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("0");
    } else {
        ui->num2->insert("0");
    }
}

void MainWindow::on_N1_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("1");
    } else {
        ui->num2->insert("1");
    }
}

void MainWindow::on_N2_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("2");
    } else {
        ui->num2->insert("2");
    }
}

void MainWindow::on_N3_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("3");
    } else {
        ui->num2->insert("3");
    }
}

void MainWindow::on_N4_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("4");
    } else {
        ui->num2->insert("4");
    }
}

void MainWindow::on_N5_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("5");
    } else {
        ui->num2->insert("5");
    }
}

void MainWindow::on_N6_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("6");
    } else {
        ui->num2->insert("6");
    }
}

void MainWindow::on_N7_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("7");
    } else {
        ui->num2->insert("7");
    }
}

void MainWindow::on_N8_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("8");
    } else {
        ui->num2->insert("8");
    }
}

void MainWindow::on_N9_clicked()
{
    if(isnum2Active)
    {
        ui->num1->insert("9");
    } else {
        ui->num2->insert("9");
    }
}

void MainWindow::on_add_clicked()
{
    isnum2Active = false;
    SelectedCalculationMethod = "+";
}

void MainWindow::on_sub_clicked()
{
    isnum2Active = false;
    SelectedCalculationMethod = "-";
}

void MainWindow::on_mul_clicked()
{
    isnum2Active = false;
    SelectedCalculationMethod = "*";
}

void MainWindow::on_div_clicked()
{
    isnum2Active = false;
    SelectedCalculationMethod = "/";
}

void MainWindow::on_exit_clicked()
{
    close();
}

void MainWindow::on_enter_clicked()
{
    float num1 = ui->num1->text().toFloat();
    float num2 = ui->num2->text().toFloat();
    float result = 0;

    if(SelectedCalculationMethod == "+")
    {
        result = num1 + num2;
    }

    if(SelectedCalculationMethod == "-")
    {
        result = num1 - num2;
    }

    if(SelectedCalculationMethod == "*")
    {
        result = num1 * num2;
    }

    if(SelectedCalculationMethod == "/")
    {
        result = num1 / num2;
    }

    ui->result->setText(QString::number(result));
}

void MainWindow::on_clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    isnum2Active = true;
    SelectedCalculationMethod.clear();
}

