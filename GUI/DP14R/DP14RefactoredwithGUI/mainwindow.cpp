#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
QString temp;

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

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    temp = arg1;
}

void MainWindow::on_pushButton_clicked()
{

    int number,notribi;
    notribi = 0;
    number = temp.toInt();
    for(int i = 1; i != number; i++)
    {
        if(number % i == 0)
        {
            notribi = i;
        }
    }

    ui->label->setText(QString(notribi + '0'));
}
