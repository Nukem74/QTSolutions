#include <QCoreApplication>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {45, 2, 22, -17, 0, -30, 25, 55};   //declaration of sample array
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sort(arr, arr+8);                           //call "sort" to order members of array
    for(int i = 0; i < 8; ++i)
    {
        cout << arr[i] << endl;                 //displaying result
    }
    return a.exec();
}
