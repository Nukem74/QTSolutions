#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;
/* Program Dictionary
 * This program realises structure of data called "dictionary"
 * It stores data as pair of key and data
 * I designed it to combine static and dinamic approach to data structuring
 * Keys for dictionary stored as string and data stored as pointers to template objects
 * The idea is to make interface to store data in vector of templated objects
 * Pairs recorded to dictionary to appropriate place due to sorting mechanism realised in function .add()
 * Data access realised by passing a key to methods .find(string k) , .remove(string k)
 * */
template <class TYPE>
class dictionary;                                                   //prototype of a template class

template <class TYPE>                                               //declaration of a template class
class nota
{
private:
    std::string key;                                                //private string member, that contains key to data
    TYPE* data;                                                     //private templated pointer, that directs to data object
    friend class dictionary<TYPE>;                                  //declaration of class friendship(I hope once i will make here a proper inheritance)
};

template <class TYPE>
class dictionary                                                    //declaration of a template class
{
private:
    std::vector <nota <TYPE> > headers;                             //private templated vector, which organizes data storing //attention to type of vector members
public:
    dictionary()                                                    //constructor without arguments
    {
        //empty
    }
    dictionary(std::string k, TYPE* d)                              //constructor with 2 arguments
    {
        nota <TYPE> * current = new nota <TYPE>;                    //allocating memory for new member of vector
        current->key = k;                                           //seting key-value to new member's field
        current->data = d;                                          //setting data-pointer to new member's pointer
        headers.push_back(*current);                                //pushing new member to vector
        delete current;                                             //delete pointer for sure
    }
    void add(std::string k, TYPE* d)                                //void method with 2 arguments
    {
        nota <TYPE> * current = new nota <TYPE>;                    //allocating memory for new member of vector
        current->key = k;                                           //seting key-value to new member's field
        current->data = d;                                          //setting data-pointer to new member's pointer
        headers.push_back(*current);                                //pushing new member to vector
        delete current;                                             //delete pointer for sure
    }
    void find(string k) const                                       //void method with one argument
    {
        for(int i = 0; i < headers.size(); i++)                     //iterating through all vector's members(onceI I organize sorting in .add(string k, TYPE* d), I will use binary search for this method)
        {
            if(k == headers[i].key)                                 //if key is matched
            {
                cout << headers[i].key << ':' << *(headers[i].data) << endl;//display full record in dictionary
            }
        }
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int value = 5;
    dictionary<int>spec("Aa", &value);
    int ovalue = 99;
    spec.add("Ab", &ovalue);
    int cvalue = 13;
    int dvalue = 301;
    spec.add("Aa",&cvalue);
    spec.add("Aa",&dvalue);
    spec.find("Ab");
    return a.exec();
}
