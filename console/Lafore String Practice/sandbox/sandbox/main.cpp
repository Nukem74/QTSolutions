#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string full_name, nickname, adress;             //объявление переменных string
    string greeting ("Hello! ");                    //инициализация string  с помощью конструктора

    cout << "State your name: ";
    getline(cin, full_name);                        //вызов метода getline для инициализации string из потока
    cout << "Your name is: " << full_name << endl;  //отображение string

    cout << "Enter your nickname: ";
    cin >> nickname;

    greeting += nickname;                           //конкатенация string оператором +=
    cout << greeting << endl;

    cout << "Enter your adress with multilines\n";
    cout << "Finish your entry with $\n";
    getline(cin, adress, '$');                      //вызов метода getline для инициализации string из потока, с явным указанием символа завершения ввода
    cout << "Your adress is :" << adress << endl;   //отображение string
    return a.exec();
}
