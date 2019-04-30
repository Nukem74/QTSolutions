#include <QCoreApplication>
#include <iostream>
#include <process.h>
using namespace std;
enum posneg {pos, neg};
class Distance
{
protected:
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
        cout <<"\n Enter feet: ";
        cin >> feet;
        cout << "\n Enter inches: ";
        cin >> inches;
    }
    void showdist()const
    {
        cout << feet << "\'" << inches << '\"' << endl;
    }
};

class DistSign: public Distance
{
private:
    posneg sign;
public:
    DistSign():Distance()
    {
        sign = pos;
    }
    DistSign(int ft, float in = 7.0, posneg sg = pos): Distance (ft, in)
    {
        sign = sg;
    }
    /*
    В конструкторе с 3-мя аргументами два аргумента указаны по умолчанию
    то есть являются не обязательными
    Важно именно то, что я совершенно забыл об этой детали синтаксиса
    и сейчас напоминаю себе
    */
    void getdist()
    {
        Distance::getdist();
        char ch;
        cout << "Enter sign (+ or -): ";
        cin >> ch;
        sign = (ch == '+') ? pos : neg;
    }
    void showdist()const
    {
        cout << ((sign == pos) ? "+" : "-");
        Distance::showdist();
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DistSign alpha;
    alpha.getdist();

    DistSign beta (11);

    DistSign gamma (100, 5.5, neg);

    cout << "\nA = ";
    alpha.showdist();
    cout << "\nB = ";
    beta.showdist();
    cout << "\nC = ";
    gamma.showdist();
    cout << endl;
    return a.exec();
}
