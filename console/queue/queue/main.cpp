#include <QCoreApplication>
#include <iostream>
using namespace std;

const int size = 100;

class customer              //клиент в очереди
{
    int value;              //значение клиента
    friend class Queue;     //декларация классовой дружбы
    customer()
    {
        //empty
    }
    ~customer()
    {
        //empty
    }
    void set(int v)
    {
        value = v;
    }
    int get()
    {
        return value;
    }
};

class Queue : customer      //класс обработки очереди
{
private:
    customer* Line[size];
    int counter;
public:
    Queue()                 //конструктор без аргументов, инициализирующий счетчик
    {
        counter = 0;
    }
    void enqueue(int val)   //публичный метод добавления в очередь
    {
        //защита от выхода за границы массива
        if(counter == size)
        {
            cout << "Queue is full";
            exit(2);
        }
        customer* current = new customer();
        current->set(val);
        Line[counter] = current;
        counter++;
    }
    void remove(int val)    //публичный метод удаления из очереди
    {
        counter--;          //уменьшение счетчика
        for(int i = val; i < counter; i++)
        {                   //сдвиг очереди
            Line[i] = Line[i + 1];
        }

    }
    int dequeue()           //публичный метод выхода из очереди
    {
        //защита от выхода за границы массива
        if(counter == 0)
        {
            cout << "queue is empty";
            exit(1);
        }
                            //сохранение выходящего значения в переменную
        int value = Line[0]->value;
        counter--;          //уменьшение счетчика
        for(int i = 0; i < counter; i++)
        {                   //сдвиг очереди
            Line[i] = Line[i + 1];
        }

        return value;
    }

    int peekLast() const
    {
        int value = Line[counter-1]->value;//сохранение последнего значения очереди в переменную
        return value;
    }
    int peekFirst() const
    {
        int value = Line[0]->value;        //сохранение первого значения очереди в переменную
        return value;
    }
    int getLine(int i) const                //сохранение проиовзольного значения очереди в переменную
    {
        int value = Line[i]->value;
        return value;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Queue custom;
    for(int i = 1; i < size; i ++)
    {
        custom.enqueue(i * 101);
    }
    cout << custom.peekLast() << endl;
    cout << custom.peekFirst() << endl;
    /*for(int i = 0; i < 10; i++)
    {
        custom.remove(0);
    }
    for (int i = 0; i < size; i++)
    {
        cout << i << ':' <<  custom.dequeue() << endl;
    }
    cout << custom.dequeue();*/

    return a.exec();
}
