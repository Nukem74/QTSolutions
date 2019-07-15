#include <QCoreApplication>
#include <iostream>

using namespace std;

template <class T>                      //Function template
T abs(T n)
{
    return(n < 0) ? -n : n;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int int1 = 5;
    int int2 = -6;
    long lon1 = 70000L;
    long lon2 = -80000L;
    double dub1 = 9.95;
    double dub2 = - 10.15;

    cout <<  "\nabs(" << int1 << ")=" << abs(int1); //absolute int1
    cout <<  "\nabs(" << int2 << ")=" << abs(int2); //absolute int2
    cout <<  "\nabs(" << lon1 << ")=" << abs(lon1); //absolute lon1
    cout <<  "\nabs(" << lon2 << ")=" << abs(lon2); //absolute lon2
    cout <<  "\nabs(" << dub1 << ")=" << abs(dub1); //absolute dub1
    cout <<  "\nabs(" << dub2 << ")=" << abs(dub2); //absolute dub2
    cout << endl;
    return a.exec();
}
