#include "login.h"
#include "signup.h"
#include "ui_signup.h"

#include <QPushButton>

Signup::Signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);


//    QPushButton * pushButton = new QPushButton("pushButton",this);
//    connect(pushButton,&QPushButton::clicked,[=](){
//        qDebug() << "Button clicked";
//        QWidget * signUp = new QWidget(this);
//        signUp->show();
//        qDebug() << "test";

//        hide();
//    });

    login = new Login();

    QPushButton * pushButton = new QPushButton("pushButton",this);

    //decoration
    QFont buttonFont("Times", 20, QFont::Bold);
    pushButton->move(200,200);
    pushButton->setFont(buttonFont);

    connect(pushButton,&QPushButton::clicked,[=](){
        //hide();
        mainwindow->hide();
        login->show();
    });

}

Signup::~Signup()
{
    delete ui;
}
