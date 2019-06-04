#include <QCoreApplication>
#include <iostream>
using namespace std;
int counter = 0;int index = 1;
void recursiveCounter(int num)
{
    if(num % index == 0)
    {
        counter++;
    }
    index++;
    if(index != num)
    {
        recursiveCounter(num);
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int number;
    cout << "Set a number";
    cin >> number;
    recursiveCounter(number);
    cout << counter << endl;
    counter = 0;
    for(int i = 1; i != number; i++)
    {
        if(number % i == 0)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return a.exec();
}
