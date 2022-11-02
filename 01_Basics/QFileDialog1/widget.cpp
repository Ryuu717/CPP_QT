#include "widget.h"
#include "./ui_widget.h"
#include <QFileDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_chooseButton_clicked()
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //1. getFileDirectory
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
//    QString dir = QFileDialog::getExistingDirectory(this, "Open Directory",
//                                                      QString(),
//                                                      QFileDialog::ShowDirsOnly
//                                                      | QFileDialog::DontResolveSymlinks);
//    if(!dir.isEmpty()){
//        qDebug() << "Your chosed dir is : " << dir;
//    }else{
//        qDebug() << "You didn't choose anything...";
//    }



    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //2. getOpenFileName
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
//    QString fileName = QFileDialog::getOpenFileName(this, "Open File",
//                                                      QString(),
//                                                      tr("Images (*.png *.xpm *.jpg)"));
//    qDebug() << "Your chosed file is : " << fileName;


    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //3. getOpenFileNames
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    QStringList files = QFileDialog::getOpenFileNames(
                              this,
                              "Select one or more files to open",
                              QString(),
                              "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");

    //Output1  Display at once
//    qDebug() << "Your chosen files are : " << files;


    //Output2  Display with For Loop
//    for(int i = 0; i<files.count(); i++){
//        qDebug() <<  files[i];
//    }

    //Output3  Display with auto
    for( auto f : files){
        qDebug() <<  f ;
    }


    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    //4. getSaveFileName
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
//    QString fileName = QFileDialog::getSaveFileName(this, "Save File",
//                                 QString(),
//                                 tr("Images (*.png *.xpm *.jpg)"));
//    qDebug() << "Your chosen filename is  : " << fileName;

}

