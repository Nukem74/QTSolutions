#include <QCoreApplication>
#include <iostream>

using namespace std;
const int MAX = 100;

template <class Type>                       //Class template
class Stack
{
private:                                    //list of private members
    Type st[MAX];
    int top;
public:                                     //list of public members
    Stack()                                 //constructor without arguments
    {
        top = -1;
    }
    void push(Type var)                     //void method with template argument
    {
        st[++top] = var;
    }
    Type pop()                              //template method with no arguments
    {
        return st[top--];
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //demo
    Stack<float> s1;
    s1.push(1111.1F);
    s1.push(2222.2F);
    s1.push(3333.3F);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    cout << "3: " << s1.pop() << endl;

    Stack<long> s2;
    s2.push(123123123L);
    s2.push(234234234L);
    s2.push(345345345L);
    cout << "1: " << s2.pop() << endl;
    cout << "2: " << s2.pop() << endl;
    cout << "3: " << s2.pop() << endl;
    return a.exec();
}
