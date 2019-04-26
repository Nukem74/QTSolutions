#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string aName = "John";
    string userName;
    cout << "Enter your name: ";
    getline(cin, userName);
    if( userName == aName)
    {
        cout << "\nHello" << aName;
    }
    else if (userName < aName)
    {
        cout << "\nYour name before John";
    }
    else
    {
        cout << "\n Your name after John";
    }

    int n = userName.compare(0,2,aName, 0, 2);
    cout << "\nFirst two letters of your name ";
    if(n == 0)
    {
        cout << "match";
    }
    else if( n < 0 )
    {
        cout << "goes before ";
    }
    else
    {
        cout << "goes after ";
    }
    cout << aName.substr(0, 2) << endl;


    return a.exec();
}
