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
        //empty
    };

    Distance()                              //constructor without arguments
    {
        feet = 0; inches = 0.0;
    }

    Distance(int ft, float in)              //constructor with 2 arguments
    {
        if(in >= 12.0)                      //check conditions for throwing exception
            throw InchesEx();
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
            throw InchesEx();
    }

    void showdist()                         //void method with no arguments
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    try                                     //check suspicious elements for throwing exceptions
    {
        Distance dist1(17, 3.5);
        Distance dist2;
        dist2.getdist();

        cout << "\n dist1 = "; dist1.showdist();
        cout << "\n dist2 = "; dist2.showdist();

    }
    catch(Distance::InchesEx)               //catch errors, send message
    {
        cout << "\nInit error: "
                "inches value exceed limit";
    }
    cout << endl;
    return a.exec();
}
