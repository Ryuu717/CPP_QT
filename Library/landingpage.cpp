#include "landingpage.h"
#include "ui_landingpage.h"
#include "login.h"

LandingPage::LandingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LandingPage)
{
    ui->setupUi(this);


    ////////////////////////////////////////////////////////
    //-->Login page
    ////////////////////////////////////////////////////////
    connect(ui->pushButtonLogin,&QPushButton::clicked,[=](){
        Login * login = new Login(this);     //1.Heap style
        this->hide();
        login->show();
    });
}

LandingPage::~LandingPage()
{
    delete ui;
}

