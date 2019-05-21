#include <QCoreApplication>
#include <iostream>
using namespace std;

class Stack;

class sheet                                 //элемент стека
{
    int _value;                             //содержимое стека

    sheet* prev;                            //ссылка на предыдущий элемент

    friend class Stack;                     //декларация классовой дружбы
};

class Stack                                 //класс, содержащий методы управления стеком
{
private:
    sheet* top;                             //приватный указатель на верхний элемент стека
    int _counter;                           //счетчик
public:
    Stack()                                 //конструктор инициализирующий счетчик и указатель
    {
        _counter = 0;
        top = NULL;
    }
    void push(int v)                        //публичный метод, добавляющий элемент в конец стека
    {
        sheet* bot = new sheet();
        bot->_value = v;
        bot->prev = top;
        top = bot;
        _counter++;

    }
    int peek() const                        //публичный метод возвращающий последний элемент стека
    {
        return top->_value;
    }
    int quantity()                          //публичный метод возвращающий значение счетчика
    {
        return _counter;
    }
    int pop()
    {
        sheet popper = *top;
        top = top->prev;
        _counter--;
        return popper._value;
    }
    bool isEmpty()                          //публичный метод, проверяющий является ли стек пустым
    {
        if(top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack exmp;
    //cout << exmp.isEmpty() << endl;
    exmp.push(2);
    //cout << exmp.isEmpty() << endl;
    exmp.push(14);
    exmp.push(13);
    //cout << exmp.quantity() << endl;

    //cout << exmp.quantity() << endl;
    cout << exmp.pop() << " " << exmp.pop() << " " << exmp.pop();
    //cout << exmp.quantity() << endl;
    return a.exec();
}
