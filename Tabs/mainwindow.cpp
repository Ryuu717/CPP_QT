#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QApplication>
#include <QTextEdit>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->showMessage("This is a status bar", 4000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionQuit_triggered()
{
    statusBar()->showMessage("App is going to die in 9s");
    QTimer::singleShot(9000,this,&MainWindow::quitApp);
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actioncut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::quitApp()
{
    QApplication::quit();
}

