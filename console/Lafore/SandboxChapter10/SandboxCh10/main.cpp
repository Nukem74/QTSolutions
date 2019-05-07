#include <QCoreApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void order(int* , int*);            //прототип функции с двумя аргументами-указателями на int
    int n1 = 99;
    int n2 = 11;
    int n3 = 22;
    int n4 = 88;

    order(&n1, &n2);                    //вызов функции с двумя аргументами-адресами на переменные
    order(&n3, &n4);

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "n3 = " << n3 << endl;
    cout << "n4 = " << n4 << endl;
    return a.exec();
}

void order(int* numb1, int* numb2)      //функция с двумя аргументами-указателями на int
{
    if(*numb1 > *numb2)                 //условие, оперирующее значениями разыменованных указателей(переменных по адресу)
    {
    int temp = *numb1;                  //присвоение значения разыменованного указателя временной переменной
    *numb1 = *numb2;                    //присвоение значению разыменованного указателя значения другого разыменованного указателя
    *numb2 = temp;                      //присвоение значению разыменованного указателя значения временной переменной
    }
}
