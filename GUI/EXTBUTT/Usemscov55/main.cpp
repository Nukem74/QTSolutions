#include "mainwindow.h"
#include <QApplication>
//#include <QTWidgets>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton exitButton(QString("Exit"));                                //создание объекта класса QPushButton
    exitButton.setFont(QFont("Times", 50, QFont::Bold));                    //установка параметров шрифта надписи объекта exitButton
    QObject::connect( &exitButton, SIGNAL(clicked()), &a, SLOT(quit()));     //соединение сигнала нажатия кнопки exitButton и слота quit приложения a

    exitButton.show();
    return a.exec();
}
