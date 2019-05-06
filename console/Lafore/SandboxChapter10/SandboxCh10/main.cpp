#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int var1 = 11;
    int var2 = 22;

    int *ptr;                       //создание указателя на переменную типа int
    ptr = &var1;                    //присвоение указателю адреса переменной
    //отображение адреса, и значения переменной, хранящейся по адресу
    cout << "Variable, stored at "<< ptr <<" has value: "<< *ptr << endl;

    ptr = &var2;                    //присвоение указателю адреса переменной
    //отображение адреса, и значения переменной, хранящейся по адресу
    cout << "Variable, stored at "<< ptr <<" has value: "<< *ptr << endl;
    return a.exec();
}
