#include <QCoreApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char str1 [] = "Defining array";
    char* str2 = "Defining pointer";

    cout << str1 << endl;
    cout << str2 << endl;

    //str1++;                           //unable to comply
    str2++;

    cout << str2 << endl;
    return a.exec();
}

