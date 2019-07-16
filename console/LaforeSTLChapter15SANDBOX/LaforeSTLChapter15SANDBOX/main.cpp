#include <QCoreApplication>
#include <iostream>
#include <algorithm>
using namespace std;

int src1[] = {2, 3, 4, 6, 8};                   //declaration of samples
int src2[] = {1, 3, 5};
int dest[8];
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    merge(src1, src1+5, src2, src2+3, dest);    //merging sample arrays
    for(int i = 0; i < 8; i++)
    {
        cout << dest[i] << endl;                //displaying result
    }
    return a.exec();
}
