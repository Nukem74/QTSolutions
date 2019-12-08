#include "reg_window.h"
#include "ui_reg_window.h"

reg_Window::reg_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reg_Window)
{
    ui->setupUi(this);
}

reg_Window::~reg_Window()
{
    //emit regClosed();
    delete ui;
}

void reg_Window::on_registerPushButton_clicked()
{

    this->close();
}
