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
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actioncut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout;
    QAction *actionQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(444, 335);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/clipboard_paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName("actioncut");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncut->setIcon(icon2);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Undo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Redo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/red-quit-button-top-down-260nw-291189914.webp"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon6);
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
        menubar->setGeometry(QRect(0, 0, 444, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionQuit);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actioncut);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actioncut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
