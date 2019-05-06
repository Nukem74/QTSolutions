#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H

#include <QCheckBox>


class MyCheckBox : public QCheckBox                         //объявление класса, наследующего от QCheckBox
{
    Q_OBJECT
protected:                                                  //перечисление защищенных членов
    virtual void mousePressEvent(QMouseEvent *event);
public:                                                     //перечисление публичных членов
    MyCheckBox(const QString& text, QWidget *parent = 0);



};

#endif // MYCHECKBOX_H
