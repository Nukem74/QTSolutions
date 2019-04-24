//example of stack
#include <QCoreApplication>
#include <iostream>
#include <iomanip>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        void getdist()
        {
            cout << "\n Enter feet: ";
            cin >> feet;
            cout << " Enter inches: ";
            cin >> inches;
        }
        void showdist()const
        {
            cout << feet << "\'-" << inches << '\"';
        }
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Distance dist [ 100 ];
    int n = 0;
    char ans;

    cout << endl;

    do
    {
        cout << "Make new entry " << n + 1;
        dist[n++].getdist();
        cout << "Continue entry (y/n)?:";
        cin >> ans;
    }
    while(ans != 'n');
    for (int j = 0;j < n;j++)
    {
        cout << "\nEntry # " << j + 1 << " : ";
        dist[j].showdist();
    }
    cout << endl;
    return a.exec();
}
