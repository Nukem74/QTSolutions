#include <QCoreApplication>
#include <iostream>
#include <string>
using namespace std;

class publication                               //объявление класса
{
private:                                        //перечисление приватных членов
    string _name;
    float _price;
public:                                         //перечисление публичных членов
    void set()                                  //публичный метод без аргументов
    {
        cout << "State name: ";
        cin >> _name;
        cout << "State price: ";
        cin >> _price;
    }
    void get() const                            //публичный константный метод без аргументов
    {
        cout << "\nPublication's name: ";
        cout << _name;
        cout << "\nPublication's price: ";
        cout << _price;
    }
};

class book: public publication                  //объявление класса-наследника
{
private:                                        //перечисление приватных членов
    unsigned int _pages;
public:                                         //перечисление публичных членов
    void set()                                  //публичный метод, перегружающий метод предка
    {
        publication::set();
        cout << "\nState number of pages: ";
        cin >> _pages;
    }
    void get() const                            //публичный константный метод, перегружающий метод предка
    {
        publication::get();
        cout << "\n Number of pages: ";
        cout << _pages;
    }
};
class type: public publication                  //объявление класса-наследника
{
private:                                        //перечисление прватных членов
    float _minutes;
public:                                         //перечисление публичных членов
    void set()                                  //публичный метод, перегружающий метод предка
    {
        publication::set();
        cout << "\nState duration in minutes: ";
        cin >> _minutes;
    }
    void get()                                  //публичный константный метод, перегружающий метод предка
    {
        publication::get();
        cout << "\nDuration in minutes: ";
        cin >> _minutes;
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    book pbk1;
    type pt1;
    pbk1.set();
    pt1.set();
    pbk1.get();
    pt1.get();
    return a.exec();
}
