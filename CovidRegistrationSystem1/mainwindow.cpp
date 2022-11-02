#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QWidget>
#include <QDebug>
#include <QPushButton>
#include <QObject>

#include "signup.h"
#include "ui_signup.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Signup * signup = new Signup(this);
    signup->show();
//    Login * login = new Login(this);
//    login->show();


//    connect(signup,&QPushButton::clicked,[=](){
//          this->hide();
//          login->show();
//    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Signup * signUp = new Signup(this);
    signUp->show();
    qDebug() << "test";

    hide();
}

