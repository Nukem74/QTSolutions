#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> v;                      //declaration of a vector
    v.push_back(10);                    //pushing data to vector's back
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v[0] = 20;                          //correcting vector's members data
    v[3] = 23;

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';            //displaying vector
    }
    cout << endl;
    return a.exec();
}
