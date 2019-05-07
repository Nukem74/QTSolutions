#include <QCoreApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void order(int* , int*);            //прототип функции с двумя аргументами-указателями на int
    void bsort(int*, int);              //прототип функции с двумя аргументами: указателем на int  и переменной int
    const int N = 10;
    int arr [N] = {37, 84, 62, 91, 11, 65, 57 , 28 , 19, 49};

    bsort(arr, N);
    for (int i = 0;i < N;i++)
    {
        cout << arr[i] << '\b' << endl;
    }
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

void bsort(int* ptr, int n)             //bubble sort
{
    int i, j;
    for (i = 0;i < n; i++)
    {
        for (j = i + 1; j < i; j++)
        {
            order(ptr + i, ptr + j);
        }
    }
}
