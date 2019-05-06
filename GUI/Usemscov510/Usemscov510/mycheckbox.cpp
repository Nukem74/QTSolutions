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
    switch(event->button())
    {
    case Qt::LeftButton: setCheckState(Qt::Checked);
        break;

    case Qt::RightButton:setCheckState(Qt::Unchecked);
        break;
    case Qt::MidButton:setCheckState(Qt::PartiallyChecked);

    }
    event->ignore();

}
