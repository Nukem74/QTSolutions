#include <QCoreApplication>
#include <iostream>
using namespace std;

class Stack;

class sheet
{
    int _value;

    sheet* prev;

    friend class Stack;
};

class Stack
{
private:
    sheet* top;
    int _counter;
public:
    Stack()
    {
        _counter = 0;
        top = NULL;
    }
    void push(int v)
    {
        sheet* bot = new sheet();
        bot->_value = v;
        bot->prev = top;
        top = bot;
        _counter++;

    }
    int peek()
    {
        return top->_value;
    }
    int quantity()
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
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack exmp;
    exmp.push(1);
    exmp.push(14);
    exmp.push(13);
    cout << exmp.quantity() << endl;
    exmp.pop();
    cout << exmp.quantity() << endl;
    exmp.pop();
    cout << exmp.quantity() << endl;
    return a.exec();
}
