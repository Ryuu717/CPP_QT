#include "userpage.h"
#include "usercovid19testresult.h"
#include "ui_usercovid19testresult.h"

UserCovid19TestResult::UserCovid19TestResult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserCovid19TestResult)
{
    ui->setupUi(this);


    //UserCovid19TestResult->UserPage
//    connect(ui->labelHome,SIGNAL(clicked(const QString& text)),[=](){
//        UserPage * userpage = new UserPage(this);
//        this->hide();
//        userpage->show();
//    });

//    connect(ui->labelHome, SIGNAL(clicked(const QString& text)),
//                this, SLOT(goHome()));

//    connect(ui->labelHome, SIGNAL(clicked()) ,
//                this, SLOT(goHome()));



    //UserCovid19TestResult->Home
    connect(ui->pushButtonHome,&QPushButton::clicked,[=](){
        UserPage * userpage = new UserPage(this);
        this->hide();
        userpage->show();
    });

}

UserCovid19TestResult::~UserCovid19TestResult()
{
    delete ui;
}



//void UserCovid19TestResult::goHome()
//{
//    UserPage * userpage = new UserPage(this);
//    this->hide();
//    userpage->show();

//    qDebug() << "clicked";
//}

