#include <QCoreApplication>
#include <iostream>
#include <process.h>
using namespace std;

const int LEN = 80;

class employee                                  //объявление класса
{
private:                                        //перечисление приватных членов
    char name[LEN];
    unsigned long number;
public:                                         //перечисление публичных членов
    void getdata()
    {
        cout << "\n State sescond name: ";
        cin >> name;
        cout << "\n State ID: ";
        cin >> number;
    }
    void putdata ()const
    {
        cout << "\n Second name: " << name;
        cout << "\nID: " << number;
    }
};

class manager : public employee                 //объявление наследуемого класса с доступом к публичным членам предка
{
private:                                        //перечисление приватных членов
    char title[LEN];
    double dues;
public:
    void getdata()                              //перегрузка метода базового класса
    {
        cout << "\nManagement staff";
        employee::getdata();
        cout << "\n State title: ";
        cin >> title;
        cout << "\n Designate dues: ";
        cin >> dues;
    }
    void putdata()const                         //перегрузка метода базового класса
    {
        employee::putdata();
        cout << "\n Title: " << title;
        cout << "\n Golf-club dues paid: " << dues;
    }

};
class scientist:public employee                 //объявление наследуемого класса с доступом к публичным членам предка
{
private:                                        //перечисление приватных членов
    int pubs;
public:                                         //перечисление публичных членов
    void getdata()                              //перегрузка метода базового класса
    {
        cout << "\nDeveloping staff";
        employee::getdata();
        cout << "\n Designate publications index: ";
        cin >> pubs;
    }
    void putdata()const                         //перегрузка метода базового класса
    {
        employee::putdata();
        cout << "\n Publications index: " << pubs;
    }
};

class laborer: public employee                  //объявление наследуемого класса с доступом к публичным членам предка
{
public:                                         //перечисление публичных членов
    void getdata()                              //перегрузка метода базового класса
    {
        cout << "\nCOMRADE";
        employee::getdata();
    }/*Empty inherited class for laborer?! SJW triggered*/
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    manager m1, m2;
    scientist s1;
    laborer l1;

    m1.getdata();
    m2.getdata();
    s1.getdata();
    l1.getdata();
    m1.putdata();
    m2.putdata();
    l1.putdata();
    s1.putdata();
    return a.exec();
}
