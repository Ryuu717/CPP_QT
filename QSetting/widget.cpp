#include "widget.h"
#include "./ui_widget.h"
#include <QSettings>
#include <QColorDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    for( int i =0 ; i < 2 ; i++)
    {
        m_color_list.append(Qt::black);
    }

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[0],this,"Choose Background Color");
    if( color.isValid())
    {
        //Save the color
        m_color_list[0] = color;

        //Set background color
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton->setStyleSheet(css);
    }
}


void Widget::on_pushButton_2_clicked()
{
    QColor color = QColorDialog::getColor(m_color_list[1],this,"Choose Background Color");
    if( color.isValid())
    {
        //Save the color
        m_color_list[1] = color;

        //Set background color
        QString css = QString("background-color : %1").arg(color.name());
        ui->pushButton_2->setStyleSheet(css);
    }
}


////////////////////////////////////////////////////////////
//Save color setting
////////////////////////////////////////////////////////////
void Widget::on_pushButton_3_clicked()
{
    save_color("button1",m_color_list[0]);
    save_color("button2",m_color_list[1]);
}


void Widget::save_color(QString key, QColor color)
{
    int red = color.red();
    int green = color.green();
    int blue = color.blue();

    QSettings settings("MySetting","Setting");

    settings.beginGroup("ButtonColor");
    settings.setValue(key + "r",red);
    settings.setValue(key + "g",green);
    settings.setValue(key + "b",blue);
    settings.endGroup();
}



////////////////////////////////////////////////////////////
//Load color setting
////////////////////////////////////////////////////////////
void Widget::on_pushButton_4_clicked()
{
    set_loaded_color("button1",0,ui->pushButton);
    set_loaded_color("button2",1,ui->pushButton_2);
}


QColor Widget::load_color(QString key)
{
    int red;
    int green;
    int blue;
    QSettings settings("MySetting","Setting");

    settings.beginGroup("ButtonColor");

    red = settings.value(key+"r",QVariant(0)).toInt();
    green = settings.value(key+"g",QVariant(0)).toInt();
    blue = settings.value(key+"b",QVariant(0)).toInt();
    settings.endGroup();

    return QColor(red,green,blue);
}

void Widget::set_loaded_color(QString key, int index, QPushButton *button)
{
    QColor color = load_color(key);
    m_color_list[index] = color;
    QString css = QString("background-color : %1").arg(color.name());
    button->setStyleSheet(css);
}
