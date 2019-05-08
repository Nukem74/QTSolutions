#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

class Distance                                      //объявление класса
{
private:                                            //перечисление приватных членов
    int feet;
    float inches;
public:                                             //перечисление публичных членов
    void getdist()                                  //публичный метод изменяющий значения приватных полей
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inches;
    }
    void showdist()                                 //публичный метод отображающий значение приватных полей
    {
        cout << feet << "\'-" << inches << '\"';
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Distance& dist = *(new Distance);
    /*
    Сложное колдунство
    new Distance возвращает указатель на блок памяти, достаточный для размещения Distance
    *(new Distance) - разыменование указателя
    Distance& dist - используем ссылку (на что? на объект dist? на класс Distance? кажется, что на объект, но я не уверен)
    */
    dist.getdist();
    dist.showdist();
    /*
     * Колдунство позволяет вызывать методы класса без разыменования
    */
    return a.exec();
}

