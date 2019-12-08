#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "auth_window.h"
#include "reg_window.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_Main(new Ui::MainWindow)
{
    ui_Main->setupUi(this);
    connect(&ui_Auth, SIGNAL(AuthClosed),SLOT(AuthWindowClosed()));
}

void MainWindow::display()                                             //Ooops, overloaded function
{
    ui_Auth.show();

    this->hide();
}

void MainWindow::AuthWindowClosed()
{
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui_Main;
}
