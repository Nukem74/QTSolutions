#include <QCoreApplication>
#include <iostream>

using namespace std;

template <class atype>                      //Function template
int find(atype * array, atype value, int size)  //funcion, that returns integer and geting two template arguments and one integer argument
{
    for(int i = 0; i < size; i++)
        if(array[i] == value)
            return i;
    return -1;
}
char chrArr[] = {1, 3, 5, 9, 11, 13};       //samples
char ch = 5;
int intArr[] = {1, 3, 5, 9, 11, 13};
int in = 6;
long lonArr[] = {1l, 3L, 5L, 9L, 11L, 13L};
long lo = 11l;
double dubArr[] = {1.0, 3.0, 5.0, 9.0, 11.0, 13.0};
double db = 4.0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //demo
    cout << "\n 5 found in chrArr at:" << find(chrArr, ch, 6);
    cout << "\n 6 found in intArr at:" << find(intArr, in, 6);
    cout << "\n 11 found in lonArr at:" << find(lonArr, lo, 6);
    cout << "\n 4.0 found in dubArr at:" << find(dubArr, db, 6);
    cout << endl;
    return a.exec();
}
