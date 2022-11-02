#include "mywidget.h"
#include <QLabel>
#include <QPushButton>
#include <QDebug>

myWidget::myWidget(QWidget *parent)
    : QWidget{parent}
{
    //Label
    QLabel *label = new QLabel(this);
    label->setText("This is my first label");
    label->move(50,50);



    //Label1
    //Add a stytled widget and move it around
    QPalette label1Palette;
    label1Palette.setColor(QPalette::Window,Qt::yellow);
    label1Palette.setColor(QPalette::WindowText,Qt::blue);

    QFont label1Font("Times", 20, QFont::Bold);
    QLabel * label1 = new QLabel(this);
    label1->setAutoFillBackground(true);
    label1->setText("This is my decorated label");
    label1->setFont(label1Font);
    label1->setPalette(label1Palette);
    label1->move(200,200);


    //Button
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton(this);
    button->setText("myButton");
    button->setFont(buttonFont);
    button->move(300,300);
    connect(button,SIGNAL(clicked()),this,SLOT(button_clicked()));
}

QSize myWidget::sizeHint() const
{
    return QSize(500,500);
}

void myWidget::button_clicked()
{
//    QLabel *label2 = &label;
//    label2->setText("New lavel");
//    label2->move(400,400);
}


