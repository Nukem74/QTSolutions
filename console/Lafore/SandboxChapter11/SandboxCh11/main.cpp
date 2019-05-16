#include <QCoreApplication>
#include <iostream>
using namespace std;

class beta;

class alpha
{
private:
    int data;
public:
    alpha() : data(3)
    {
        //empty
    }
    friend int frifunc(alpha, beta);
};

class beta
{
private:
    int data;
public:
    beta(): data(7)
    {
        //empty
    }
    friend int frifunc(alpha, beta);
};

int frifunc(alpha a, beta b)
{
    return(a.data + b.data);
}

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    alpha aa;
    beta bb;

    cout << frifunc(aa, bb) << endl;
////////////////////////////////////////////////////////////
    return a.exec();
}
