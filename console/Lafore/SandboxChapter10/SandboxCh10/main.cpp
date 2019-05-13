#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

struct link                         //элемент списка
{
    int data;                       //целочисленное содержимое элемента
    link* next;                     //указатель на тип link
};

class linklist                      //объявление класса
{
private:                            //перечисление приватных членов
    link* first;
public:                             //перечисление публичных членов
    linklist()                      //конструктор без аргументов
    {
        first = NULL;
    }

    void addItem(int d)             //публичный метод с одним аргументом
    {
        link* newlink = new link;   //создание экземпляра link по адресу указателя newlink
        newlink->data = d;          //изменение содержимого link по адресу указателя
        newlink->next = first;      //изменение элемента списка
        first = newlink;
    }

    /*void remList()
    {
        link* current = first;
        link* temp = current;
        do
        {
            temp = current->next;
            current = NULL;
            cout << current->data << endl;
            current = temp;
            cout << current->data << endl;
            cout << endl;
        }
        while(current);
    }*/

    void display()                  // публичный метод без аргументов
    {
        link* current = first;
        while(current)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
    void display(int n)                  // публичный метод без аргументов
    {
        link* current = first;
        while(current)
        {
            if(current->data == n)
            {
                cout << current->data << endl;
            }
            current = current->next;
        }
    }
    void remItem(int n)
    {
        link* current = first;
        while(current)
        {
            if(current->data == n)
            {
                delete current;
            }
            current = current->next;
        }

     }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    linklist li;

    li.addItem(25);
    li.addItem(36);
    li.addItem(49);
    li.addItem(64);

    li.remItem(49);

    li.display();


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}

