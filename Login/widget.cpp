#include "widget.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    //Email
    QLabel * labelEmail = new QLabel("Email Address",this);
    labelEmail->setMinimumSize(70,30);
    labelEmail->move(10,10);

    QLineEdit * lineEditEmail = new QLineEdit(this);
    lineEditEmail->setMinimumSize(200,30);
    lineEditEmail->move(100,10);

    //Password
    QLabel * labelPassword = new QLabel("Password",this);
    labelPassword->setMinimumSize(70,30);
    labelPassword->move(10,70);

    QLineEdit * lineEditPassword = new QLineEdit(this);
    lineEditPassword->setMinimumSize(200,30);
    lineEditPassword->move(100,70);



    QFont button_font("Times", 18, QFont::Bold);
    QPushButton * button = new QPushButton("Login",this);
    button->setFont(button_font);
    button->move(100,190);

    connect(button,&QPushButton::clicked,[=](){
        QString first_name = lineEditEmail->text();
        QString last_name = lineEditPassword->text();

        if( !first_name.isEmpty() && !last_name.isEmpty())
        {
            QMessageBox::information(this,"Login","Login successfully!");
            qDebug() << " First name is : " << first_name;
            qDebug() << " Last name is : " << last_name;
        }else
        {
            QMessageBox::information(this,"Login","Please fill out all");
            qDebug() << "One the fields is empty ";
        }
    });

    //Hint text
    lineEditEmail->setPlaceholderText("email@gmail.com");
    lineEditPassword->setPlaceholderText("aaAA11##");
}

Widget::~Widget()
{
}

