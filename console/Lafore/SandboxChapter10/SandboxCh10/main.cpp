#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class person                        //объявление класса
{
protected:                          //защищенные члены
    string name;
public:                             //публичные члены
    void setName()                  //метод без аргументов устанавливающий значение защищенного поля
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void printName()                //метод без аргументов отображающий значение защищенного поля
    {
        cout << endl << name;
    }
    string getName()                //метод без аргументов, возвращающий содержимое защищенного поля
    {
        return name;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    void bsort(person**, int);      //прототип функции
    person* persPtr [100];          //определение массива указателей на тип person
    int n = 0;
    char choice;

    do                              //заполнение элементов массива
    {
        persPtr [n] = new person;
        persPtr[n]->setName();
        n++;
        cout << "Continue? (y/n)";
        cin >> choice;

    }
    while(choice == 'y');

    cout << "\nUnsorted list: ";
    for (int i = 0; i < n; i++)     //отображение элементов массива
    {
        persPtr[i]->printName();
    }
    cout << endl;

    bsort(persPtr, n);              //сортировка

    cout << "\nSorted list: ";      //отображение элементов массива
    for(int i = 0; i < n; i++)
    {
        persPtr[i]->printName();
    }
    cout << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}


void bsort(person** pp, int n)      //определение функции с двумя аргументами
{
    void order(person**, person**); //прототип функции
    /*
     ** - обозначение указателя на указатель
     необходимо для доступа к указанному элементу указанного массива
    */
    int i,j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            order(pp +i, pp+j);
        }
    }
}

void order(person** pp1, person** pp2)//определение функции с двумя аргументами
{
    //сортировка
    if( (*pp1)->getName() > (*pp2)->getName())
    {
        person* tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
