/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(916, 600);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/quitIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/aboutIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon1);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName("actionAbout_Qt");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/aboutQtIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/copyIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/cutIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/pasteIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/undoIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/redoIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 916, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        toolBar->addAction(actionQuit);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(tooltip)
        actionQuit->setToolTip(QCoreApplication::translate("MainWindow", "Quit Application", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
