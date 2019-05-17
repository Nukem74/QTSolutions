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
        cout << "Deleted ID: " << id << endl;//не отображается
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

class alpha                                 //объявление класса
{
private:                                    //приватные члены
    int data;
public:                                     //публичные члены
    alpha()                                 //конструктор без аргументов
    {

    }
    alpha(int d)                            //конструктор с одним аргументом
    {
        data = d;
    }
    alpha(alpha& a)                         //конструктор копирования
    {
        data = a.data;//в создаваемом объекте приватному полю присваивается значение приватного поля аргумента, передаваемого по ссылке
        cout << "\nCopying constructor activated";
    }
    void display()
    {
        cout << data;
    }
    /*alpha*/void operator = (alpha& a)     //перегрузка оператора присваивания
    {
        //аргумент передается оператору по ссылке, задумка в том, что так
        //не происходит копирования аргумента.
        data = a.data;
        cout << "\nAssignment operator activated";
        //return alpha(data);
        //возвращение результата путем создания временного объекта alpha и его инициализации с помощью одноаргументного конструктора
    }
};


////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    alpha a1(37);
    alpha a2;
    a2 = a1;
    cout << "\na2 = ";
    a2.display();

    //alpha a3(a1);
    alpha a3 = a2;//samesh1t
    cout << "\na3 = ";
    a3.display();
    cout << endl;

////////////////////////////////////////////////////////////
    return a.exec();
}
