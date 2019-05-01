#include <QCoreApplication>
#include <iostream>
#include <process.h>
using namespace std;

class A                 //объявление класса
{
private:                //приватный член
    int privadataA;
protected:              //защищенный член
    int protdataA;
public:                 //публичный член
    int pubdataA;
};
class B: public A       //объявление класса-наследника с доступом к публичным членам предка
{
public:
    void func()
    {
        int a;
        //a = privadataA;
        a = protdataA;
        a = pubdataA;
    }
};
class C: private A      //объявление класса-наследника без досту
{
public:
    void func()
    {
        int a;
        //a = privadataA;
        a = protdataA;
        a = pubdataA;

    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /*QT не даст мне скомпилировать программу из-за очевидных ошибок*/
    return a.exec();
}
