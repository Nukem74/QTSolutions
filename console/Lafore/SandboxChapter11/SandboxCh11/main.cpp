#include <QCoreApplication>
#include <iostream>
using namespace std;

class Base                      //объявление класса
{
public:                         //публичные члены
    virtual void show()         //виртуальный метод
    {
        cout << "Base\n";
    }
};

class Derv1 : public Base       //объявление класса
{
public:                         //публичные члены
    virtual void show()         //виртуальный метод
    {
        cout << "Dervl\n";
    }
};

class Derv2 : public Base       //объявление класса
{
public:                         //публичные члены
    virtual void show()         //виртуальный метод
    {
        cout << "Derv2\n";
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
    ptr = &dv1;
    ptr->show();
    ptr=&dv2;
    ptr->show();
////////////////////////////////////////////////////////////
    return a.exec();
}
