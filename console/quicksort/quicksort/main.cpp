#include <QCoreApplication>
#include <stdlib.h>
#include <iostream>
using namespace std;

const int size = 100000;


void display(int* n)
{
    for(int i = 0; i < size; i++)
    {
        cout << i << ':' << *(n++) << endl;
    }
}

void quicksort(int* numbers, int left, int right)
{
    int pivot;                  //разрешающий элемент
    int l_hold = left;          //индекс левой границы выборки, left - левая оперируемая граница
    int r_hold = right;         //индекс правой границы выборки, right - правая оперируемая граница
    pivot = numbers[left];      //присваиваем разрешающиему элементу значение крайнего левого элемента массива
    while(left < right)         //пока левая граница не пересекла правую(индекс левой границы не превысил индекс правой границы)
    {
        while((numbers[right] >= pivot) && (left < right))
            //перебираем массив справа на лево в поисках элемента меньшего чем разрешающий,
            //пока левая граница не пересекла правую
            right--;
        if(left != right)//если границы не совпадают
        {   //присваиваем левому оперируемому элементу значение правого оперируемого элемента
            //и выбираем следующий элемент слева
            numbers[left] = numbers[right];
            left++;
        }
        while((numbers[left] <= pivot) && (left < right))
            //перебираем массив слева на право в поисках элемента большего чем разрешающий,
            //пока правая граница не пересекла левую
            left++;
        if(left != right)
        {
            //присваиваем правому оперируемому элементу значение левого оперируемого элемента
            //и выбираем следующий элемент справа
            numbers[right] = numbers[left];
            right--;
        }
    }
    numbers[left] = pivot;  //когда границы сойдутся на некотором индексе выборки - записываем в элемент с этим индексом
                            //значение разрешающего элемента
                            //итерация закончена именно здесь
                            //подготовка к следующей итерации
    pivot = left;           //сохраняем в переменную разрешающего элемента позицию индекса, на котором сошлись границы(наверно можно выделить для этого отдельную переменную)
    left = l_hold;          //сохраняем в переменную левой оперируемой границы индекс левой границы выборки
    right = r_hold;         //сохраняем в переменную правой оперируемой границы индекс правой границы выборки
    if(left < pivot)
    //если индекс левой оперируемой границы меньше индекса схождения границ
    //вызываем функцию сортировки выборки относительно индекса левой границы выборки и индекса схождения границ
        quicksort(numbers, left, pivot - 1);
    if(right > pivot)
    //если индекс правой оперируемой границы больше индекса схождения границ
    //вызываем функцию сортировки выборки относительно индекса схождения границ и индекса правой границы выборки
        quicksort(numbers, pivot + 1, right);
}

void inclusionSort(int* num)
{
    for (int i = 1;i < size; i++)   //цикл, совершающий число шагов равное размеру выборки
    {
        int value = num[i];         //запоминаем значение сравниваемого элемента выборки
        int index = i;              //запоминаем индекс сравниваемого элемента выборки
        while((index > 0) && (num[index-1] > value))
        {//пока индекс превышает 0 и значение предыдущего элемента выборки больше сравниваеого элемента выборки
         //записываем в ячейку оперируемого элемента выборки значение ячейки предыдущего опериуремому элементу выборки
         //уменьшаем индекс оперируемого элемента выборки
            num[index] = num[index - 1];
            index--;
        }
        //присваиваем оперируемому элементу выборки значение сравниваемого элемента выборки
        num[index] = value;
    }
}

void selectionSort(int *num)
{
    int min, temp;
    for(int i = 0; i < size - 1; i++)
    {
        min = i;                            //запоминаем индекс сравниваемого элемента выборки
        for(int j = i + 1; j < size; j++)   //сравниваем все последующие элементы выборки
        {//если оперируемый элемент меньше сравниваемого
         //переписываем содержимое переменной minя оперируемым элементом
            if(num[j] < num[min])
                min = j;
        }
        temp = num[i];                      //меняем значения сравниваемого и минимального элементов выборки
        num[i] = num[min];
        num[min] = temp;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char wait;
    unsigned int time1, time2;
    //exmpl1
    {
        int exmpl1[size];
        for(int i = 0; i < size; i++)
        {
            exmpl1[i] = rand() % size;
        }
        cout << "First selection: " << endl;
        //display(exmpl1);
        //printf('\n');
        cout << endl;
        time1 = clock();
        quicksort(exmpl1,0,size-1);
        time2 = clock();
        cout << "Sorted with QuickSort in " << time2 - time1 << "ms" <<  endl;
        //display(exmpl1);
    }
    cin >> wait;
    //exmpl2
    {
        int exmpl2[size];
        for(int i = 0; i < size; i++)
        {
            exmpl2[i] = rand() % size;
        }
        cout << "Second selection: " << endl;
        //display(exmpl2);
        time1 = clock();
        inclusionSort(exmpl2);
        time2 = clock();
        cout << "Sorted with InclusionSort in " << time2 - time1 << "ms" << endl;
        //display(exmpl2);


    }
    cin >> wait;
    //exmpl3
    {
        int exmpl3[size];
        for(int i = 0; i < size; i++)
        {
            exmpl3[i] = rand() % size;
        }
        cout << "Third selection:" << endl;
        //display(exmpl3);
        time1 = clock();
        selectionSort(exmpl3);
        time2 = clock();
        cout << "Sorted with SelectionSort in " << time2 - time1 << "ms" << endl;

        //display(exmpl3);

    }
    cin >> wait;
    /*exmpl4;
    {
        int exmpl4[size];
        for(int i = 0; i < size; i++)
        {
            exmpl4[i] = rand() % size;
        }
        cout << "Third selection:" << endl;
        display(exmpl4);
        cout << "Sorted with std:sort" << endl;
        sort(exmpl4[0],exmpl4[99]);
        display(exmpl4);
    }
    cin >> wait;
    /*exmpl5;
    {
        int exmpl5[size];
        for(int i = 0; i < size; i++)
        {
            exmpl5[i] = rand() % size;
        }
        cout << "Third selection:" << endl;
        display(exmpl5);
        cout << "Sorted with std:sort" << endl;
        stable_sort()
        display(exmpl5);
    }*/
    return a.exec();
}
