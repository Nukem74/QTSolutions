#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void in_to_cm(double in)            //declaration of function
{
    cout << (in * 2.54) << ' ';
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    double inches[] = {3.5, 6.2, 1.0, 12.75, 4.33};//sample
    for_each(inches, inches+5, in_to_cm);//call "in_to_cm" for each member of sample array
    cout << endl;
    return a.exec();
}


