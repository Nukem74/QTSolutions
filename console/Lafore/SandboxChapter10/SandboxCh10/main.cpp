#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int intarray [5] = {31, 54, 77, 52, 93};
    /*
    for(int j = 0; j < 5; j++)
        cout << intarray[j] << endl;        //получить значение j элемента массива
    */
    for (int j = 0; j < 5; j++)
    {
        cout <<*(intarray + j) << endl;     //получить значение хранящееся по адресу массива с добавочным j, равным памяти выдяляемой под данный тип
    }
    return a.exec();
}
