#include <QCoreApplication>
#include <iostream>

using namespace std;
const int LEN = 80;                         //constant integer for storing length
class employee                              //declaration of a class
{
private:                                    //list of private members
    char name[LEN];
    unsigned long number;
public:                                     //list of public members
                                            //declaration of frindship
    friend istream& operator >> (istream& s, employee& e);
    friend ostream& operator << (ostream& s, employee& e);
};
//overloading >> for employee class
istream& operator >> (istream& s, employee& e)
{
    cout << "\nDesignate name: ";   cin >> e.name;
    cout << "\nDesignate ID: ";     cin >> e.number;
    return s;
}
//overloading << for employee class
ostream& operator << (ostream& s, employee& e)
{
    cout << "\n Name: " << e.name;
    cout << "\n ID: " << e.number;
    return s;
}

template <class TYPE>                       //Class template
struct link                                 //declaration of a structure
{
    TYPE data;                              //when linklist declared it is setting type of data field of link
    link* next;
};

template<class TYPE>                        //Class template
class linklist                              //declaration of a class
{
private:                                    //list of private members
    link<TYPE>* first;                      //pointer at template type  // linklist set's type of link pointers, let's look at list
public:                                     //list of public members
    linklist()                              //constructor without arguments
    {
        first = nullptr;
    }
    void additem(TYPE d);                   //method prototype  //d is the type of list members, but what is d exactly in this program? let's look at private section
    void display();                         //method prototype
};
template<class TYPE>                        //Class template
void linklist<TYPE>::additem(TYPE d)        //definition of linklist member that returns void and takes template as an argument //but where does additem gets d? additem gets d from linklist
{
    link<TYPE>* newlink = new link<TYPE>;
    newlink->data = d;                      //once I aksked myself - what is d? let's trace it, first we look at typ'o'argument of additem
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
    linklist<employee> lemp;    //and in this program linklist set type of link to employee, so employee is d
    employee emptemp;           //but fields name and number of employee are not templated, so they must fit they types
    char ans;

    do
    {
        cin >> emptemp;
        lemp.additem(emptemp);
        cout << "\nContinue? (y/n) ";
        cin >> ans;
    }while(ans != 'n');
    lemp.display();
    cout << endl;
    return a.exec();
}
