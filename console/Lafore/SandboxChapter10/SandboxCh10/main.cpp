#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char* str = "No rest for the wicked";       //объявление указателя на тип char
    //int len = strlen(str);

    char* ptr = new char [strlen(str) + 1];     //определение указателя на тип char с выделением памяти, равно длине строки str
                                                //но не ясно, что я приобретаю от выделения памяти. Как увидеть преимущество этого приема?
    strcpy(ptr, str);
    cout << "ptr = " << ptr << endl;

    delete [] ptr;
    return a.exec();
}

