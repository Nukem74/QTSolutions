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

//char temp;

template <class TYPE>                                               //declaration of a template class
class nota
{
private:
    std::string key;                                                //private string member, that contains key to data
    TYPE* data;                                                     //private templated pointer, that directs to data object
    friend class dictionary<TYPE>;                                  //declaration of class friendship(I hope once i will make here a proper inheritance)
public:
    void setKey(std::string s)
    {
        key = s;
    }
    void setData(TYPE* d)
    {
        data = d;
    }
    std::string getKey()
    {
        return key;
    }

    TYPE* getData()
    {
        return data;
    }
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
//////////////////////////////////////
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
/////////////////////////////////////
    dictionary(std::string k, TYPE d)                               //overloaded contructor with 2 arguments
    {

        nota <TYPE> * current;
        try
        {
            current = new nota <TYPE>;                              //allocating memory for new member of vector
        }
        catch(bad_alloc)                                            //exception for failed allocation
        {
            cout << "dictionary(string, TYPE): bad allocation memory";
            current = nullptr;
            delete current;
        }
        current->key = k;                                           //setting key-value to new member's field
        current->data = &d;                                         //setting data-pointer to argument's adress
        headers.push_back(*current);                                //pushing new member to vector
        delete current;                                             //delete pointer for sure
    }
//////////////////////////////
    dictionary(nota <TYPE> N)                                       //overloaded constructor with single argument
    {
        headers.push_back(N);
    }
////////////////////////////////////////
    nota<TYPE>& operator[] (const int i)                            //operator [] overloaded to grant access only to vector's members, not to vector functions
    {
        return headers[i];
    }
////////////////////////////////////
    void add(std::string k, TYPE* d)                                //void method with 2 arguments
    {
        nota <TYPE> * current;                                      //declaration of a template pointer
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
        for(unsigned int i = 0; i < headers.size(); i++)            //iterating through vector to place new member at distinct place
        {
            if(headers[i].key.compare(k) > 0)                       //condition for inserting new member
            {
                headers.insert(headers.begin() + i, *current);      //.insert new member in vector
                return;                                             //skip method
            }
        }
        headers.push_back(*current);                                //if condition for placing new member didn't met - place new member in the back of the vector
        delete current;
    }
///////////////////////////////////
    void add(std::string k, TYPE d)                                 //overloaded void method with 2 arguments
    {
        nota <TYPE> * current;                                      //declaration of a template pointer
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
        current->data = &d;                                         //setting data-pointer to adress of argument's adress
        for(unsigned int i = 0; i < headers.size(); i++)            //iterating through vector to place new member at distinct place
        {
            if(headers[i].key.compare(k) > 0)                       //condition for inserting new member
            {
                headers.insert(headers.begin() + i, *current);      //.insert new member in vector
                return;                                             //skip method
            }
        }
        headers.push_back(*current);                                //if condition for placing new member didn't met - place new member in the back of the vector
        delete current;
    }

/////////////////////
    void show() const                                               //void method with no arguments
    {
        for(unsigned int i = 0; i < headers.size(); i++)            //iterating through all vector's members
        {

                cout << headers[i].key      << ':'
                     << *(headers[i].data)  << endl;                //display a record in dictionary
        }
        cout << endl;
    }
///////////////////////////////
    nota <TYPE> find(string s)                                      //binary searching method with one argument
    {
        if(headers[0].key == s)                                     //checking first member of vector
        {
            cout << " first element checked" << endl;
            int i = 0;                                              //local variable

            while(headers[i].key == s)                              //prototype finding all notes with same key
            {
                cout << headers[i].key << ':' << *headers[i].data << endl;
                i++;
            }

            return headers[0];
        }

        unsigned int left = 0;                                      //left border of vector

        if(headers[headers.size() - 1].key == s)                    //checking last member of vector
        {
            cout << " last element checked" << endl;
            int i = headers.size() - 1;                             //local variable

            while(headers[i].key == s)                              //prototype finding all notes with same key
            {
                cout << headers[i].key << ':' << *headers[i].data << endl;
                i--;
            }
            return headers[headers.size() - 1];
        }

        unsigned int right = headers.size() - 1;                    //right border of vector

        int middle = (left + right) / 2;                            //variable middle member

        while(right > left)                                         //search while borders didn't cross
        {
            middle = (left + right) / 2;                            //temporal code duplication
            //cout << "iterating " << middle;
            switch (s.compare(headers[middle].key))                 //switch results of comparing
            {
            case -1:                                                //changing borders
                {
                    cout << "-1 case : " << middle << endl;
                    right = static_cast<unsigned int> (middle);     //new value for right border of the vector
                    cout << " ( " << right << " - " << left << " ) / 2 = " << middle << endl;
                    break;
                }
            case 0:                                                 //key value matches arguments value
                {
                    int point = middle;                             //local variable
                    while(s.compare(headers[middle - 1].key) == 0)
                          middle--;
                    while(s.compare(headers[middle].key) == 0)      //prototype finding all notes with same key
                        {
                            cout << headers[middle].key << ':' << *headers[middle].data << endl;
                            middle++;

                        }
                    return headers[point];                          //return result of searching
                    break;
                }
            case 1:                                                 //changing borders
                {
                    cout << "1 case : " << middle << endl;
                    left = static_cast<unsigned int> (middle);      //new value for left border
                    cout << " ( " << right << " - " << left << " ) / 2 = " << middle << endl;
                    break;
                }
            default:                                                //failed comparison result
                {
                    cout << "switch result out of boundaries" << endl;
                    break;
                }
            }
            //cin >> temp;
        }
        cout << "no result";                                        //return NO RESULT
        nota <TYPE> NR;
        NR.key = "0";
        NR.data = nullptr;
        return NR;


    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string data = "fed";
    dictionary <string> sample ("aa", "b");
    sample.add("cc", "data");
    sample.add("mn", "rah");
    sample.add("oa", "u!o");
    sample.add("ty", "e.");
    sample.add("12", "fk");
    sample.show();
    return a.exec();
}
