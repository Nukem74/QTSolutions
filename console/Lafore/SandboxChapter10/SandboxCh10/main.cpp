#include <QCoreApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void dispstr(char*);                    //прототип функции с одним аргументом-указателем на char
    char str[] = "Idlers always off";

    dispstr(str);

    return a.exec();
}

void dispstr(char* ps)                      //функция с одним аргументом-указателем на char
{
    while(*ps)                              //условие выхода из цикла - достижение символа конца строки \0, который интерпретируется как false
        cout << *ps++ << endl;              //отображение символа с последующим приращением указателя на величину char
    cout << endl;
}

