#include "counter.h"



Counter::Counter():QObject (), m_nValue(0)
{
    //empty
}
void Counter::slotInc()
{
    emit counterChanged(++m_nValue);

    if(m_nValue == 5)
    {
        emit goodbye();
    }
}
