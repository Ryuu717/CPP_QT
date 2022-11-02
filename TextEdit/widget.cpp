#include "widget.h"

#include <QLabel>
#include <QTextEdit>
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

void Widget::setupUI()
{
    //Label
    //QLabel *mlabel = new QLabel("This is my first label", this);
    QLabel *mlabel = new QLabel(this);
    mlabel->setText("My Text Editor");
    mlabel->move(50,25);

    QFont mlabelFont("Times", 20, QFont::Bold);
    mlabel->setFont(mlabelFont);


    //TextEdit
    QTextEdit *textedit = new QTextEdit(this);
    textedit->move(70,55);

    //connecting test
    connect(textedit,&QTextEdit::textChanged,[=](){
        //qDebug() << "Text changed";
    });

    //copy
    QPushButton * copyButton = new QPushButton("Copy",this);
    copyButton->setMinimumSize(60,25);
    copyButton->move(70,250);
    connect(copyButton,&QPushButton::clicked,[=](){
        textedit->copy();
    });

    //paste
    QPushButton * pasteButton = new QPushButton("Paste",this);
    pasteButton->setMinimumSize(60,25);
    pasteButton->move(140,250);
    connect(pasteButton,&QPushButton::clicked,[=](){
        textedit->paste();
    });

    //cut
    QPushButton * cutButton = new QPushButton("Cut",this);
    cutButton->setMinimumSize(60,25);
    cutButton->move(210,250);
    connect(cutButton,&QPushButton::clicked,[=](){
        textedit->cut();
    });

    //Undo
    QPushButton * undoButton = new QPushButton("Undo",this);
    undoButton->setMinimumSize(60,25);
    undoButton->move(280,250);
    connect(undoButton,&QPushButton::clicked,[=](){
        textedit->undo();
    });

    //html
    QPushButton * htmlButton = new QPushButton("HTML",this);
    htmlButton->setMinimumSize(60,25);
    htmlButton->move(350,250);
    connect(htmlButton,&QPushButton::clicked,[=](){
        textedit->setHtml("<h1>Hello!</h1>");
    });
}

