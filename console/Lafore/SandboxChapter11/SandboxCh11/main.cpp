#include <QCoreApplication>
#include <iostream>
using namespace std;

class Distance                                      //объявление класса
{
private:                                            //приватные члены
    int feet;
    float inches;
public:                                             //публичные члены
    Distance() : feet(0), inches(0.0f)              //конструктор без аргументов с установкой двух приватных полей по умолчанию
    {
        //empty
    }
    Distance(int ft, float in)                      //конструктор с двумя аргументами
    {
        feet = ft;
        inches = in;
    }
    void showdist()                                 //публичный метод отображающий значение приватных полей
    {
        cout << feet << "\'" << inches << '\"';
    }
    friend float square(Distance);
};

float square(Distance d)
{
    float fltfeet = d.feet + d.inches/12;
    float feetsqrd = fltfeet * fltfeet;
    return feetsqrd;
}
////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    Distance dist(3, 6.0);
    float sqft;

    sqft = square(dist);

    cout << "\nDistance = ";
    dist.showdist();

    cout << "\nSquare of a diastance = " << sqft << "sq feet";
////////////////////////////////////////////////////////////
    return a.exec();
}
