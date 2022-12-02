#include "borrowbook.h"
#include "ui_borrowbook.h"

BorrowBook::BorrowBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BorrowBook)
{
    ui->setupUi(this);
}

BorrowBook::~BorrowBook()
{
    delete ui;
}
