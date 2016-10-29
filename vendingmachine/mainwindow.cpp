#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked( )
{
    if (ui -> lcdNumber -> intValue() < 9000)
    {
        ui -> lcdNumber -> display(ui->lcdNumber->intValue() + 1000);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui -> lcdNumber -> intValue() < 9500)
    {
        ui -> lcdNumber -> display(ui->lcdNumber->intValue() + 500);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (ui -> lcdNumber -> intValue() < 9900)
    {
        ui -> lcdNumber -> display(ui->lcdNumber->intValue() + 100);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if (ui -> lcdNumber -> intValue() >= 1000)
    {
        ui -> lcdNumber -> display(ui->lcdNumber->intValue() - 1000);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if (ui -> lcdNumber -> intValue() >= 1500)
    {
        ui -> lcdNumber -> display(ui->lcdNumber->intValue() - 1500);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if (ui -> lcdNumber -> intValue() >= 1600)
    {
        ui -> lcdNumber -> display(ui->lcdNumber->intValue() - 1600);
    }
}
