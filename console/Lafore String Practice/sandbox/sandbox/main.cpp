#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string aName = "Ivan";                          //инициализация string с помощью оператора =
    string userName;                                //объявление

    cout << "Enter your name: ";
    getline(cin, userName);                         //вызов метода getline для инициализации string из потока ввода
    if(userName == aName)                           //сравнение string
        cout << "Hello, Ivan";
    else if (userName < aName)                      //сравнение string
        cout << "Your name lesser than Ivan\n";
    else if (userName > aName)                      //сравнение string
        cout << "Your name much more than Ivan\n";

    int n = userName.compare(0, 2, aName, 0 , 2);   //вызов метода сложного сравнения. Первый аргумент - начальная позиция объекта, второй - количество сравниваемых символов, третий - объект сравнения, четвертый - начальный позиция объекта сравнения, пятый - количество сравниваемых символов
    cout << "first two letters of your name: ";
    if (n == 0)
        cout << "equal";
    else if (n < 0)
        cout << "goes after ";
    else
        cout << "goes before ";
    cout << aName.substr(0,2) << endl;              //вызов метода возвращающего подстроку от строки, для которой метод был вызван. первый аргумент - начальная позиция фрагмента, второй - длина фрагмента
    return a.exec();
}
