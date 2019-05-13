//#ifndef COUNTER_H
//#define COUNTER_H
#pragma once
#include <QObject>


class Counter : public QObject {
    Q_OBJECT
private:
    int m_nValue;

public:
    Counter();                      //что это, Макс? Конструктор без аргументов?

public slots:
    void slotInc();                 //прототип: публичный слот класса Counter, увеличивающий значение счетчика

signals:
    void goodbye       (   );       //прототип сигнала окончания работы счетчика
    void counterChanged(int);       //прототип сигнала актуального значения счетчика
};

//#endif // COUNTER_H
