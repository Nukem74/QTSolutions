#include "mainwindow.h"
#include <QApplication>     //определения классов
#include <qpushbutton.h>
#include <qlabel.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                             //создание экземпляра класса QApplication с двумя аргументами
    QPushButton *button = new QPushButton("Quit", 0);       //создание виджета button с надписью quit, второй аргумент 0 - указатель который сообщает о том, что этот виджет не включается в другой виджет
    QLabel *label = new QLabel("<h2><i>Hello</i> "          //создание виджета label с форматированной надписью Hello Qt
                               "<font color = red> Qt!</font></h2>", 0);
    QObject::connect(button, SIGNAL(clicked()),             //подключение сигнала clicked() к функции-обработчику(SLOT) под названием quit
                     &a, SLOT(quit()));
    a.setActiveWindow(button);                              //установка главного(активного) виджета
    a.setActiveWindow(label);
    button ->show();                                        //отображение виджетов
    label ->show();
    return a.exec();
}
