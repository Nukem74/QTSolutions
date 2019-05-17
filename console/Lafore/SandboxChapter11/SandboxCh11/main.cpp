#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class what
{
private:
    int alpha;
public:
    void tester()
    {
        this->alpha = 11;//same as alpha = 11
        cout << this->alpha;//same as cout << alpha
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    what w;
    w.tester();
    cout << endl;
////////////////////////////////////////////////////////////
    return a.exec();
}
