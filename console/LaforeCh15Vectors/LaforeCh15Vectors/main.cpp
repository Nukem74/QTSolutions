#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    double arr[] = {1.1, 2.2, 3.3, 4.4 };   //initialising double array

    vector<double> v1(arr, arr+4);          //initialising double vector with array members
    vector<double> v2(4);                   //defining vector with 4 members

    v1.swap(v2);                            //using .swap() to swap members of vectors

    while(!v2.empty())                      //using .empty() to designate end of cycle
    {
        cout << v2.back() << ' ';           //using .back() to display last member of vector
        v2.pop_back();                      //using .pop_back() to delete last member of vector
    }

    cout << endl;
    return a.exec();
}
