#include <QCoreApplication>
#include <iostream>
using namespace std;

const int MAX = 5;

void centimize(double *ptrd)
{
    for (int i = 0; i < MAX; i ++)
    {
        *ptrd++ *= 2.54;
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void centimize(double*);
    double varray[MAX] = {10.0, 43.1 , 95.9, 58.7, 87.3};
    centimize(varray);
    for(int j = 0; j < MAX; j++)
        cout << "varray [ " << j << " ] = " << varray[j] << "centimeters" << endl;
    return a.exec();
}


