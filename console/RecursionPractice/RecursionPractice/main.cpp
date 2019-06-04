#include <QCoreApplication>
#include <iostream>
using namespace std;

//Дана строка, содержащая только десятичные цифры. Найти и вывести наибольшую цифру.
int maximal = 0;
int recursionMax(unsigned int number)
{
    if(maximal < (number % 10))
        maximal = number % 10;
    if(number != 0)
    {
        number = number / 10;
        recursionMax(number);
    }
    return maximal;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    unsigned int sample = 1202340432;
    cout << recursionMax(sample);
    return a.exec();
}
