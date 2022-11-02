#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_okButton_clicked()
{
    QString user_name = ui->nameLineEdit->text();

    if(!user_name.isEmpty()){
        m_name = user_name;

        if(ui->appleRadioButton->isChecked()){
            m_favorite_fruit = "Apple";
        }
        if(ui->orangeRadioButton->isChecked()){
            m_favorite_fruit = "Orange";
        }
        if(ui->bananaRadioButton->isChecked())
        {
            m_favorite_fruit = "Banana";
        }

        //Accept
        accept();

    }else{
        reject();
    }
}


void InfoDialog::on_cancelButton_clicked()
{
    //Reject the dialog
    reject();
}

const QString &InfoDialog::name() const
{
    return m_name;
}

const QString &InfoDialog::favorite_fruit() const
{
    return m_favorite_fruit;
}

