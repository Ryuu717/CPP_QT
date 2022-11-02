/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LandingPage
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButtonSignup;
    QPushButton *pushButtonLogin;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LandingPage)
    {
        if (LandingPage->objectName().isEmpty())
            LandingPage->setObjectName("LandingPage");
        LandingPage->resize(607, 357);
        centralwidget = new QWidget(LandingPage);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 201, 31));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \".AppleSystemUIFont\";"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 60, 341, 181));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 101, 16));
        pushButtonSignup = new QPushButton(groupBox);
        pushButtonSignup->setObjectName("pushButtonSignup");
        pushButtonSignup->setGeometry(QRect(120, 50, 100, 32));
        pushButtonLogin = new QPushButton(groupBox);
        pushButtonLogin->setObjectName("pushButtonLogin");
        pushButtonLogin->setGeometry(QRect(120, 120, 100, 32));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 90, 51, 16));
        LandingPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LandingPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 607, 22));
        LandingPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LandingPage);
        statusbar->setObjectName("statusbar");
        LandingPage->setStatusBar(statusbar);

        retranslateUi(LandingPage);

        QMetaObject::connectSlotsByName(LandingPage);
    } // setupUi

    void retranslateUi(QMainWindow *LandingPage)
    {
        LandingPage->setWindowTitle(QCoreApplication::translate("LandingPage", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("LandingPage", "My health account ", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("LandingPage", "Login or Signup ", nullptr));
        pushButtonSignup->setText(QCoreApplication::translate("LandingPage", "Signup", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LandingPage", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("LandingPage", "or", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LandingPage: public Ui_LandingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H
