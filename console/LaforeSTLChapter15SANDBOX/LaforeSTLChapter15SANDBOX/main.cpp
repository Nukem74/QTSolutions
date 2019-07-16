#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

double fdata[] = {19.2 , 87.4 , 33.6 , 55.0 , 11.5 , 42.2}; //sample

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sort(fdata, fdata+6, greater<double> ());               //call "sort" to descending order members of sample array
    for(int i = 0; i < 6; i++)
    {
        cout << fdata[i] << endl;                //displaying result
    }
    return a.exec();
}
