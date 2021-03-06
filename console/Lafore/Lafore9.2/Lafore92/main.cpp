
#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;

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

class sales
{
private:
    float sales[3];
public:
    void set()                                  //публичный метод без аргументов
    {
        cout << "\nState sales";
        for (int i = 0;i < 3;i++)
        {
            cout << " for " << i << " month: ";
            cin >> sales[i];
        }
    }
    void get() const                            //публичный константный метод без аргументов
    {
        cout << "\nLast sales";
        for (int i = 0;i < 3;i++)
        {
            cout << " for " << i << " month: ";
            cout << sales[i];
        }
    }

};

class book: public publication, public sales                  //объявление класса-наследника
{
private:                                        //перечисление приватных членов
    unsigned int _pages;
public:                                         //перечисление публичных членов
    void set()                                  //публичный метод, перегружающий метод обоих предков
    {
        publication::set();
        cout << "\nState number of pages: ";
        cin >> _pages;
        sales::set();

    }
    void get() const                            //публичный константный метод, перегружающий метод обоих предков
    {
        publication::get();
        cout << "\n Number of pages: ";
        cout << _pages;
        sales::get();
    }
};
class type: public publication, public sales                  //объявление класса-наследника
{
private:                                        //перечисление прватных членов
    float _minutes;
public:                                         //перечисление публичных членов
    void set()                                  //публичный метод, перегружающий метод обоих предков
    {
        publication::set();
        cout << "\nState duration in minutes: ";
        cin >> _minutes;
        sales::set();
    }
    void get()                                  //публичный константный метод, перегружающий метод обоих предков
    {
        publication::get();
        cout << "\nDuration in minutes: ";
        cout << _minutes;
        sales::get();
    }
};

class disk: public publication
{
private:
    string format;
public:
    void set()
    {
        cout << "State format(CD/DVD): ";
        cin >> format;
    }
    void get()
    {
        cout << "Publication recorded at ";
        cout << format;
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
