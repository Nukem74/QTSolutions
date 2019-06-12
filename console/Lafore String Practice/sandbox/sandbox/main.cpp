#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s1 ("Fish");                     //инициализация string с помощью конструктора
    string s2 = "Meat";                     //инициализация string с помощью оператора присваивания
    string s3;                              //объявление string

    s3 = s1;                                //присвоение одной переменной string значения другой переменной
    cout << "s3 = " << s3 << endl;          //отображение переменной string

    s3 = "Ain't " + s1 + " , ain't ";       //конкатенация с применением оператора сложения
    s3 += s2;                               //конкатенация с присвоением оператора +=
    cout << "s3 = " << s3 << endl;          //отображение переменной string

    s1.swap(s2);                            //перменные string обмениваются значениями
    cout << s1 << ", not " << s2 << endl;   //отображение string
    return a.exec();
}
