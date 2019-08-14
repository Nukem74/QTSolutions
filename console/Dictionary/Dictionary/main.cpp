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

char temp;

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
            if(headers[i].key.compare(k) > 0)                                 //condition for inserting new member
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
        cout << endl;
    }

    nota <TYPE> find(string s)                                      //my binary searching prototype
    {
        if(headers[0].key == s)                                     //this works good
        {
            cout << " first element checked" << endl;
            return headers[0];
        }

        unsigned int left = 0;

        if(headers[headers.size() - 1].key == s)                    //this works good
        {
            cout << " last element checked" << endl;
            return headers[headers.size() - 1];
        }

        unsigned int right = headers.size() - 1;

        int middle = (left + right) / 2;

        while(right > left)                                         //14.08.2019 searching loop seems to be ok, but I don't know how exactly do i fixed it
        {
            middle = (left + right) / 2;
            //cout << "iterating " << middle;
            switch (s.compare(headers[middle].key))
            {
            case -1:                                                //this case doesn't work well
                {
                    cout << "-1 case : " << middle << endl;
                    right = static_cast<unsigned int> (middle);
                    cout << " ( " << right << " - " << left << " ) / 2 = " << middle << endl;
                    break;
                }
            case 0:                                                 //this case working
                {
                    return headers[middle];
                    break;
                }
            case 1:                                                 //this case seem to be working
                {
                    cout << "1 case : " << middle << endl;
                    left = static_cast<unsigned int> (middle);;
                    cout << " ( " << right << " - " << left << " ) / 2 = " << middle << endl;
                    break;
                }
            default:
                {
                    cout << "switch result out of boundaries" << endl;
                    break;
                }
            }
            cin >> temp;
        }
        cout << "no result";
        nota <TYPE> NR;
        NR.key = "0";
        NR.data = nullptr;
        return NR;


    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int value = 5;
    dictionary<int>spec("aa", &value);
    int ovalue = 99;
    spec.add("fb", &ovalue);
    int cvalue = 13;
    spec.add("aA",&cvalue);
    int dvalue = 301;
    spec.add("aC",&dvalue);
    int evalue = 2;
    spec.add("AA", &evalue);
    int fvalue = 55114;
    spec.add("fF", &fvalue);
    spec.show();
    nota <int> sample;
    sample = spec.find("aa");
    cout << sample.getKey() << ' ' << *(sample.getData()) << endl;
    return a.exec();
}
