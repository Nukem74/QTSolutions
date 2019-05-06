#include <QCoreApplication>
#include <iostream>
using namespace std;

void centimize(double *ptrd)
{
    *ptrd*= 2.54;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    void centimize (double*);

    double var = 10.0;

    cout << "var = " << var << "inches" << endl;

    centimize(&var);
    cout << "var = " << var << "centimeters" << endl;

    return a.exec();
}


