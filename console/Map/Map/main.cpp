#include <QCoreApplication>
#include <iostream>
using namespace std;

const int size = 100;
const char NAC = '\0';
const int NAI = 0;

class Object
{
private:
    int value;
    char key;
    friend class Map;

    void setKey(char k)
    {
        key = k;
    }
    void setValue(int val)
    {
        value = val;
    }
public:
    Object()
    {
        //empty
    }
    Object(char NAC): key(NAC)
    {
        key = '\0';
        value = 0;
    }
    char getKey()const
    {
        return key;
    }
    int getValue()const
    {
        return value;
    }
};



class Map
{
private:
    Object location[size];
    int counter;
public:
    Map()
    {
        //empty
        counter = 0;
    }
    ~Map()
    {
        //empty
    }
    void add(char k, int val)
    {
        location[counter].setKey(k);
        location[counter].setValue(val);
        counter++;
    }
    void displayMap()const
    {
        for(int i = 0; i < counter; i++)
        {
            cout << location[i].getKey() << ":" << location[i].getValue() << endl;
        }
    }
    void find(char k)const
    {
        for(int i = 0; i < counter; i++)
        {
            if(location[i].getKey() == k)
            {
                cout << location[i].getKey() << ":" << location[i].getValue() << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    void find(int val)const
    {
        for(int i = 0; i < counter; i++)
        {
            if(location[i].getValue() == val)
            {
                cout << location[i].getKey() << ":" << location[i].getValue() << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    bool exist(char k, int val)const
    {
        for(int i = 0; i < counter; i++)
        {
            if((location[i].getValue() == val) && (location[i].getKey() == k))
            {
                return true;
            }
            else
            {
                continue;
            }
        }
        return false;
    }
    Object getObject(char k)                //публичный метод с одним аргументом, возвращающий объект содержащий аргумент
    {
        for(int i = 0; i < counter; i++)
        {
            if(location[i].getKey() == k)
            {
                return location[i];
            }
            else
            {
                continue;
            }
        }
        return Object(NAC);
    }
    void removeKey(char k)
    {
        int index;
        for(int i = 0; i < counter; i++)
        {
            if(location[i].getKey() == k)
            {
                index = i;
                counter--;
            }
        }
        for(index; index < counter; index++)
        {
            location[index] = location[index + 1];
        }
    }
    void cleanRepeat()                  //метод очистки словаря от повторяющихся значений
    {
        for(int i = 0; i < counter; i++)
        {

            for(int j = i + 1; j < counter; j++)
            {
                if((location[i].getValue() == location[j].getValue()) && (location[i].getKey() == location[j].getKey()))
                {
                    counter--;
                    location[j] = location[j + 1];
                }
            }
            /*while((location[i].getValue() == location[j].getValue()) && (location[i].getKey() == location[j].getKey()) && (j < counter))
            {
                counter--;
                location[j] = location[j + 1];
                j++;
            }*/


        }
    }

};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Map exmpl;
    exmpl.add('A', 101);
    exmpl.add('C', 303);
    exmpl.add('C', 303);
    exmpl.add('B', 202);
    exmpl.add('C', 303);
    exmpl.add('C', 303);
    exmpl.add('C', 303);
    exmpl.displayMap();
    exmpl.cleanRepeat();
    cout << endl;
    exmpl.displayMap();
    return a.exec();
}
