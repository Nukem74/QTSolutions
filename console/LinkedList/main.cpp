#include <QCoreApplication>
#include <iostream>
using namespace std;

class LinkedList;
const int LENGTH = 100;

/*{
 * счетчик символов
    int i = 0;
    while(A[i] != '\0')
    {
        i++;
    }
}*/

/*
 * алгоритм сравнения сравнения
    int i = 0;
    bool eureka = true;
    while(i < LENGTH)
    {
        eureka = true;
        if(A[i] == B[i])
        {
            eureka = true;
            i++;
        }
        else
        {
            eureka = false;
            break;
        }
    }
 * */

class Node                          //объявление класса-узла
{
private:
    //int _data;
    char _data[LENGTH];             //приватное поле данных
    Node* tail;                     //приватный указатель на следующий объект класса
    friend class LinkedList;        //декларация классовой дружбы
};

class LinkedList                    //объявление класса-обработчика
{
private:
    Node* Last;                     //приватный указатель на последний оперируемый узел
public:
    LinkedList()                    //конструктор без аргументов инициализирующий последний оперируемый узел
    {
        Last = NULL;
    }
    void add(char d[LENGTH])        //метод добавления нового узла с новыми данными
    {
        Node* newEntry = new Node();//выделяем память под новый узел
        for(int i = 0; i < 100; i++)
        {
          newEntry->_data[i] = d[i];//переписываем содержимое аргумента в приватное поле нового узла
        }
        newEntry->tail = Last;      //перемещаем указатель узла на предыдущий оперируемый узел
        Last = newEntry;            //объявляем новый узел последним оперируемым
    }
    Node* getLast()                 //публичный метод без аргументов, возвращающий последний узел списка
    {
        return Last;
    }
    Node* getFirst()                //публичный метод без аргументов, возвращающий первый узел списка
    {
        Node* current = Last;
        while(current->tail)
        {
            current = current->tail;
        }
        return current;
    }
    bool isEqual(Node* n, char d[])           //публичный метод с одним аргментом, проверяющий наличие в списке передаваемого аргумента
    {
        bool eureka = false;
        int i = 0;
        while(i < LENGTH)
        {
            eureka = true;
            if(n->_data[i] == d[i])
            {
                eureka = true;
                i++;
            }
            else
            {
                eureka = false;
                break;
            }
        }
        return eureka;
    }

    Node* find(char d[])
    {
        Node* current = Last;
        bool eureka = false;
        while(current)
        {

            int i = 0;
            while(i < LENGTH)
            {
                eureka = true;
                if(current->_data[i] == d[i])
                {
                    eureka = true;
                    i++;
                }
                else
                {
                    eureka = false;
                    break;
                }
            }
            if(eureka)
            {
                return current;
            }
            else
            {
                current = current->tail;
            }
        }
        return NULL;
    }

    void display(Node* n)           //публичный метод, отображающий узел по указателю(возможно сделать приватным или переписать)
    {
        if(n != NULL)
        {
            cout << n->_data << endl;
        }
        else
        {
            cout << "empty pointer" << endl;
        }
    }
    void display()                  //публичный метод, отображающий содержимое списка
    {
        Node* current = Last;
        while(current)
        {
            display(current);
            current = current->tail;
        }
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LinkedList examp;
    examp.add("word");
    examp.add("letter");
    examp.add("sentence");
    examp.add("expression");
    Node* pointer = examp.find("word");
    examp.display(pointer);
    pointer = examp.find("world");
    examp.display(pointer);
    pointer = examp.find("expression");
    examp.display(pointer);


    return a.exec();
}
