#include <QCoreApplication>
#include <iostream>
using namespace std;

class Queue;

class customer
{
    int number;
    customer* first;
    customer* last;
    friend class Queue;
};

class Queue
{
private:
    customer* inLine;
public:
    Queue()
    {
        inLine = NULL;
    }
    void enqueue(int val)
    {
        customer* current = new customer();
        current->number = val;
        current->first = inLine;
        current->last = current;
        inLine = current;
    }
    int* dequeue()
    {
        customer* current = new customer;
        while(inLine)
        {
            current = inLine;
            inLine = inLine->first;
        }
        return &current->number;
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
    cout << *custom.dequeue();


    return a.exec();
}
