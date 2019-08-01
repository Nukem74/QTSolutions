#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int arr[] = {100, 110, 120, 130};       //initialising array

    vector<int> v (arr, arr+4);             //initialising vector with array members

    cout << "\nBefore isertion: ";

    for(int j = 0; j < v.size(); j++)       //using .size to designate end-of-cycle
    {
        cout << v[j] << ' ';                //using [] to get access to vector's member
    }
    v.insert(v.begin() + 2, 115);           //using .insert() and .begin() to insert new member at some position in vector

    cout << "\n After insertion: ";
    for(int i = 0; i < v.size(); i++)       //using .size to designate end-of-cycle
    {
        cout << v[i] << ' ';                //using [] to get access to vector's member
    }
    v.erase(v.begin() + 2);                 //using .erase and .begin to erase member at some position

    cout << "\n After deletion: ";
    for(int i = 0; i < v.size(); i++)       //using .size to designate end-of-cycle
    {
        cout << v[i] << ' ';                //using [] to get access to vector's member
    }

    cout << endl;
    return a.exec();
}
