#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;


class String
{
private:                                    //перечисление приватных членов
    char* str;                              //объявление указателя на тип char
public:                                     //перечисление публичных членов
    String(char* s)                         //конструктор с одним аргументом-указателем на тип char
    {
        //int length = strlen(s);
        str = new char [strlen(s) + 1];     //выделение памяти, необходимое для хранения передаваемой конструктору переменной
        strcpy(str, s);
    }
    ~String()                               //деструктор
    {
        cout << "String deleted";
        delete [] str;
    }
    void display()                          //публичный метод отображающий содержимое на которое указывает приватный указатель
    {
        cout << str << endl;
    }
};
/*
класс String имеет только одно поле str, являющееся указателем на char.
Он будет указывать на строку, содержащуюся в объекте класса String.
Здесь не будет массива, содержащего строку. Строка хранится в другом
месте, а в классе String есть только указатель на нее.
*/
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    String s1 = "High speed - low drag";
    cout << "s1 = ";
    s1.display();
    return a.exec();
}

