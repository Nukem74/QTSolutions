#include <QCoreApplication>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {11,22,33,44,55,66,77,88};                              //declaration of sample array
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int* ptr;
    ptr = find(arr, arr+8,33);                                      //call "find" to get number of item valued 33
    cout << "First found entry valued 33 at: " << (ptr-arr) << endl;//displaying result
    return a.exec();
}
