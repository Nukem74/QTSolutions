#include <QCoreApplication>
#include <iostream>

using namespace std;

class Counter
{
private:
    unsigned int count;
public:
    Counter():count(0)
    {
        //empty
    }
    Counter(int c) : count (c)
    {
        //empty
    }
    unsigned int get_count()
    {
        return count;
    }
    Counter operator ++()                  //ключевое слово оператор позволяет перегрузить(что бы вы думали?) стандартные операторы С++
    {
        return Counter(++count);              //реализация создания копии объекта
        /*Counter temp;
        temp.count = count;
        return temp;*/
    }
    Counter operator ++(int)                    //указанный в скобках тип данных нужен для обозначения постфиксной операции
    {
        return Counter(count++);
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Counter c1, c2;
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();

    ++c1;
    /*++c2;
    ++c2;*/
    c2 = ++c1;

    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    c2 = c1++;                              //Важно! Значение C1 увеличивается, но переменной С2 присваивается значение переменной С1 до её увеличения
    cout << "\nc1 = " << c1.get_count();
    cout << "\nc2 = " << c2.get_count();
    return a.exec();
}
