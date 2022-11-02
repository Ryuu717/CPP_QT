#include "widget.h"

#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>
#include <QGridLayout>

#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUI();
    setFixedSize(500,500);
}

Widget::~Widget()
{
}


void Widget::setupUI(){
    //Name Label
    QLabel *nameLabel = new QLabel(this);
    nameLabel->setText("Name");
    nameLabel->move(25,25);

    QFont nameLabelFont("Times", 14, QFont::Bold);
    nameLabel->setFont(nameLabelFont);


    //LineEdit
    QLineEdit *nameLineEdit = new QLineEdit(this);
    nameLineEdit->setMinimumSize(255,15);
    nameLineEdit->move(70,25);


    //Address Label
    QLabel *addressLabel = new QLabel(this);
    addressLabel->setText("Address");
    addressLabel->move(25,50);

    QFont addressLabelFont("Times", 14, QFont::Bold);
    addressLabel->setFont(addressLabelFont);


    //TextEdit
    QTextEdit *addressTextEdit = new QTextEdit(this);
    addressTextEdit->move(70,50);



    //connecting test
//    connect(textedit,&QTextEdit::textChanged,[=](){
//        qDebug() << "Text changed";
//    });


    //Previous
    QPushButton * previousButton = new QPushButton("Previous",this);
    previousButton->setMinimumSize(100,25);
    previousButton->move(70,250);
    connect(previousButton,&QPushButton::clicked,[=](){
        //addressTextEdit->copy();
    });

    //Next
    QPushButton * nextButton = new QPushButton("Next",this);
    nextButton->setMinimumSize(100,25);
    nextButton->move(220,250);
    connect(nextButton,&QPushButton::clicked,[=](){
        //addressTextEdit->copy();
    });

    //Add
    QPushButton * addButton = new QPushButton("Add",this);
    addButton->setMinimumSize(80,25);
    addButton->move(350,25);
    connect(addButton,&QPushButton::clicked,[=](){
        addButton->show();
    });

    //Submit
    QPushButton * submitButton = new QPushButton("Submit",this);
    submitButton->setMinimumSize(80,25);
    submitButton->move(350,50);
    connect(submitButton,&QPushButton::clicked,[=](){
        submitButton->hide();
    });

    //Cancel
    QPushButton * cancelButton = new QPushButton("Cancel",this);
    cancelButton->setMinimumSize(80,25);
    cancelButton->move(350,75);
    connect(cancelButton,&QPushButton::clicked,[=](){
        cancelButton->hide();
    });


    //1.
//    QGridLayout * layout = new QGridLayout();

//    //First row
//    layout->addWidget(nameLabel,0,0);
//    layout->addWidget(nameLineEdit,0,1);
//    layout->addWidget(addButton,0,2);

//    //Second row
//    layout->addWidget(addressLabel,1,0);
//    layout->addWidget(addressTextEdit,1,1);
//    layout->addWidget(submitButton,1,2);
//    layout->addWidget(cancelButton,1,2);

//    //Third row
//    layout->addWidget(previousButton,3,1);
//    layout->addWidget(nextButton,3,2);

//    setLayout(layout);


    //2.
    QGridLayout * layout1 = new QGridLayout();

    //First row
    layout1->addWidget(nameLabel,0,0);
    layout1->addWidget(addressLabel,1,0);
//    layout1->addSpacerItem();

    QGridLayout * layout2 = new QGridLayout();
    //Second row
    layout2->addWidget(nameLineEdit,0,0);
    layout2->addWidget(addressTextEdit,1,0);
    layout2->addWidget(previousButton,2,0);
    layout2->addWidget(nextButton,2,1);



    QGridLayout * layout3 = new QGridLayout();
    layout3->addWidget(addButton,1,0);
    layout3->addWidget(submitButton,1,0);
    layout3->addWidget(cancelButton,1,0);
    //Third row


    setLayout(layout1);
    setLayout(layout2);
    setLayout(layout3);



    //3. different approach
//    QGridLayout * vlayout = new QGridLayout();

//    //First
//    vlayout->addWidget(nameLabel);
//    vlayout->addWidget(addressLabel);

//    vlayout->addWidget(nameLineEdit);
//    vlayout->addWidget(addressTextEdit);
//    vlayout->addWidget(previousButton);
//    vlayout->addWidget(nextButton);

//    vlayout->addWidget(addButton);
//    vlayout->addWidget(submitButton);
//    vlayout->addWidget(cancelButton);

//    QGridLayout * hlayout = new QGridLayout();
//    hlayout->addWidget(nameLabel);
//    hlayout->addWidget(nameLineEdit);

//    hlayout->addWidget(addressLabel);
//    hlayout->addWidget(addressTextEdit);
//    hlayout->addWidget(addButton);
//    hlayout->addWidget(submitButton);
//    hlayout->addWidget(cancelButton);

//    hlayout->addWidget(previousButton);
//    hlayout->addWidget(nextButton);















//    //copy
//    QPushButton * copyButton = new QPushButton("Copy",this);
//    copyButton->setMinimumSize(60,25);
//    copyButton->move(70,250);
//    connect(copyButton,&QPushButton::clicked,[=](){
//        addressTextEdit->copy();
//    });

//    //paste
//    QPushButton * pasteButton = new QPushButton("Paste",this);
//    pasteButton->setMinimumSize(60,25);
//    pasteButton->move(140,250);
//    connect(pasteButton,&QPushButton::clicked,[=](){
//        addressTextEdit->paste();
//    });

//    //cut
//    QPushButton * cutButton = new QPushButton("Cut",this);
//    cutButton->setMinimumSize(60,25);
//    cutButton->move(210,250);
//    connect(cutButton,&QPushButton::clicked,[=](){
//        addressTextEdit->cut();
//    });

//    //Undo
//    QPushButton * undoButton = new QPushButton("Undo",this);
//    undoButton->setMinimumSize(60,25);
//    undoButton->move(280,250);
//    connect(undoButton,&QPushButton::clicked,[=](){
//        addressTextEdit->undo();
//    });

//    //html
//    QPushButton * htmlButton = new QPushButton("HTML",this);
//    htmlButton->setMinimumSize(60,25);
//    htmlButton->move(350,250);
//    connect(htmlButton,&QPushButton::clicked,[=](){
//        addressTextEdit->setHtml("<h1>Hello!</h1>");
//    });
}

