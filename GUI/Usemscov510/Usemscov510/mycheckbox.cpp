#include "mycheckbox.h"
#include <QWidget>
#include <QCheckBox>
#include <QMouseEvent>
MyCheckBox::MyCheckBox(const QString& text, QWidget *parent /* = 0 */) : QCheckBox(text, parent)
{
    setTristate(true);
}

void MyCheckBox::mousePressEvent(QMouseEvent *event)        //перегрузка метода
{
    switch(event->button())                                 //выбор реакции на нажатие различных кнопок мыши
    {
    case Qt::LeftButton: setCheckState(Qt::Checked);        //реакция для левой кнопки мыши
        break;

    case Qt::RightButton:setCheckState(Qt::Unchecked);      //реакция для правой кнопки мыши
        break;
    case Qt::MidButton:setCheckState(Qt::PartiallyChecked); //реакция для средней кнопки мыши

    }
    event->ignore();                                        //игнорировать событие - не передовать его для дальнейшей обработки родительским элементом(что?)

}

