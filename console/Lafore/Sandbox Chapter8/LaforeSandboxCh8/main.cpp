#include <QCoreApplication>
#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0)
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
    Distance operator + (Distance)const;
};

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

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Distance dist1, dist3, dist4;
    dist1.getdist();
    Distance dist2(11, 6.25);
    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;

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

    return a.exec();
}
