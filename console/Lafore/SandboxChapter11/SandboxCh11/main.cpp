#include <QCoreApplication>
#include <iostream>
using namespace std;

class gamma                                 //объявление класса
{
private:                                    //приватные члены
    static int total;                       //статическое целочисленное поле
    int id;
public:                                     //публичные члены
    gamma()                                 //конструктор без аргументов устанавливающй значение приватного поля
    {
        total++;
        id = total;
    }
    ~gamma()                                //деструктор
    {
        total--;
        cout << "Deleted ID: " << id << endl;
    }
    static void showtotal()                 //публичный метод, отображающий содержимое приватного поля
    {
        cout << "Total: " << total << endl;
    }
    void showid()                           //публичный метод отображающий содержимое приватного поля
    {
        cout << "ID: " << id << endl;
    }

};

int gamma::total = 0;                       //инициализация приватного поля
////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    gamma g1;
    gamma::showtotal();

    gamma g2, g3;

    gamma::showtotal();
    g1.showid();
    g2.showid();
    g3.showid();
    cout << "===GAME OVER===";
////////////////////////////////////////////////////////////
    return a.exec();
}
