#include "auth_window.h"
#include "ui_auth_window.h"

Auth_Window::Auth_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Auth_Window)
{
    ui->setupUi(this);
}

Auth_Window::~Auth_Window()
{
    delete ui;
}

void Auth_Window::on_registerPushButton_2_clicked()
{
    ui_Reg.show();
}

/*void Auth_Window::on_regWin_closed()
{
    this->show();
}*/

void Auth_Window::on_loginPushButton_clicked()
{
    this->~Auth_Window();
}
