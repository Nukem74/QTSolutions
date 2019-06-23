#include <QCoreApplication>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool isFeet(string);                                 //prototype function

class Distance                                      //declaration of a class
{
private:                                            //list of private members
    int feet;
    float inches;
public:                                             //list of public members
    Distance()                                      //unparametrised constructor
    {
        feet = 0; inches = 0.0;
    }
    Distance(int ft, float in):feet(ft), inches(in) //parametrised constructor
    {
        /*feet = ft;
        inches = in;*/
        cout << feet << '\b' << inches;             //initialiser check
    }
    void showdist()                                 //public void method for displaying private fields
    {
        cout << feet << "\'-" << inches << '\"';
    }
    void getdist()                                  //public void method for setting private fields(yeah-yeah getdist is setting, I know)
    {
        string instr;

        while(true)                                 //cycle without condition
        {
            cout << "\n\n Designate feet: ";
            cin.unsetf(ios::skipws);                //unset flag skipwp to stop skipping whitespaces

            cin >> instr;
            if( isFeet(instr))
            {
                cin.ignore(10, '\n');               //what exactly does he mean - eat symbols?
                feet = atoi(instr.c_str());         //extract integer from string

                break;
            }
            cin.ignore(10, '\n');                   //eating symols with string delimiter

            cout << "Feet must fit int < 1000\n";
        }
        while(true)
        {
            cout << "\n\nDesignate inches: ";
            cin.unsetf(ios::skipws);                //unset flag skipwp to stop skipping whitespaces

            cin >> inches;
            if(inches >= 12.0 || inches < 0.0)      //checking inches to fit range
            {
                cout << "Inches must fit 0.0 < float < 11.99\n";
                cin.clear(ios::failbit);            //force failbit flag
            }
            if(cin.good())
            {
                cin.ignore(10, '/n');               //eating symols with string delimiter
                break;
            }
            cin.clear();
            cin.ignore(10, '\n');                   //unset flag skipwp to stop skipping whitespaces
            cout << "Wrong inches\n";
        }
    }
};

bool isFeet(string str)
{
    int slen = str.size();                          //getting string size
    if(slen == 0 || slen > 5)                       //size check
        return false;
    for(int j = 0; j < slen; j++)                   //symbol check
    {
        if((str[j] < '0' || str[j] > '9') && str[j] != '-')
            return false;
    }
    double n = atof(str.c_str());
    if((n< -999.0) || (n > 999.0))                  //value check
        return false;
    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Distance d;
    char ans;
    do
    {
        d.getdist();
        cout << "\nDistance is ";
        d.showdist();
        cout << "Repeat?(y/n)";
        cin >> ans;
        cin.ignore(10, '\n');
    }
    while(ans != 'n');

    return a.exec();
}
