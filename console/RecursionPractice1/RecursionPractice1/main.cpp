#include <QCoreApplication>
#include <iostream>
using namespace std;
int result = 0;
int recursiveSum(int number)
{
    result += number % 10;
    //cout << result << endl;
    if(number > 0)
    {
        recursiveSum(number / 10);
    }
    //cout << result << endl;
    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << recursiveSum(2131);
    return a.exec();
}
