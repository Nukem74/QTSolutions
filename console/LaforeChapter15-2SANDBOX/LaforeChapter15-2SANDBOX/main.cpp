#include <QCoreApplication>
#include <iostream>
using namespace std;
const int MAX = 3;
/////////////////////////////////////////////////////
class Stack
{
private:
    int st[MAX];
    int top;
public:
    class FULL
    {
        //empty
    };

    class EMPTY
    {
        //empty
    };

    Stack()
    {
        top = -1;
    }
    void push(int var)
    {
        if(top >= MAX-1)
            throw FULL();
        st[++top] = var;
    }

    int pop()
    {
        if(top < 0)
            throw EMPTY();
        return st[top--];
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack s1;
    try
    {
        s1.push(11);
        s1.push(22);
        s1.push(33);
        //s1.push(44);
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
        cout << s1.pop() << endl;
    }
    catch(Stack::FULL)
    {
        cout << "Exception! Stack overflow!" << endl;
    }
    catch(Stack::EMPTY)
    {
        cout << "Exception! Stack empty!" << endl;
    }
    cout << "End" << endl;
    return a.exec();
}
