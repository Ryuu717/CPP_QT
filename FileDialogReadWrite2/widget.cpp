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


//1.WriteFile
void Widget::on_pushButtonWrite_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save As");
            if(fileName.isEmpty())
                return;

            QFile file(fileName);

                //Open the file
                if(!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
                   return;

                QTextStream out(&file);
                out << ui->textEdit->toPlainText() << "\n";
                file.close();
}


//2. Read Text File
void Widget::on_pushButtonrRead_clicked()
{
   QString fileContent;

    QString fileName = QFileDialog::getOpenFileName(this, "Open File");
            if(fileName.isEmpty())
                return;

            QFile file(fileName);

                if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
                   return;

                QTextStream in(&file);
                QString line = in.readLine();

                while(!line.isNull()){
                    fileContent.append(line);
                    line = in.readLine();
                }
                file.close();
                ui->textEdit->clear();
                ui->textEdit->setPlainText(fileContent);
}




void Widget::on_copypushButton_clicked()
{
    QString fileContent;

     QString srcFileName = ui->sourcelineEdit->text();
     QString destFileName = ui->destlineEdit->text();

             if(srcFileName.isEmpty() || destFileName.isEmpty())
                 return;



             QFile file(srcFileName);

                 if(file.copy(destFileName))
                 {
                     QMessageBox::information (this, "Success", "Copy", "Successful");
                 }else{
                     QMessageBox::information (this, "Failure", "Copy", "Failed");
                 }

}


void Widget::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open File");
            if(fileName.isEmpty())
                return;
    ui->sourcelineEdit->setText(fileName);
}

