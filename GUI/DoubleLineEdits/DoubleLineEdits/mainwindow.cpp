#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(ui->lineEdit->text() + ui->lineEdit_2->text());
}
