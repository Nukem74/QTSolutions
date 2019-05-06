#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int intarray [5] = {31, 54, 77, 52, 93};    //объявление переменной
    int* ptrint;                                //объявление указателя
    ptrint = intarray;                          //присвоение указателю адреса массива
    for(int i = 0; i < 5; i++)
    {
        cout << *(ptrint++) << endl;            //доступ к элементам массива с помощью указателя типа int, прирастающего на величину памяти выделяемой для типа int
    }

    return a.exec();
}
