#include <QCoreApplication>
#include <iostream>
#include <algorithm>
//#include <string>
using namespace std;

double in_to_cm(double in)          //declaration of fucntion
{
    return(in * 2.54);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    double inches[] = {3.5, 6.2, 1.0, 12.75, 4.33};//sample
    double centi[5];//destinated array
    transform(inches, inches+5, centi, in_to_cm);//call "transform" to fill destinated array with modified members of sample array
    for(int i = 0; i < 5; i++)
        cout << centi[i] << ' ';    //displaying
    cout << endl;
    return a.exec();
}


