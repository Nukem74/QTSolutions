#include <QCoreApplication>
#include <iostream>
using namespace std;

int recursiveSum(int number, int result)
{
    result += number % 10;
    //cout << result << endl;
    if(number > 0)
    {
        recursiveSum(number / 10, result);
    }
    cout << result << endl;
    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int sum = 0;
    cout << recursiveSum(2131, sum);
    return a.exec();
}
