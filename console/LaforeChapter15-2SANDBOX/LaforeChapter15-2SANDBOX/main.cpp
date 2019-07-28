#include <QCoreApplication>
#include <iostream>
using namespace std;

class Distance                              //declaration of a class
{
private:                                    //private members
    int feet;
    float inches;
public:                                     //public members
    class InchesEx                          //declaration of exception-class
    {
    public:
        string origin;
        float iValue;

        InchesEx(string org, float in)
        {
            origin = org;
            iValue = in;
        }
    };

    Distance()                              //constructor without arguments
    {
        feet = 0; inches = 0.0;
    }

    Distance(int ft, float in)              //constructor with 2 arguments
    {
        if(in >= 12.0)                      //check conditions for throwing exception
            throw InchesEx("argumented constructor", in);//providing exception with values
        feet = ft;
        inches = in;
    }

    void getdist()                          //void method with no arguments
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
        if(inches >= 12.0)                  //check conditions for throwing exception
            throw InchesEx("getdist() method", inches);//providing exception with values
    }

    void showdist()                         //void method with no arguments
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    try
    {
        Distance dist1(17, 3.5);
        Distance dist2;
        dist2.getdist();

        cout << "\ndist1 = ";
        dist1.showdist();

        cout << "\ndist2 = ";
        dist2.showdist();
    }
    catch(Distance::InchesEx ix)
    {
        cout << "\nInit Error. Exception throwed by: " << ix.origin
             << ". \n Inches value exceeded: " << ix.iValue;
    }
    cout << endl;

    return a.exec();
}
