#include "landingpage.h"
#include "userpage.h"
#include "userprofile.h"
#include "usercovid19testresult.h"
#include "ui_userpage.h"

UserPage::UserPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserPage)
{
    ui->setupUi(this);


    //UserPage->UserCovid19TestResult
    connect(ui->pushButtonCovid19TestResult,&QPushButton::clicked,[=](){
        UserCovid19TestResult * covid19TestResult = new UserCovid19TestResult(this);
        this->hide();
        covid19TestResult->show();
    });


    //UserPage->UserProfile
    connect(ui->pushButtonProfile,&QPushButton::clicked,[=](){
        UserProfile * userProfile = new UserProfile(this);
        this->hide();
        userProfile->show();
    });

    //UserPage->Landingpage
    connect(ui->pushButtonLogout,&QPushButton::clicked,[=](){
        LandingPage * landingpage = new LandingPage(this);
        this->hide();
        landingpage->show();
    });

}

UserPage::~UserPage()
{
    delete ui;
}
