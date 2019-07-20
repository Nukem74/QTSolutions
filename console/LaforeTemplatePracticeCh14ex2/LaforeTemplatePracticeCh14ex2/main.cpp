#include <QCoreApplication>
#include <iostream>
using namespace std;

template<class TYPE>
struct node
{
    TYPE data;
    node<TYPE>* prev = nullptr;
    node<TYPE>* next = nullptr;
};

template<class TYPE>
class queue
{
private:
    node<TYPE> _qq;
    node<TYPE>* first = nullptr;
    node<TYPE>* last = nullptr;
public:
    queue()
    {

    }
    queue(TYPE d)
    {
        node<TYPE>* current = new node<TYPE>;
        current->data = d;

        //current->prev = first;
        first = current;
        last = current;
    }
    void enqueue(TYPE d)
    {
        node<TYPE>* current = new node<TYPE>;
        current->data = d;

        if(first == nullptr)
        {
            current->prev = first;
            first = current;
            last = current;
        }
        else
        {
            current->prev = last;
            last->next = current;
            last = current;
        }
    }
    node<TYPE> dequeue()
    {
        node<TYPE> current;
            current = *first;

            if(first == last)
            {
                first->data = NULL;
                delete first->next;
                delete first->prev;

                first = nullptr;
                last = nullptr;
            }
            else
            {
                first = first->next;
            }
            return current;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    queue <int> qq (51);
    qq.enqueue(97);
    qq.enqueue(33);
    //qq.dequeue();
    node<int> beta = qq.dequeue();
    cout << beta.data << endl;
    beta = qq.dequeue();
    cout << beta.data << endl;
    beta = qq.dequeue();
    cout << beta.data << endl;
    cout << "End";
    return a.exec();
}
