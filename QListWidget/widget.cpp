#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
    ui->listWidget->addItem("Item1");
    ui->listWidget->addItem("Item2");

    QStringList listData;
        listData << "Item3" << "Item4" << "Item5";
        ui->listWidget->addItems(listData);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonAdd_clicked()
{
    ui->listWidget->addItem("New item");
}

