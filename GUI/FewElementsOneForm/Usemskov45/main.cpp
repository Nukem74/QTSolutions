#include "mainwindow.h"                                             //подключение релевантных классов и файлов
#include <QApplication>
#include <QLabel>
#include<QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                                     //создание объекта-приложения
    QWidget win;                                                    //создание виджета
    QVBoxLayout* layout = new QVBoxLayout(&win);                    //создание менеджера вертикального размещения
    QLabel* label1 = new QLabel("One", &win);                       //создание двух объектов надписей унаследованых(?) от виджета win
    QLabel* label2 = new QLabel("Two", &win);

    label1->setFrameStyle(QFrame::Panel | QFrame:: Sunken);         //установка стиля надписей : утопленный
    label2->setFrameStyle(QFrame::Panel | QFrame:: Sunken);
    layout->addWidget(label1);                                      //добавление надписей к менеджеру размещения
    layout->addWidget(label2);

    win.setLayout(layout);                                          //назначение менеджера размещения для главного окна
    win.show();                                                     //отображение главного окна
    return a.exec();
}
