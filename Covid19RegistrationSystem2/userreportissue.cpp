#include "landingpage.h"
#include "userpage.h"
#include "userreportissue.h"
#include "ui_userreportissue.h"
#include <QMessageBox>

UserReportIssue::UserReportIssue(QWidget *parent, QString email) :
    QDialog(parent),
    ui(new Ui::UserReportIssue)
{
    ui->setupUi(this);

    //Get User email
    this->email = email;

    //Get User Information
    getUesrInfo();

    //Icons
    int iconSize = 25;

    QPixmap user(":/Images/user.png");
    ui->labelIconUser->setPixmap(user.scaled(iconSize,iconSize));

    //Set User Information
    ui->labelUserName->setText(firstName);

    //->Home
    connect(ui->pushButtonHome,&QPushButton::clicked,[=](){
        UserPage * userpage = new UserPage(this,email);
        this->hide();
        userpage->show();
    });

    //->Landingpage
    connect(ui->pushButtonLogout,&QPushButton::clicked,[=](){
        LandingPage * landingpage = new LandingPage(this);
        this->hide();
        landingpage->show();
    });
    //Back
    connect(ui->pushButtonBack,&QPushButton::clicked,[=](){
        UserPage * userpage = new UserPage(this,email);
        this->hide();
        userpage->show();
    });
}

UserReportIssue::~UserReportIssue()
{
    delete ui;
}

//Get User Information
void UserReportIssue::getUesrInfo()
{
    auto query = QSqlQuery(db);

    if (query.exec("select * from user WHERE email='"+email+"'")) {
        query.next();
        id = query.value(0).toInt();
        firstName = query.value(1).toString();
        lastName = query.value(2).toString();
        birthday = query.value(3).toString();
//        NHINumber = query.value(4).toString();
        email = query.value(5).toString();
//        phone = query.value(6).toString();
//        password = query.value(7).toString();
//        dose1Date = query.value(8).toString();
//        dose1Manufacturer = query.value(9).toString();
//        dose1BatchNumber = query.value(10).toString();
//        dose2Date = query.value(11).toString();
//        dose2Manufacturer = query.value(12).toString();
//        dose2BatchNumber = query.value(13).toString();
//        RAT1Date = query.value(14).toString();
//        RAT1KitName = query.value(15).toString();
//        RAT1Result = query.value(16).toString();
//        RAT2Date = query.value(17).toString();
//        RAT2KitName = query.value(18).toString();
//        RAT2Result = query.value(19).toString();

    } else {
        qWarning() << query.lastError();
        qInfo() << query.lastQuery() << query.boundValues();
    }
}

void UserReportIssue::on_pushButtonRequest_clicked()
{
    QString userInputFirstName = ui->lineEditFirstName->text();
    QString userInputLastName = ui->lineEditLastName->text();
    QString userInputEmail = ui->lineEditEmail->text();


    //Submit request(Birth is not included)
    if(userInputFirstName == firstName && userInputLastName == lastName && userInputEmail == email){
        QMessageBox::information(this,"Submit","Successfully submitted");

        //Add message to the report table
        QSqlQuery query(db);

        report = ui->textEditMessage->toPlainText();

        query.exec("INSERT INTO "
                   "reports(FirstName, LastName, Email, Report) "
                   "VALUES('"+firstName+"', '"+lastName+"', '"+email+"', '"+report+"')");


        UserPage * userpage = new UserPage(this, email);
        this->hide();
        userpage->show();

    } else {
        QMessageBox::information(this,"Submit","You entered wrong informaion");
    }
}

