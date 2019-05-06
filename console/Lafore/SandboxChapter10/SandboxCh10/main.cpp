#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int var1 = 11;
    int var2 = 22;
    int var3 = 33;

    cout << &var1 << endl;
    cout << &var2 << endl;
    cout << &var3 << endl;
    return a.exec();
}
