#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

QString* str = new QString();                                       //this is very important goal to me now, at 17.09.2019
                                                                    //now I can extract data from ui objects to operate them
void MainWindow::on_lineEdit_textEdited(const QString &arg1)        //with other functions and this is the proof
{
    *str = arg1;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(str->toUpper());
}
