#include <QCoreApplication>
#include <iostream>

using namespace std;

template <class TYPE>                       //Class template
struct link                                 //declaration of a structure
{
    TYPE data;
    link* next;
};

template<class TYPE>                        //Class template
class linklist                              //declaration of a class
{
private:                                    //list of private members
    link<TYPE>* first;                      //pointer at template type
public:                                     //list of public members
    linklist()                              //constructor without arguments
    {
        first = nullptr;
    }
    void additem(TYPE d);                   //method prototype
    void display();                         //method prototype
};
template<class TYPE>                        //Class template
void linklist<TYPE>::additem(TYPE d)        //definition of linklist member that returns void and takes template as an argument
{
    link<TYPE>* newlink = new link<TYPE>;
    newlink->data = d;
    newlink->next = first;
    first = newlink;
}

template<class TYPE>                        //Class template
void linklist<TYPE>::display()              //definition of linklist member that returns void and takes no arguments
{
    link<TYPE>* current = first;
    while(current)
    {
        cout << endl << current->data;
        current = current->next;
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //demo
    linklist<double> ld;
    ld.additem(151.5);
    ld.additem(262.6);
    ld.additem(373.7);
    ld.display();

    linklist<char> lch;

    lch.additem('a');
    lch.additem('b');
    lch.additem('c');
    lch.display();
    cout << endl;

    return a.exec();
}
