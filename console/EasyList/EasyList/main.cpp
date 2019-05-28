#include <QCoreApplication>
#include <iostream>
using namespace std;

const int size = 100;


class Line
{
private:
    int value;
    Line()
    {
        value = NULL;
    }
    void set(int n)
    {
        value = n;
    }
    int get()const
    {
        return value;
    }
    friend class List;                      //разберись как перейти от сюда к наследованию
};

class List
{
private:
    Line current[size];
    int counter;
public:
    List()                                  //конструктор без аргументов инициализирующий список
    {
        counter = 0;
        for (int i = 0; i < size; i++)
        {
            current[i].set(NULL);           //корректно ли инициализировать int выражением NULL?
        }
    }
    void clearList()
    {
        counter = 0;
        for (int i = 0; i < size; i++)
        {
            current[i].set(NULL);
        }
    }
    void add(int val)
    {
        if(counter > size)
            exit(1);
        current[counter].set(val);
        counter++;
    }
    int getFirst()const
    {
        return current[0].get();
    }
    int getlast()const
    {
        return current[counter].get();
    }
    int cut(int val)
    {
        if(counter == 0)
        {
            exit(1);
        }
        int temp = NULL;
        for (int i = 0; i < counter; i++)
        {
            if(current[i].get() == val)
            {
                temp = current[i].get();
                counter--;
                for (int j = i; j < counter ; j++)
                {
                    current[j] = current[j + 1];
                }
            }
        }
        return temp;
    }
    void showList()
    {
        for(int i = 0;i < counter;i++)
        {
            cout << i << ":" << current[i].get() << endl;
        }
        cout << endl;
    }

    void bubblesort()
    {
        int temp_counter  =counter;
        int iterator;
        for(int i = 0;i < temp_counter;i++)
        {
            for(int j = i + 1; j < temp_counter; j++)
            {
                if(current[i].get() > current[j].get())
                {
                    Line temp = current[i];
                    current[i] = current[j];
                    current[j] = temp;
                    iterator++;

                }
            }
        }
        cout << "there are" << iterator << "iterations" << endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    List exmpl;
    for (int i = 1; i < 10; i++)
    {
        exmpl.add(rand() % 100);
    }

    exmpl.bubblesort();

    /*exmpl.bubblesort();
    exmpl.showList();

    exmpl.bubblesort();
    exmpl.showList();

    exmpl.bubblesort();
    exmpl.showList();*/
    return a.exec();
}
