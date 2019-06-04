#include <QCoreApplication>
#include <iostream>
using namespace std;

//Определить можно ли с использованием только операций «прибавить 3» и «прибавить 5»
//получить из числа 1 число N (N - натуральное, не превышает 10^6).
//Разумеется, само число 1 получить можно, просто не применяя никаких операций.

bool recursivefunction3(int n , int m = 1)
{
    if(m < n)
    {
        m = m + 3;
        recursivefunction3(n,m);
    }
    return(n == m);
}

bool recusivefunction5(int n, int m = 1)
{
    if(m < n)
    {
        m = m + 5;
        recusivefunction5(n,m);
    }
    return(n == m);
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int top = 1000000;
    for (int i = 1; i < top;i++)
    {
        if(recursivefunction3(i) && recusivefunction5(i))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return a.exec();
}
