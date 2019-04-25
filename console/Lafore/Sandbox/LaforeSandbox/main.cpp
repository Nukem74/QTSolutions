#include <QCoreApplication>
#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char str1[] = "One ring to rule them all";
    const int MAX = 80;
    char str2[MAX];
    strcpy(str2, str1);                         //функция копирования строки
    cout << str2 << endl;
    return a.exec();
}
