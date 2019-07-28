#include <QCoreApplication>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const unsigned long SIZE = 10000;
    char* ptr;
    try
    {
        ptr = new char[SIZE];
    }
    catch(bad_alloc)
    {
        cout << "\n bad_alloc: unable to allocate memory for data \n";
        return(1);
    }
    delete[] ptr;
    cout << "\nEnd";
    return a.exec();
}
