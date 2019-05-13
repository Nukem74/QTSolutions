#include <QtWidgets>
#include "Counter.h"

// ----------------------------------------------------------------------
int main (int argc, char** argv)
{
    QApplication app(argc, argv);

    QLabel      lbl("0");                                       //инициализация объекта QLabel надписью 0
    QPushButton cmd("ADD");                                     //инициализацию объекта QPushButton надписью ADD
    Counter     counter;                                        //определение объекта

    lbl.show();                                                 //отображение виджетов
    cmd.show();

    QObject::connect(&cmd, SIGNAL(clicked()), &counter, SLOT(slotInc()) );                  // соединение сигнала поступающего от объекта cmd со слотом объекта counter



    QObject::connect(&counter, SIGNAL(counterChanged(int)), &lbl, SLOT(setNum(int)) );      //соединение сигнала поступающего от объекта counter со слотом объекта lbl



    QObject::connect(&counter, SIGNAL(goodbye()), &app, SLOT(quit()) );                     //соединение сигнала поступающего от объекта counter со слотом объекта app



    return app.exec();
}

