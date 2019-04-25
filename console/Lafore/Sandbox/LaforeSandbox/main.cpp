#include <QCoreApplication>
#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s1 = "Theory of evolution is a new religion, same as the theory of universe genesis";
    int n;
    n =s1.find("Theory");                   //поиск под строки в строке
    cout << "Theory found: " << n << endl;

    n = s1.find_first_of("Creation");       //поиск символов из набора в строке
    cout << "First reference to creation: " << n << endl;

    n = s1.find_last_not_of("abcdeABCDE");  //поиск символов не входящих в набор
    cout << "First reference out of :" << n << endl;
    //все требует уточнения
    return a.exec();
}
