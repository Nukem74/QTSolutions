#include <QCoreApplication>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {33,22,33,44,33,55,66,77};                      //declaration of sample array
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n = count(arr, arr+8,33);                           //call "count" to get number of items valued 33
    cout << "Value 33 has " << n << " repeats." << endl;    //displaying result
    return a.exec();
}
