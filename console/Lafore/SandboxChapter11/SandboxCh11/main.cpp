#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class strCount                          //объявление класса
{
private:                                //приватные члены
    int count;
    char* str;
    friend class String;                //декларация классовой дружбы *_-
    strCount(char* s)                   //конструктор с одним аргументом
    {
        int length = strlen(s);         //устанавливаем длину передаваемой конструктору строки
        str = new char[length + 1];     //выделяем память для приватного поля, чтобы разместить в нем аргумент конструктора
        strcpy(str, s);                 //копируем в приватное поле аргумент конструктора
        count = 1;                      //инициализируем счетчик
    }
    ~strCount()                         //деструктор
    {
        delete[] str;
    }
};

class String                            //объявление класса
{
private:                                //приватные члены
    strCount* psc;
public:                                 //публичные члены
    String()                            //конструктор без аргументов
    {
        psc = new strCount("NULL");     //инициализация экземпляра класса strCount значением NULL
    }
    String(char* s)                     //конструктор с одним аргументом
    {
        psc = new strCount(s);          //инициализация экземпляра класса strCount значением NULL
    }
    String(String& S)                   //конструктор копирования
    {
        psc = S.psc;
        (psc->count)++;
    }
    ~String()                           //деструктор
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
    void display()                      //публичный метод отображающий значение приватного поля
    {
        cout << psc->str;
        cout <<"\n (addr=" << psc << ")";
    }
    /*void operator = (char* S)         //перегрузка оператора присваивания(некорректно)
    {
        *psc = strCount(S);
    }*/
    void operator = (String& S)         //перегрузка оператора присваивания(некорректно)
    {
        /*
         * перегруженный оператор присваивания работает некорректно
         * в данной перегрузке он позволяет копировать содержимое аргумента с права от знака
         * только если правый аргумент является объектом класса String
         * но не позволяет копировать содержимое строковой константы, ограниченной " "
         * */
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
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    String s3("\nMy final surrender \nAway from inclusion \nI now await the triumphant \nLeft baggage, train station");
    //String s3 = "My final surrender Away from inclusion I now await the triumphant Left baggage, train station"; //not valid
    cout << "\ns3 = ";
    s3.display();

    String s1;
    s1 = s3;
    cout << "\ns1 = ";
    s1.display();

    String s2(s3);

    cout << "\ns2 = ";
    s2.display();

    cout << endl;
////////////////////////////////////////////////////////////
    return a.exec();
}
