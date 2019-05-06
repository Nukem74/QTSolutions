#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int var1, var2;                 //объявление переменных
    int *ptr;                       //объявление указателя
    ptr = &var1;                    //присваивание указателю адреса
    *ptr = 37;                      //присваивание переменной, хранящейся по адресу значения
    var2 = *ptr;                    //присваивание переменной значения, хранящегося по адресу
    cout << var2 << endl;           //гордыня
    return a.exec();
}
