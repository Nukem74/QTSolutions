#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class person                                        //объявление класса
{
private:                                            //перечисление приватных членов
    char name [40];
public:                                             //перечисление публичных членов
    void setName()                                  //публичный метод без аргументов
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void printName()                                //публичный метод без аргументов
    {
        cout << "\n Name: " << name;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    person* persPtr [100];                          //определение массива указателей на объекты
    int n = 0;                                      //счетчик объектов
    char choice;
    do
    {
        persPtr[n] = new person;                    //создание нового объекта класса person по адресу из массива указателей
        persPtr[n]->setName();                      //изменение приватного поля объекта по адресу из массива указателей
        n++;                                        //инкремент счетчика объектов в массиве указателей
        cout << "Continue(y/n)?";
        cin >> choice;

    }
    while(choice == 'y');
    for(int i = 0; i < n; i++)
    {
        cout << "\nInfo #" << i + 1;
        persPtr[i]->printName();                    //отображение содержимого приватного поля объекта по адресу из массива указателей
    }
    cout << endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}

