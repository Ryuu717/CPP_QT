#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "page1.h"

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


void MainWindow::on_pushButton_clicked()
{
    Page1 *page1 = new Page1(this);
    setCentralWidget(page1);
}

