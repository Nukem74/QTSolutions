#include "mainwindow.h"
#include <QtWidgets>                //класс QTWidgets содержит все нижеперечисленные классы
/*#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QSlider>*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *label = new QLabel;             //создание объекта класса QLabel  с помощью конструктора

    QSpinBox *spinBox = new QSpinBox;       //создание объекта класса QSpinBox  с помощью конструктора
    //установка параметров объекта QSpinBox(кажется оператор -> заменяет собой . и компилятор делает это автоматически)
    spinBox->setMinimum(0);                 //минимальное значение
    spinBox->setMaximum(100);               //максимальное значение
    spinBox->setSingleStep(5);              //приращение текущего значения QSpinBox

    QSlider *slider = new QSlider(Qt::Horizontal);      //создание объекта класса QSlider  с помощью конструктора
    //установка параметров объекта QSlider
    slider->setRange(spinBox->minimum(), spinBox->maximum());       //установка диапозона QSlider с помощью параметров объекта QSpinBox
    slider->setSingleStep(10);                                      //приращение текущего значения QSlider
    slider->setTickPosition(QSlider::TicksBelow);                   //установка положения указателя ползунка(куда?)
    slider->setTickInterval(10);                                    //установка интервала указателя ползунка(что?)

    QObject::connect(spinBox,SIGNAL(valueChanged(int)), label, SLOT(setNum(int)) );         //соединение событий изменение сигнала объекта spinBox cо слотом объекта label устанавливающим число отображаемое надписью
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)) );     //соединение событий: изменение сигнала объекта spinBox и значение отображаемое объектом slider
    QObject::connect(slider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)) );         //соединение событий: изменение сигнала объекта slider и значение отображаемое объектом label
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)) );     //соединение событий: изменение сигнала объекта slider и значение отображаемое объектом spinBox

    spinBox->setValue(20);          //установка стартового значения ползунка
    QWidget w;                      //создаем объект Qwidget
    QVBoxLayout* mainLayout = new QVBoxLayout(&w);  //создаем объект QVBoxLayout с помощью конструктора, указываем предка - объект класса Qwidget w
    mainLayout->addWidget(label);                   //добавляем виджеты label, spinBox и slider к объекту mainLayout
    mainLayout->addWidget(spinBox);
    mainLayout->addWidget(slider);
    w.show();                           //отображаем главный виджет


    return a.exec();
}
