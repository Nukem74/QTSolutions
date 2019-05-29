#include <QCoreApplication>
#include <stdlib.h>
#include <iostream>
using namespace std;

const int size = 100;


void display(int* n)
{
    for(int i = 0; i < size; i++)
    {
        cout << i << ':' << *(n++) << endl;
    }
}

void order(int a, int b)
{
    if(a < b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
}

void quicksort(int* numbers, int left, int right)
{
    int pivot;
    int l_hold = left;
    int r_hold = right;
    pivot = numbers[left];
    while(left < right)
    {
        while((numbers[right] >= pivot) && (left < right))
            right--;
        if(left != right)
        {
            numbers[left] = numbers[right];
            left++;
        }
        while((numbers[left] <= pivot) && (left < right))
            left++;
        if(left != right)
        {
            numbers[right] = numbers[left];
            right--;
        }
    }
    numbers[left] = pivot;
    pivot = left;
    left = l_hold;
    right = r_hold;
    if(left < pivot)
        quicksort(numbers, left, pivot - 1);
    if(right > pivot)
        quicksort(numbers, pivot + 1, right);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int exmpl1[size];
    for(int i = 0; i < size; i++)
    {
        exmpl1[i] = rand() % size;
    }
    display(exmpl1);
    //printf('\n');
    cout << endl;
    quicksort(exmpl1,0,size-1);
    display(exmpl1);
    return a.exec();
}
