#include <QCoreApplication>
#include <iostream>
using namespace std;

const int size = 100;

class customer
{
    int value;
    friend class Queue;
};

class Queue : customer
{
private:
    customer Line[size];
    int counter;
public:
    Queue()
    {
        counter = 0;
    }
    void enqueue(int val)
    {
        Line[counter].value = val;
        counter++;
    }
    int dequeue()
    {
        int val = Line[0].value;
        int i = 0;
        while((i+1) != counter)
        {
            Line[i] = Line[i + 1];
            i++;
        }
        Line[counter].value = NULL;
        counter--;
        return val;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Queue custom;
    custom.enqueue(101);
    custom.enqueue(202);
    custom.enqueue(303);
    custom.enqueue(404);
    custom.enqueue(505);
    cout << custom.dequeue() << " " << custom.dequeue() << " " << custom.dequeue() << " " << custom.dequeue() << " " << custom.dequeue();

    return a.exec();
}
