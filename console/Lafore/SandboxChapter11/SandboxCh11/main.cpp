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
    Distance(float fltfeet)                         //конструктор с одним аргументом
    {
        feet = static_cast<int>(fltfeet);
                inches = 12*(fltfeet - feet);
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
    friend Distance operator + (Distance, Distance);//прототип дружественной перегрузки оператора
};

Distance operator + (Distance d1, Distance d2)       //перегрузка оператора
{
    int f = d1.feet + d2.feet;
    float i = d1.inches + d2.inches;
    if ( i >= 12.0f)
    {
        i -= 12.0f;
        f++;
    }
    return Distance(f,i);
}
////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    Distance d1 = 2.5;
    Distance d2 = 1.25;
    Distance d3;
    cout << "\nd1 = ";
    d1.showdist();
    cout << "\nd2 = ";
    d2.showdist();

    /*d3 = d1 + 10.0;
    cout << "\nd3 = ";
    d3.showdist();*/

    d3 = 10.0 + d1;
    cout << "\nd3 = ";
    d3.showdist();
    cout << endl;
////////////////////////////////////////////////////////////
    return a.exec();
}
