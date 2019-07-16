#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//samples
string names[] = {"Sirgay" , "Thatyana", "He-lena", "Dmitriy", "Michaelis", "Khuilo"};
//string matching indicator for Khuilo
bool isKhuilo(string name)
{
    return (name == "Khuilo");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string* ptr;
    ptr = find_if(names, names+6, isKhuilo);    //call "find" to check if Khuilo is on the list
    //displaying
    if(ptr == names + 6)
        cout << "Khuilo not found";
    else
        cout << "Khuilo is at " << (ptr-names) << " position in the list" << endl;
    return a.exec();
}


