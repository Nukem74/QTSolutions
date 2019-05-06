#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int intvar;             //объявление переменных
    float floatvar;

    int *ptrint;            //объявление указателей
    float *ptrfloat;
    void *ptrvoid;

    ptrint = &intvar;       //присвоение указателям адресов переменных
    ptrfloat = &floatvar;

    ptrvoid = &intvar;      //присвоение указателю на void адресов переменных
    cout << ptrvoid;
    ptrvoid = &intvar;
    cout << ptrvoid;        //гордыня


    return a.exec();
}
