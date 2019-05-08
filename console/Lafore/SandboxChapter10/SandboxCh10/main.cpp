#include <QCoreApplication>
#include <iostream>
using namespace std;
const int DAYS = 7;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char* arrptrs[DAYS] = {"Monday", "Tuesday", "Wednesday",
                           "Thursday", "Friday", "Saturday",
                           "Sunday"};                   //объявление массива указателей на тип char
    for(int i = 0; i < DAYS; i++)
    {
        cout << &arrptrs[i] << arrptrs[i] << endl;      //отображение элементов массива указателей и их адресов
    }
    return a.exec();
}

