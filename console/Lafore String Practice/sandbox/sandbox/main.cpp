#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s1 = "Lumpy Evergreen Tree Garden";      //инициализация string с помощью оператора присваивания
    int n;

    n = s1.find("Tree");                            //вызов метода нахождения компонента в строке, результат - позиция найденного компонента, -1 если не найдено
    cout << "Found a good Tree at: " << n << endl;

    n = s1.find_first_of("zix");                    //вызов метода нахождения символа из строки, результат - позиция первого найденного, -1 если не найдено
    cout << "First of Birchnut: " << n << endl;

    n = s1.find_last_not_of(" LumpyEvergnTGad");    //вызов метода нахождения символа не входящего в строку, результат - позиция первого найденного символа не из строки, -1 если ничего не найдено
    cout << "first out of : " << n << endl;
    return a.exec();
}
