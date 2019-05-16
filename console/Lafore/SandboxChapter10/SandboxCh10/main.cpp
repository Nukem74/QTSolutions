#include <QCoreApplication>
#include <iostream>
using namespace std;

int passByValue(int x)
{
    x = 99;
    return x;
}

void passByPointer(int* x)
{
    *x = 66;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int betty = 13;
    int sandy = 13;

    passByValue(betty);
    passByPointer(&sandy);

    cout << betty << endl;
    cout << sandy << endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}

