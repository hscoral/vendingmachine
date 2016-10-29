#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QTreeWidget>
#include<QTreeWidgetItem>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QMessageBox::information(nullptr,"my_title","Hello world!");
}

void Widget::on_pushButton_2_clicked()
{
    ui->checkBox->setChecked(!ui->checkBox->isChecked());
}

void Widget::on_pushButton_3_clicked()
{
     ui->listWidget->addItem("Grape");
}

void Widget::on_pushButton_4_clicked()
{
    QTreeWidgetItem * parentItem = ui->treeWidget->topLevelItem(0);
    QTreeWidgetItem * newitem = new QTreeWidgetItem(parentItem);
    newitem->setText(0,"");
    newitem->setText(1,"hong");
    newitem->setText(2,"90");
}
