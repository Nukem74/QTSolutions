#include <QCoreApplication>
#include <iostream>
using namespace std;
class Counter
{
protected:                          //перечисление защищенных членов класса, доступных для этого класса и любого его наследника
    unsigned int count;
public:
    Counter(): count(0)
    {
        //empty
    }
    Counter(int c) : count (c)
    {
        //empty
    }
    unsigned int get_count() const
    {
        return count;
    }
    Counter operator++ ()
    {
        return Counter (++count);
    }
};

class CountDn: public Counter           //определение класса-наследника с указанием предка
{
public:
    CountDn() : Counter ()              //конструктор наследника, вызывающий конструктор предка без аргументов
    {
        //empty
    }
    CountDn(int c) : Counter(c)         //конструктор наследника, вызывающий конструктор предка передавая ему один аргумент
    {
        //empty
    }
    CountDn operator--()
    {
        return CountDn( --count);
    }


};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    CountDn c1;
    CountDn c2 (100);
    cout << "\n c1=" << c1.get_count() << endl;
    cout << "\n c2=" << c2.get_count() << endl;
    ++c1;
    ++c1;
    ++c1;
    cout << "\n c1=" << c1.get_count() <<  endl;
    --c2;
    --c2;
    cout << "\n c2=" << c2.get_count() <<  endl;
    CountDn c3 = --c2;
    cout << "\n c3=" << c3.get_count() << endl;
    return a.exec();
}
