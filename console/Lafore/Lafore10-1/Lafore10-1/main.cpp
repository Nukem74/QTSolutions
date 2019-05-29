#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;
const int DAYS = 7;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void bsort(char**, int);

    char* arrptrs[DAYS] = {"Sunday" , "Monday", "Tuesday", "Wednesday", "Thirsday", "Friday", "Saturday"};
    cout << "\nDisordered:\n";
    for (int i = 0;i < DAYS; i++)
    {
        cout << *(arrptrs+i) << endl;
    }
    bsort(arrptrs, DAYS);
    cout << "\nOrdered:\n";
    for (int i = 0;i < DAYS; i++)
    {
        cout << *(arrptrs+i) << endl;
    }
    return a.exec();
}

void bsort(char**pp, int n)
{
    void order(char**, char**);
    int i,j;
    for(i = 0; i < n-1; i++)
        for(j = i + 1; j < n; j++)
            order(pp+i,pp+j);
}

void order(char**pp1, char**pp2)
{
    if(strcmp(*pp1,*pp2)>0)
    {
        char*tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
