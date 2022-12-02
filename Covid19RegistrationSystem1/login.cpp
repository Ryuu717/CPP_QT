#include "login.h"
#include "signup.h"
#include "ui_login.h"

#include <QPushButton>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

//    signup = new Signup();


    QPushButton * pushButton1 = new QPushButton("pushButton1",this);

    //decoration
    QFont buttonFont("Times", 20, QFont::Bold);
    pushButton1->move(250,250);
    pushButton1->setFont(buttonFont);

    connect(pushButton1,&QPushButton::clicked,[=](){
        //Signup * signUp = new Signup(this);
        this->hide();
//        signUp->show();
    });
}

Login::~Login()
{
    delete ui;
}
