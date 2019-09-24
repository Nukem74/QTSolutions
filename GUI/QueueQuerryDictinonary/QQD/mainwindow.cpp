#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QString* temp = new QString();

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_2_clicked()
{
    *temp += " SELECT ";
    ui->lineEdit->setText(*temp);
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    *temp = arg1;
}
