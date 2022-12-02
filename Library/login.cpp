#include "login.h"
#include "ui_login.h"
#include "searchpage.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    ////////////////////////////////////////////////////////
    //-->Search page
    ////////////////////////////////////////////////////////
    connect(ui->pushButtonLogin,&QPushButton::clicked,[=](){
        SearchPage * searchPage = new SearchPage(this);     //1.Heap style
        this->hide();
        searchPage->show();
    });
}

Login::~Login()
{
    delete ui;
}
