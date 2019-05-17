#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class alpha                         //объявление класса
{
private:                            //приватные члены
    int data;
public:                             //публичные члены
    alpha()                         //конструктор без аргументов
    {
        //empty
    }
    alpha(int d)                    //конструктор с одним аргументом
    {
        data = d;
    }
    void display()                  //метод отображающий содержимое приватного поля
    {
        cout << "\n" << data;
    }
    alpha& operator = (alpha& a)    //перегрузка оператора присваивания с новым типом возвращаемых данных
    {
        data = a.data;
        cout << "\n Assignment operator activated";
        return *this;               //вернуть копию this alpha
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    alpha a1(37);
    alpha a2, a3;
    a3 = a2 = a1;
    a1.display();
    a2.display();
    a3.display();
////////////////////////////////////////////////////////////
    return a.exec();
}
