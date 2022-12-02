#include "widget.h"
#include "./ui_widget.h"

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
    for(size_t i{}; i < ui->tableWidget->rowCount();++i){
        for(size_t j{}; j < ui->tableWidget->columnCount(); ++j){

             auto item_ptr = ui->tableWidget->item(i,j);
             if(item_ptr){
                 QVariant data = item_ptr->data(Qt::DisplayRole);
                 qDebug() << data.toString();
             }else{
                 qDebug() << "no data";
             }
        }
    }
}


void Widget::on_pushButton_2_clicked()
{
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->insertColumn(ui->tableWidget->columnCount());

    QTableWidgetItem *newItem = new QTableWidgetItem("New item");
      ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,
                              ui->tableWidget->columnCount()-1, newItem);

}

