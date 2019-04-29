#include <QCoreApplication>
#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0)
    {
        //empty
    }
    Distance(int ft, float in): feet(ft), inches(in)
    {
        //empty
    }
    void getdist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
    Distance operator + (Distance)const;            //переопределение операторов
    bool operator < (Distance) const;
    void operator += (Distance);              //внимание! Лафоре в своем примере по переопределению оператора "+=" объявляет этот оператор постоянным! это недопустимо, так как действие оператора подразумевает изменение приватных полей объекта его вызывающего
};

void Distance::operator+=(Distance d2)
{
    feet += d2.feet;
    inches += d2.inches;
    if( inches >= 12.0)
    {
         inches -= 12.0;
         feet++;
    }
}

bool Distance::operator < (Distance d2) const
{
    float bf1 = feet + inches / 12;
    float bf2 = d2.feet + d2.inches / 12;
    return (bf1 < bf2) ? true : false;
}
/*
Переопределенный оператор "<" вызывается объектом класса Distance
принимает в себя другой объект класса Distance
и возвращает значение типа bool
*/

Distance Distance::operator+( Distance d2) const        //переопределение бинарного оператора сложения
{
    int f = feet +d2.feet;
    float i = inches + d2.inches;
    if( i >= 12.0)
    {
         i -= 12.0;
         f++;
    }
    return Distance(f, i);
}

/*
Переопределенный оператор "+" вызывается объектом класса Distance,
принимает в себя другой объект класса Distance
и возвращает третий -  безымянный объект класса Distance
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Distance dist1, dist3, dist4;
    dist1.getdist();
    Distance dist2(11, 6.25);
    dist3 = dist1 + dist2;
    dist4 += dist3;

    cout << "dist1 = ";
    dist1.showdist();
    cout << endl;
    cout << "dist2 = ";
    dist2.showdist();
    cout << endl;
    cout << "dist3 = ";
    dist3.showdist();
    cout << endl;
    cout << "dist4 = ";
    dist4.showdist();
    cout << endl;
    if(dist1 < dist2)
        cout << "\ndist1 lesser then dist2";
    else
    {
        cout << "\ndist1 larger then dist2";
    }
    cout << endl;

    return a.exec();
}
