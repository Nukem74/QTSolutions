#include <QCoreApplication>
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base\n";
    }
};

class Derv1 : public Base
{
public:
    void show()
    {
        cout << "Dervl\n";
    }
};

class Derv2 : public Base
{
public:
    void show()
    {
        cout << "Derv2\n";
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    Derv1 dv1;
    Derv2 dv2;
    Base* ptr;
    ptr = &dv1;
    ptr->show();
    ptr=&dv2;
    ptr->show();
////////////////////////////////////////////////////////////
    return a.exec();
}
