#include <QCoreApplication>
#include <iostream>
using namespace std;
const int MAX = 3;

class Stack                             //declaration of a class
{
private:                                //private members
    int st[MAX];
    int top;
public:                                 //public members
    class FULL                          //declaration of exception class
    {
        //empty
    };

    class EMPTY                         //declaration of exception class
    {
        //empty
    };

    Stack()                             //constructor without arguments
    {
        top = -1;
    }
    void push(int var)                  //void method with 1 argument
    {
        if(top >= MAX-1)                //check conditions for throwing exception
            throw FULL();
        st[++top] = var;
    }

    int pop()                           //int method with no arguments
    {
        if(top < 0)                     //check conditions for throwing exception
            throw EMPTY();
        return st[top--];
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack s1;
    try                                 //trying suspicious elements for throwing exceptions
    {
        s1.push(11);
        s1.push(22);
        s1.push(33);
        s1.push(44);
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
    }
    catch(Stack::FULL)                  //catch exceptions with name FULL
    {
        cout << "Exception! Stack overflow!" << endl;
    }
    catch(Stack::EMPTY)                 //catch exceptions with name EMPTY
    {
        cout << "Exception! Stack empty!" << endl;
    }
    cout << "End" << endl;
    return a.exec();
}
