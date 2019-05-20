#include <QCoreApplication>
#include <iostream>
using namespace std;

class LinkedList;
const int LENGTH = 100;

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
    Node* find(char d[])            //публичный метод с одним аргментом, возвращающий аргумент из списка, если таковой имеется
    {
        Node* current = Last;
        bool eureka;
        while(current)
        {
            eureka = true;
            int i = 0;
            while(current->_data[i] != '\0')
            {
                if(d[i] == current->_data[i])
                {
                    continue;
                }
                else
                {
                    eureka = false;
                    break;
                }
            }
            if(eureka)
            {
                break;
            }
            else
            {
                current = current->tail;
            }

        }
        return current;
    }

    void display(Node* n)           //публичный метод, отображающий узел по указателю(возможно сделать приватным или переписать)
    {
        cout << n->_data << endl;
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
    LinkedList example1;
    example1.add("First_entry");
    char data[LENGTH] = "Second_Entry";
    example1.add(data);
    cout << "Make third entry: ";
    cin >> data;
    example1.add(data);
    example1.display(example1.getFirst());
    example1.display();
    return a.exec();
}
