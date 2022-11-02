#include "landingpage.h"
#include "userpage.h"
#include "signup.h"
#include "userprofile.h"
#include "ui_userprofile.h"




UserProfile::UserProfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserProfile)
{
    ui->setupUi(this);

    Signup * signup = new Signup(this);
//    signup->Databaseconect();
//    signup->DatabaseInit();
//    signup->DatabasePopulate();


    if(!db.open()){
        qWarning() << "MainWindow::DatabaseConnect - ERROR: " << db.lastError().text();
//        return;
    }


    QSqlQuery query(db);

    QString firstName, lastName, email;

    if (query.prepare("SELECT * FROM user")) {
        if (query.exec()) {
            query.next();
//            while (query.next()) {
                QString value1 = query.value(0).toString();
                QString value2 = query.value(1).toString();
                QString value3 = query.value(2).toString();
                QString value4 = query.value(3).toString();
                qDebug() << value1 << "/" << value2 << "/" << value3 << "/" << value4 ;

                firstName = value2;
                lastName = value3;
                email = value4;
//            }
        } else {
            qWarning() << query.lastError();
            qInfo() << query.lastQuery() << query.boundValues();
        }
    } else {
        qWarning() << query.lastError();
    }

    ui->labelFirstName->setText(firstName);
    ui->labelLastName->setText(lastName);
    ui->labelEmail->setText(email);




    //UserCovid19TestResult->Home
    connect(ui->pushButtonHome,&QPushButton::clicked,[=](){
        UserPage * userpage = new UserPage(this);
        this->hide();
        userpage->show();
    });

    //UserCovid19TestResult->Landingpage
    connect(ui->pushButtonLogout,&QPushButton::clicked,[=](){
        LandingPage * landingpage = new LandingPage(this);
        this->hide();
        landingpage->show();
    });

}

UserProfile::~UserProfile()
{
    delete ui;
}
