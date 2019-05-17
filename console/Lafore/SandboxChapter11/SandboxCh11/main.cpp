#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class Base                          //объявление класса
{
    virtual void virtFunc()         //виртуальная функция для typeid
    {

    }
};

class Derv1: public Base            //объявление класса-наследника
{

};

class Derv2: public Base            //объявление класса-наследника
{

};

void displayName(Base* pB)          //демонстрация классовой принадлежности
{
    cout << "Pointing at object of " << typeid(*pB).name() << " class" << endl;
}

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    Base* pBase = new Derv1;
    displayName(pBase);
    pBase = new Derv2;
    displayName(pBase);
////////////////////////////////////////////////////////////
    return a.exec();
}
