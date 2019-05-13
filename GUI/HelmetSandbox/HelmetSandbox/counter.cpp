
#include "Counter.h"


Counter::Counter() : QObject() , m_nValue(0)     //кажется это конструктор
{
    //empty
}


void Counter::slotInc()                         //метод слота без аргументов и  возвращаемых значений
{
    //Q_EMIT
    emit counterChanged(++m_nValue);            //сигнал актуального значения счетчика

    if (m_nValue == 5) {
        emit goodbye();                         //сигнал окончания работы счетчика
    }
}
