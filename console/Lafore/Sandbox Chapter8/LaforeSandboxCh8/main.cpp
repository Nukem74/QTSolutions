#include <QCoreApplication>
#include <iostream>
#include <process.h>
using namespace std;

class Distance
{
private:
    const float MTF;
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0), MTF (3.280833F)
    {
        //empty
    }
    Distance(float meters): MTF (3.280833F)         //конструктор с одним аргументом служащий для преобразования float->Distance
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    Distance(int ft, float in): feet(ft), inches(in), MTF (3.280833F)
    {
        //empty
    }
    void getdist()
    {
        cout << "\nEnter feet ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showdist()
    {
        cout << feet << "\'-" << inches << '\"';
    }
    operator float() const                      //преобразование Distance ->float
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    float mtrs;
    Distance dist1 = 2.35F;
    cout << "\ndist1 = ";
    dist1.showdist();
    mtrs = static_cast<float>(dist1);
    cout << "\ndist1 = " << mtrs << "meters\n";
    Distance dist2 (5, 10.25);
    mtrs = dist2;
    cout << "\ndist2 =" << mtrs << " meters\n";
    return a.exec();
}
