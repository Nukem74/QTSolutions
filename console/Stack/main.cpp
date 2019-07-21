#include <QCoreApplication>
#include <iostream>
using namespace std;

template <class TYPE>
class Stack;                                //declaration of template class

template <class TYPE>
class node                                  //declaration of template class
{
private:                                    //private members
    TYPE data;                              //template data field
    node<TYPE>* prev;                       //template pointer
public:
    node()                                  //default constructor
    {
        data = NULL;
        prev = nullptr;
    }

    ~node()                                 //default destructor
    {
        data = NULL;
        prev = nullptr;
        delete prev;
    }
    friend class Stack<TYPE>;               //declaration of class friendship

};

template <class TYPE>
class Stack                                 //declaration of tempalate class
{
private:                                    //private members
    node<TYPE>* last;
public:
    Stack()                                 //public constructor with no arguments
    {
        last = nullptr;
    }
    Stack(TYPE d)                           //public constructor with templated argument
    {
        node<TYPE>* current = new node<TYPE>;//allocate memory for new node
        current->data = d;                  //assigning constructor argument's value to current node's data field
        last = current;                     //point current node as last
    }
    ~Stack()                                //public destructor
    {
        last = nullptr;                     //pointing last node to nullptr
        delete last;                        //delete pointer to last node
    }
    void push(TYPE d)                       //public method returning void with templated argument
    {
        node<TYPE>* current = new node<TYPE>;//allocate memory for new node
        current->data = d;                  //assign argument's value to current node's data field

        current->prev = last;               //pointing last node in stack as previous-to-current node
        last = current;                     //pointing current node as last
    }
    TYPE pop()                              //public templated method without arguments
    {
        if(last != nullptr)                 //if stack isn't empty
        {
            TYPE data = last->data;         //saving data from last node

            node<TYPE>* ptr = last->prev;   //saving pointer to previous-to-last node
            last->~node<TYPE>();            //destructing last node

            last = ptr;                     //pointing previous-to-last node as last
            ptr = nullptr;                  //pointing temporary pointer to null
            delete ptr;                     //delete temporary pointer
            return data;                    //returning data
        }
        else
        {
            cout << "STACK IS EMPTY";       //sending error message to console
            return NULL;                    //returning null
        }
    }
    TYPE peek() const                       //public templated constant method with no arguments
    {
        if(last != nullptr)
        {
            return last->data;              //return data
        }
        else
        {
            cout << "STACK IS EMPTY";       //sending error message to console
            return NULL;                    //returning null
        }
    }

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Stack<int> ss;
    ss.push(8744);
    ss.push(909);
    ss.push(4512);
    ss.push(2);
    ss.push(1805);
    cout << ss.pop() << endl;
    cout << ss.pop() << endl;
    cout << ss.pop() << endl;
    cout << ss.pop() << endl;
    cout << ss.pop() << endl;
    cout << "END OF STACK" << endl;
    cout << ss.pop() << endl;
    cout << ss.pop() << endl;
    return a.exec();
}
