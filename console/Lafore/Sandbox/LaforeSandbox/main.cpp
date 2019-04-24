#include <QCoreApplication>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const int MAX = 80;
    char str [ MAX ];

    cout << "Enter a string: ";
    cin.get(str, MAX, '$');
    cout << "Your entry: " << endl << str << endl;
    return a.exec();
}
