#include <QCoreApplication>
#include <iostream>
using namespace std;
#include <cmath>
/*Вычислить экспоненту с заданной точностью*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int index, step;
    double eps, expf, rowM;
    cout << "Enter index of exponent ";
    cin >> index;
    expf = 1;
    step = 1;
    rowM = 1;
    cout << "\nEnter precise ";
    cin >> eps;
    while(fabs(rowM) >= eps)
    {
        rowM = rowM * index / step;
        expf = expf + rowM;
        step++;
    }
    int counter = 0;
    while(eps < 1)
    {
        eps = eps * 10;
        counter++;
    }
    cout.precision(counter);
    cout <<  fixed << expf;
    return 0;
}

