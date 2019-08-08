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
    nota()
    {
        //empty
    }
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
        nota <TYPE> * current;
        try
        {
           current = new nota <TYPE>;                               //allocating memory for new member of vector
        }
        catch(bad_alloc)                                            //exception for failed allocation
        {
            cout << "dictionary(string, TYPE*): bad allocation memory";
            current = nullptr;
            delete current;
        }
        current->key = k;                                           //seting key-value to new member's field
        current->data = d;                                          //setting data-pointer to new member's pointer
        headers.push_back(*current);                                //pushing new member to vector
        delete current;                                             //delete pointer for sure
    }

    /*dictionary(std::string k, TYPE d)
    {
                                                                    //here goes constructor that initialises vector with templated object(not a pointer)
        nota <TYPE> * current = new nota <TYPE>;
        current->key = k;
        *current->data = d;
        headers.push_back(*current);
        delete current;
    }*/
    void add(std::string k, TYPE* d)                                //void method with 2 arguments
    {
        nota <TYPE> * current;
        try
        {
            current = new nota <TYPE>;                              //allocating memory for new member of vector
        }
        catch(bad_alloc)                                            //exception for failed allocation
        {
            cout << ".add(string, TYPE*) dictionary: bad allocation memory";
            current = nullptr;
            delete current;
        }
        current->key = k;                                           //seting key-value to new member's field
        current->data = d;                                          //setting data-pointer to new member's pointer
        for(unsigned int i = 0; i < headers.size(); i++)                     //iterating through vector to place new member at distinct place
        {
            if(k <= headers[i].key)                                 //condition for inserting new member
            {
                headers.insert(headers.begin() + i, *current);      //.insert new member in vector
                return;                                             //skip method
            }
        }
        headers.push_back(*current);                                //if condition for placing new member didn't met - place new member in the back of the vector
        delete current;
    }
    void show() const                                               //void method with no arguments
    {
        for(unsigned int i = 0; i < headers.size(); i++)            //iterating through all vector's members
        {

                cout << headers[i].key      << ':'
                     << *(headers[i].data)  << endl;                //display full record in dictionary
        }
    }
    nota <TYPE> find(string s)                                      //my binary searching prototype
    {
        if(headers.begin().key == s)
            return headers.begin();
        unsigned int left = 1;

        if(headers.end().key == s)
            return headers.end();
        unsigned int right = headers.size() - 1;

        while(left < right)
        {
            if(headers[(right - left)/2] == s)
            {
                return headers[(right - left)/2];
            }

            if(headers[(right - left)/2] < s)
            {
                right = (right - left)/2;
                continue;
            }

            if(headers[(right - left)/2] > s)
            {
                left = (right - left)/2;
                continue;
            }
        }


    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int value = 5;
    dictionary<int>spec("aA", &value);
    int ovalue = 99;
    spec.add("fb", &ovalue);
    int cvalue = 13;
    spec.add("aA",&cvalue);
    int dvalue = 301;
    spec.add("AA",&dvalue);
    int evalue = 2;
    spec.add("AA", &evalue);
    int fvalue = 55114;
    spec.add("fF", &fvalue);
    spec.show();
    return a.exec();
}
