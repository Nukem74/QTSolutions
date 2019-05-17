#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class strCount                      //объявление класса
{
private:                            //приватные члены
    int count;
    char* str;
    friend class String;            //декларация классовой дружбы
    strCount(char* s)               //приватный конструктор с одним аргументом
    {
        int length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
        count = 1;
    }
    ~strCount()                     //деструктор
    {
        delete[] str;
    }
};

class String                        //объявление класса
{
private:                            //приватные члены
    strCount* psc;
public:                             //публичные члены
    String()                        //конструктор без аргументов
    {
        psc = new strCount("NULL");
    }
    /**/
    String(char* s)                 //мой конструктор с одним аргументом
    {
        //этот конструктор не содержится в примере, тем не менее только с его помощью удается инициализировать переменную s3 в листинге
        //перегрузка оператора присваивания по прежнему не помогает
        psc = new strCount(s);
    }
    /**/
    String(String& S)               //конструктор копирования
    {
        cout << "\nCopying constructor activated!";
        psc = S.psc;
        (psc->count)++;
    }
    ~String()                       //деструктор
    {
        if(psc->count == 1)
        {
            delete psc;
        }
        else
        {
            (psc->count)--;
        }
    }
    void display()                  //публичный метод отображающий значение приватного поля
    {
        cout << psc->str;
        cout << " (addr=" << psc << ")";
    }
    String& operator = (String& S)  //перегрузка оператора присваивания(не корректно)
    {
        if(this == &S)              //проверка на присваивание самому себе
        {
            return *this;
        }
        else
        {
            cout << "\nAssignment";
            if(psc->count == 1)
            {
                delete psc;
            }
            else
            {
                (psc->count)--;
            }
            psc = S.psc;
            (psc->count)++;
            return *this;
        }
    }
};


////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    String s3("\nMy final surrender\nAway from inclusion\nI now await the triumphant\nLeft baggage, train station");
    cout << "\ns3=";
    s3.display();
    String s1, s2;
    s1 = s2 = s3;
    cout << "\ns1=";
    s1.display();
    cout << "\ns2=";
    s2.display();
    cout << "\ns3=";
    s3.display();
////////////////////////////////////////////////////////////
    return a.exec();
}
