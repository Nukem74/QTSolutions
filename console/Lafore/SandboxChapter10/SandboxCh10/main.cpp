#include <QCoreApplication>
#include <iostream>
using namespace std;

const int MAX = 5;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    void centimize(double*);
    double varray[MAX] = {10.0, 43.1 , 95.9, 58.7, 87.3};
    centimize(varray);                  //имя массива - адресс, поэтому не нужно использовать операцию & взятия адреса
    for(int j = 0; j < MAX; j++)
        cout << "varray [ " << j << " ] = " << varray[j] << "centimeters" << endl;
    return a.exec();
}

void centimize(double *ptrd)            //функция с одним аргументом - указателем на тип double
{
    for (int i = 0; i < MAX; i ++)
    {   //унарные операторы обладают правой ассоциативностью
        //то есть сначала выполняется инкремент
        //а затем разыменование(обращение по адресу)
        //лучше я не буду использовать такие конструкции...
        *ptrd++ *= 2.54;                //присвоить адресу, приращенному на величину типа double, значение элемента массива домноженное на константу
    }
}
