#include "landingpage.h"
#include "signup.h"
#include "login.h"
#include "ui_landingpage.h"

LandingPage::LandingPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LandingPage)
{
    ui->setupUi(this);


    //LandingPage->Signup
    connect(ui->pushButtonSignup,&QPushButton::clicked,[=](){
        Signup * signUp = new Signup(this);
        this->hide();
        signUp->show();
    });

    //LandingPage->Login
    connect(ui->pushButtonLogin,&QPushButton::clicked,[=](){
        Login * login = new Login(this);
        this->hide();
        login->show();
    });

}

LandingPage::~LandingPage()
{
    delete ui;
}
