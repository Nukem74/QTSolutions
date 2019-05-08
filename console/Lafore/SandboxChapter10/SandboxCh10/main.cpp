#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class Distance                                      //объявление класса
{
private:                                            //перечисление приватных членов
    int feet;
    float inches;
public:                                             //перечисление публичных членов
    void getdist()                                  //публичный метод изменяющий значения приватных полей
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showdist()                                 //публичный метод отображающий значение приватных полей
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Distance dist;                                  //объявление объекта
    dist.getdist();
    dist.showdist();
    Distance* distptr = new Distance;               //объявление указателя на объект

    distptr->getdist();                             //вызов метода от разыменованного указателя на объект
    //тоже, что(*distptr).getdist();
    distptr->showdist();                            //вызов метода от разыменованного указателя на объект
    //тоже, что (*distptr).showdist;
    return a.exec();
}

