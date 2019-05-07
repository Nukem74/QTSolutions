#include <QCoreApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void copystr (char*, const char*);      //прототип функции с двумя аргументами-указателями указывающими на char и  на const char
    char* str1 = "hurry funny";
    char str2[80];
    copystr(str2, str1);
    cout << str2 << endl;
    return a.exec();
}

void copystr(char* dest, const char* str)                      //функция с одним аргументом-указателем на char
{
    while(*str)                              //условие выхода из цикла - достижение символа конца строки \0, который интерпретируется как false
        *dest++ = *str++;              //присвоение значению разыменованного указателя значения другого разыменованного указателя
    *dest = '\0';
}

