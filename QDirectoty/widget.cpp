#include "widget.h"
#include "./ui_widget.h"
#include <QFileDialog>
#include <QMessageBox>

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


void Widget::on_pushButton_clicked()
{
    QString filename = QFileDialog::getExistingDirectory(this,"Choose Folder");
    if( filename.isEmpty()){
        return;
    } else {
        ui->lineEdit->setText(filename);
    }
}


void Widget::on_pushButton_2_clicked()
{
    QString dirPath = ui->lineEdit->text();
    if( dirPath.isEmpty())
        return;
    QDir dir(dirPath);

    if(!dir.exists())
    {
        //Create it
        if(dir.mkpath(dirPath))
        {
            QMessageBox::information(this,"Message","Directory created");
        }
    }else
    {
        QMessageBox::information(this,"Message","Directory already exists");
    }
}


void Widget::on_pushButton_3_clicked()
{
    ui->listWidget->clear();

    QString dirPath = ui->lineEdit->text();
    if( dirPath.isEmpty())
        return;
    QDir dir(dirPath);

    //Get the list of files and directories in the folder
    QList<QFileInfo> fileList = dir.entryInfoList();

    for( int i = 0 ; i < fileList.size() ; i++)
    {
        ui->listWidget->addItem(fileList.at(i).absoluteFilePath());
    }
}


void Widget::on_pushButton_4_clicked()
{
    QFileInfo fileInfo(ui->listWidget->currentItem()->text());
     if( fileInfo.isDir())
     {
         QMessageBox::information(this,"Message","This a Dir");
     }
     else if( fileInfo.isFile())
     {
         QMessageBox::information(this,"Message","This a File");
     }else
     {
        QMessageBox::information(this,"Message","Something else");
     }
}

