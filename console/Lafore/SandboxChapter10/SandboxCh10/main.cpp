#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int var1 = 11;
    int var2 = 22;

    cout << &var1 << endl << &var2 << endl << endl;

    int *ptr;                       //создание указателя на переменную типа int
    ptr = &var1;                    //присвоение указателю адреса переменной
    cout << ptr << endl;
    ptr = &var2;                    //присвоение указателю адреса переменной
    cout << ptr << endl;
    return a.exec();
}
