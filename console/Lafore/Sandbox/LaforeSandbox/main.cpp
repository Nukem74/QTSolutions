#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
    private:
        int number;
        Suit suit;
    public:
        Card()
        {
            //empty
        }
        void set (int n, Suit s)
        {
            suit = s;
            number = n;
        }
        void display()
        {   /*Отображение достоинства карт,
            в том числе именованных при помощи
            оператора switch*/

            if( number >= 2 && number <= 10)
            {
                cout << number;
            }
            else
            {
                switch(number)
                {

                    case jack:
                    {
                        cout << 'J';
                        break;
                    }
                    case queen:
                    {
                        cout << 'Q';
                        break;
                    }
                    case king:
                    {
                        cout << 'K';
                        break;
                    }
                    case ace:
                    {
                        cout << 'A';
                        break;
                    }
                }
            }
            /*отображение масти карт*/
            switch(suit)
            {
                case clubs:
                {
                    cout << static_cast<char>(5);                   //применение символов ASCII по их номеру в таблице, преобразованному к типу char
                    break;
                }
                case diamonds:
                {
                    cout << static_cast<char>(4);
                    break;
                }
                case hearts:
                {
                    cout << static_cast<char>(3);
                    break;
                }
                case spades:
                {
                    cout << static_cast<char>(6);
                    break;
                }
            }
        }
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Card deck[52];                              //создание массива объектов(выглядит как объект на 52 элемента)
    int j;

    cout << endl;
    for(j = 0;j < 52; j++)
    {
        int num = (j % 13) + 2;
        Suit su = Suit(j/13);
        deck[j].set(num, su);                   //установка значений приватных полей объектов массива
    }
    cout << "Base deck: \n";
    for(j = 0; j < 52; j++)
    {
        deck[j].display();                      //отображение значений приватных полей объектов массива
        cout << "   ";
        if(!((j + 1) % 13))
        {
            cout << endl;
        }
    }
        srand(time(NULL));                      //инициализируем функцию srand системным временем
        for(j = 0; j < 52; j++)
        {
            int k = rand() % 52;                //получение случайного целого числа из диапозона от 0 до 52(остаток от деления, смотри на остаток от деления!)
            Card temp = deck[j];
            deck[j] = deck [k];
            deck[k] = temp;
        }
        cout << "Mixed deck: \n";
        for(j = 0; j < 52; j++)
        {
            deck[j].display();
            cout << "   ";
            if(!((j + 1) % 13))
            {
                cout << endl;
            }
        }

    return a.exec();
}
