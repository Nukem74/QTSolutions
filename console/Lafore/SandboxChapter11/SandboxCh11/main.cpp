#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class where                             //объявление класса
{
private:                                //приватные члены
    char charray[10];
public:                                 //публичные члены
    void reveal()                       //публичный метод, отображающий адрес объекта
    {
        cout << "\nMy adress ain't house and ain't street, my adress - " << this;
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    where w1, w2, w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
    cout << endl;
////////////////////////////////////////////////////////////
    return a.exec();
}
