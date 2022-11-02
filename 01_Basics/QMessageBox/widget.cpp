#include "widget.h"
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QPushButton * button = new QPushButton(this);//Heap
    button->setText("Click Me");
    button->move(200,200);

    connect(button,&QPushButton::clicked,[=](){

        //1. Hard way
//        QMessageBox message;
//        message.setMinimumSize(700,200);
//        message.setWindowTitle("Message Title");       //not show on Mac
//        message.setText("Have you clicked?");
//        message.setInformativeText("The button was clicled. Do you wan to comtinue?");
//        message.setIcon(QMessageBox::Critical);
//        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
//        message.setDefaultButton(QMessageBox::Cancel);

//        int ret = message.exec();



        //2. Critical Message
//        int ret = QMessageBox::critical(this,"Message Title",
//                                        "You have clicked me",
//                                        QMessageBox::Ok | QMessageBox::Cancel);


        //3. Information Message
//        int ret = QMessageBox::information(this,"Message Title",
//                                        "The button was clicled. Do you wan to comtinue?",
//                                        QMessageBox::Ok | QMessageBox::Cancel);


        //4. Question
//        int ret = QMessageBox::question(this,"Message Title",
//                                       "The button was clicled. Do you wan to comtinue?",
//                                       QMessageBox::Ok | QMessageBox::Cancel);





        //5. Warning message : Handling the user action
        int ret = QMessageBox::warning(this,"Message Title",
                                       "The button was clicled. Do you wan to comtinue?",
                                        QMessageBox::Ok | QMessageBox::Cancel);
        if ( ret == QMessageBox::Ok)
        {
            qDebug() << "User clicked on OK";
        }

        if ( ret == QMessageBox::Cancel)
        {
            qDebug() << "User clicked on Cancel";
        }
    });
}

Widget::~Widget()
{
}
