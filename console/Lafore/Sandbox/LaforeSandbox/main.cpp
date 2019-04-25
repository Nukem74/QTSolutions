#include <QCoreApplication>
#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const int DAYS = 7;
    const int MAX = 12;

    char star[DAYS][MAX] =                      //объявление массива строк
    {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };
    for(int j = 0; j < DAYS; j++)
    {
        cout << star[j] << endl;                //получение доступа к строке из массива строк выглядит как получение доступа к элементу одномерного массива, для этого используется первый индекс
    }
    return a.exec();
}
