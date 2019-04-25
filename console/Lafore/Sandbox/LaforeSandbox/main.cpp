#include <QCoreApplication>
#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s1("bark");                  //инициализация строковой переменной с помощью конструктора с одним аргументом
    string s2 = "bite";                 //инициализация строковой переменной с помощью операции присваивания
    string s3;                          //объявление строковой переменной

    s3 = s1;                            //допустимое копирование строки с помощью оператора присвоения

    cout << "s3: " << s3 << endl;
    s3 = "Doesn't " + s1 + " and doesn't ";     //допустимая конкатенация строк с помощью оператора сложения
    s3 += s2;
    cout << "s3: " << s3 << endl;

    s1.swap(s2);                                //метод замены строк
    cout << s1 << " and doesn't " << s2 << endl;
    return a.exec();
}
