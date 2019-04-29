//перегрузка оператора []
//подготовка класса safearray
#include <QCoreApplication>
#include <iostream>
#include <process.h>
using namespace std;

const int LIMIT = 100;                      //максимальный размер массива

class safearray
{
private:                                    //приватное поле, содержащее целочисленный массив максимального размера
    int arr[LIMIT];
public:
    void putel(int n, int elvalue)          //публичный метод с двумя аргументами и изменяющий значения элементов приватного массива
    {
        if(n < 0 || n >= LIMIT)
        {
            {
                cout << "\nWrong index!";
                exit(1);
            }

        }
        arr[n] = elvalue;
    }
    int getel(int n)const                   //публичный метод с одним аргументом возвращающий значение элемента приватного массива по его номеру
    {
        if(n < 0 || n >= LIMIT)
        {
            {
                cout << "\nWrong index!";
                exit(1);
            }

        }
        return arr[n];
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    safearray sal;                      //инициализация массива
    for(int i = 0; i < LIMIT; i++)
    {
        sal.putel(i, i * 10);           //заполнение массива
    }
    for (int i = 0; i < LIMIT;i++)
    {
        int temp = sal.getel(i);
        cout << "Element " << i << "is" << temp << endl;        //отображение массива
    }
    return a.exec();
}
