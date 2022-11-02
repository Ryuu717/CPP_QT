#include "widget.h"
#include "./ui_widget.h"
#include <QFileDialog>
#include <QFontDialog>
#include <QColorDialog>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setAutoFillBackground(true);
}

Widget::~Widget()
{
    delete ui;
}


//1.FileDialog
void Widget::on_pushButton_clicked()
{
    //1.
//    QString dir = QFileDialog::getExistingDirectory(this, "Open Directory",
//                                                      QString(),
//                                                      QFileDialog::ShowDirsOnly
//                                                      | QFileDialog::DontResolveSymlinks);

    //2.
    QString fileName = QFileDialog::getSaveFileName(this, "Save File",
                                 QString(),
                                 tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "Your chosen filename is  : " << fileName;
}



//2. QFontDialog
void Widget::on_pushButton_2_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(
                    &ok, QFont("Helvetica [Cronyx]", 10), this);
    if (ok) {
        // the user clicked OK and font is set to the font the user selected
        ui->label->setFont(font);
    } else {
        // the user canceled the dialog; font is set to the initial
        // value, in this case Helvetica [Cronyx], 10
    }
}




//3.Color Dialog
void Widget::on_pushButton_3_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::WindowText);
    QColor chosenColor = QColorDialog::getColor(color,this,"Choose text color");

    if(chosenColor.isValid())
    {
        palette.setColor(QPalette::WindowText,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User chose a valid color";
    }else
    {
       qDebug() << "User chose a invalid color";
    }
}



void Widget::on_pushButton_4_clicked()
{
    QPalette palette = ui->label->palette();
    QColor color = palette.color(QPalette::Window);
    QColor chosenColor = QColorDialog::getColor(color,this,"Choose color");

    if(chosenColor.isValid())
    {
        palette.setColor(QPalette::Window,chosenColor);
        ui->label->setPalette(palette);
        qDebug() << "User choose a valid color";
    }else
    {
       qDebug() << "User choose a invalid color";
    }
}

