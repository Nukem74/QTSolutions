#include <QCoreApplication>
#include <iostream>
using namespace std;

template<class TYPE>
struct node                                         //declaration of tempalate struct
{
    TYPE data = NULL;                                      //public field with data
    node<TYPE>* prev = nullptr;                     //public pointer to previous node
    node<TYPE>* next = nullptr;                     //public pointer to next node
};

template<class TYPE>
class queue                                         //declaration of template class
{
private:                                            //private members
    //node<TYPE> _qq;
    node<TYPE>* first = nullptr;
    node<TYPE>* last = nullptr;
public:                                             //public members
    queue()                                         //constructor without arguments
    {
        //empty
    }
    queue(TYPE d)                                   //constructor with template argument
    {
        node<TYPE>* current = new node<TYPE>;       //allocating memory for new node
        current->data = d;                          //setting node's data

        //current->prev = first;
        first = current;                            //pointing to first node in queue
        last = current;                             //pointing to last node in queue
    }
    void enqueue(TYPE d)                            //public method returning void with template argument
    {
        node<TYPE>* current = new node<TYPE>;       //allocating memory for new node
        current->data = d;                          //setting node's data

        if(first == nullptr)                        //if current node is first in queue
        {
            current->prev = first;                  //pointing first node in queue as previous for current node
            first = current;                        //pointing current node as first for this queue
            last = current;                         //pointing current node as last for this queue
        }
        else                                        //or current node not first in queue
        {
            current->prev = last;                   //pointing last node in queue as previous for current node
            last->next = current;                   //pointing next from last in the queue node as current //first real problem with this queue was me forgeting to link previous enqueued node to current node
            last = current;                         //pointing last node in queue as current
        }
    }
    node<TYPE> dequeue()                            //template returning method with no arguments
    {
        node<TYPE> current;                         //declaration of current node for method
        if(first == nullptr)
        {
            cout << "queue is empty";
            return current;
        }
        current = *first;                           //assigning to current node value of the first node in queue

        if(first == last)                           //if current node is last in the queue, then prepare queue for next enque
        {
            first->data = NULL;                     //cleaning node's data
            delete first->next;                     //deleting pointer to next of the current node
            delete first->prev;                     //deleting pointer to previous of the current node

            first = nullptr;                        //pointing first node to nullptr
            last = nullptr;                         //pointing last node to nullptr
        }
        else                                        //or removing node if, it's not last in the queue
        {
            node<TYPE>* temp = first->next;         //saving pointer to next-to-first node

            first->data = NULL;                     //cleaning node's data
            first->next = nullptr;                  //pointing next-to-first node to nullptr
            delete first->next;                     //deleting next-to-first pointer
            first->prev = nullptr;                  //pointing previous-to-first node to nullptr
            delete first->prev;                     //deleting previous-to-first pointer

            first = temp;                           //assinging saved pointer to first pointer of queue
        }
        return current;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    queue <int> qq;
    int value;
    cin >> value;
    qq.enqueue(value);
    cin >> value;
    qq.enqueue(value);
    cin >> value;
    qq.enqueue(value);
    cin >> value;
    qq.enqueue(value);
    cin >> value;
    qq.enqueue(value);
    cin >> value;
    qq.enqueue(value);
    cout << qq.dequeue().data << endl;
    cout << qq.dequeue().data << endl;
    cout << qq.dequeue().data << endl;
    cout << qq.dequeue().data << endl;
    cout << qq.dequeue().data << endl;
    cout << qq.dequeue().data << endl;
    cout << qq.dequeue().data << endl;

    return a.exec();
}
