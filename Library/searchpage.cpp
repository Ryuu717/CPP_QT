#include "searchpage.h"
#include "ui_searchpage.h"

#include "returnbook.h"

SearchPage::SearchPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchPage)
{
    ui->setupUi(this);

    ////////////////////////////////////////////////////////
    //-->Returnbook page
    ////////////////////////////////////////////////////////
    connect(ui->pushButtonSearch,&QPushButton::clicked,[=](){
        ReturnBook * returnBook = new ReturnBook(this);
        this->hide();
        returnBook->show();
    });
}

SearchPage::~SearchPage()
{
    delete ui;
}
