#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <cassert>
using namespace std;
template<typename T>
class Queue
{
private:
    T *queuePtr;     // указатель на очередь
    const int size;  // максимальное количество элементов в очереди
    int begin,       // начало очереди
        end;         // конец очереди
    int elemCT;      // счетчик элементов
public:
    Queue(int =10);          // конструктор по умолчанию
    Queue(const Queue<T> &); // конструктор копирования
    ~Queue();                // деструктор

    void enqueue(const T &); // добавить элемент в очередь
    T dequeue(); // удалить элемент из очереди
    void printQueue();
};

// реализация методов шаблона класса Queue

// конструктор по умолчанию
template<typename T>
Queue<T>::Queue(int sizeQueue) :
    size(sizeQueue), // инициализация константы
    begin(0), end(0), elemCT(0)
{
    // дополнительная позици поможет нам различать конец и начало очереди
    queuePtr = new T[size + 1];
}

// конструктор копии
template<typename T>
Queue<T>::Queue(const Queue &otherQueue) :
    size(otherQueue.size) , begin(otherQueue.begin),
    end(otherQueue.end), elemCT(otherQueue.elemCT),
    queuePtr(new T[size + 1])
{
    for (int ix = 0; ix < size; ix++)
        queuePtr[ix] = otherQueue.queuePtr[ix]; // копируем очередь
}

// деструктор класса Queue
template<typename T>
Queue<T>::~Queue()
{
    delete [] queuePtr;
}

// функция добавления элемента в очередь
template<typename T>
void Queue<T>::enqueue(const T &newElem)
{
    // проверяем, ести ли свободное место в очереди
    assert( elemCT < size );

    // обратите внимание на то, что очередь начинает заполняться с 0 индекса
    queuePtr[end++] = newElem;

    elemCT++;

    // проверка кругового заполнения очереди
    if (end > size)
        end -= size + 1; // возвращаем end на начало очереди
}

// функция удаления элемента из очереди
template<typename T>
T Queue<T>::dequeue()
{
    // проверяем, есть ли в очереди элементы
    assert( elemCT > 0 );

    T returnValue = queuePtr[begin++];
    elemCT--;

    // проверка кругового заполнения очереди
    if (begin > size)
        begin -= size + 1; // возвращаем begin на начало очереди

    return returnValue;
}

template<typename T>
void Queue<T>::printQueue()
{
    cout << "Queue: ";

    if (end == 0 && begin == 0)
        cout << " empty\n";
    else
    {
        for (int ix = end; ix >= begin; ix--)
            cout << queuePtr[ix] << " ";
        cout << endl;
    }
}

#endif // QUEUE_H

