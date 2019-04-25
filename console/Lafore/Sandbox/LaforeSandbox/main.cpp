#include <QCoreApplication>
#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s1("Let it go and calm down, since everyone's fine with it");
    string s2("Fight");
    string s3("hate");

    s1.erase(0, 8);                         //удалить фрагмент из строки начинающий на позиции 0 и имеющий длину 8 символов
    s1.replace(s1.find("fine"), 9, s3);     //заменить фрагмент в строке, позиция которого вычислена с помощью метода find, длинной 9 символов на значение переменной s3
    s1.insert(0, s2);                       //вставить фрагмент в позицию 0б значение которого хранится в s2
    s1.erase(s1.find("calm down"), 9);      //стереть фрагмент на позиции определенной с помощью метода find длинной 8 символов
    s1.append(3, '!');                      //добавить в конце строки символ ! в количестве 3 штук

    int x = s1.find(' ');
    while(x < sizeof (s1))
    {
        s1.replace(x, 1, "/");              //заменить пробелы на левый слэш
        x = s1.find(' ');
    }
    cout << "s1: " << s1 << endl;
    return a.exec();
}
