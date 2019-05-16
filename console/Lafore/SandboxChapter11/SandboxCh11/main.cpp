#include <QCoreApplication>
#include <iostream>
using namespace std;

class Base                      //объявление класса
{
public:                         //публичные члены
    virtual void show() = 0;    //чистый виртуальный метод
    /*{
        cout << "Base\n";
    }*/
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
    //Base bad;
    Base* arr[2];
    Derv1 dv1;
    Derv2 dv2;

    arr[0] = &dv1;
    arr[1] = &dv2;

    arr[0]->show();
    arr[1]->show();
////////////////////////////////////////////////////////////
    return a.exec();
}
