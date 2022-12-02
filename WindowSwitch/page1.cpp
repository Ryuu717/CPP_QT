#include "page1.h"
#include "ui_page1.h"

#include "mainwindow.h""

Page1::Page1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page1)
{
    ui->setupUi(this);
}

Page1::~Page1()
{
    delete ui;
}

void Page1::on_pushButtonBack_clicked()
{
    MainWindow *mainwindow = new MainWindow(this);


}

