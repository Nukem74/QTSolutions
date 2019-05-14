#include <QCoreApplication>
#include <iostream>
#include <cstring>
using namespace std;

const int LEN = 80;             //постоянные
const int MAX = 40;

class Stack                     //определение класса
{
private:                        //приватные члены
    char st [ MAX ];
    int top;
public:                         //публичные члены
    Stack()                     //конструктор без аргументов, инициализирующий приватное поле
    {
        top = 0;
    }
    void push(char var)         //публичный метод с одним аргументом
    {
        st[ ++top ]= var;       //обращение к элементу массива с предварительным инкрементом его адреса
    }
    char pop()                  //публичный метод без аргументов, возвращающий значение элемента приватного массива
    {
        return st[ top-- ];
    }
    int gettop()                //публичный метод, возвращающий значение приватного поля
    {
        return top;
    }
};

class express                   //определение класса
{
private:                        //приватные члены
    Stack s;                    //экземпляр класса
    char* pStr;                 //указатель на тип char
    int len;
public:                         //публичные члены
    express(char* ptr)          //конструктор с одним аргументом
    {
        pStr = ptr;
        len = strlen(pStr);     //присвоение переменной длины xtuj
    }
    void parse();               //прототип метода
    int solve();                //прототип метода


};

void express::parse()                                   //описание метода с помощью оператора разрешения
{
    char ch;                                            //символ из строки
    char lastval;                                       //последнее значение
    char lastop;                                        //последний оператор

    for(int i = 0; i < len; i++)                        //каждый символ в строке
    {
        ch = pStr[i];                                   //вот этот символ
        if(ch >= '0' && ch <= '9')                      //так вот, если он от 0 до 9
            s.push(ch - '0');/**/                       //мы его сохраним
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')//если нет
        {//и он - один из операторов
            if(s.gettop() == 1)                         //тогда если это первый оператор
            {
                s.push(ch);                             //помещаем его в стек
            }
            else                                        //если не первый
            {
                lastval = s.pop();                      //получаем предыдущее число
                lastop = s.pop();                       //и предыдущий к числу оператор
                if( (ch == '*' || ch == '/' ) && (lastop == '+' || lastop == '-'))
                {//если сейчас обрабатывается один из */, а предыдущий оператор был один из +-
                    s.push(lastop);                     //возвращаем в стек последний оператор
                    s.push(lastval);                    //и следующее за ним число
                }
                else                                    //иначе
                {
                    switch (lastop)                     //выбираем из операторов тот, что совпадет с содержимым обрабатываемой переменной
                    {
                            case '+':
                        {
                            s.push(s.pop() + lastval);
                            break;
                        }
                            case '-':
                        {
                            s.push(s.pop() - lastval);
                            break;
                        }
                        case '*':
                        {
                            s.push(s.pop() * lastval);
                            break;
                        }
                        case '/':
                        {
                            s.push(s.pop() / lastval);
                            break;
                        }
                            default:                    //или не совпадет, тогда
                        {
                            cout <<"\nNot an operator";
                            exit(1);                    //угробим прогу
                        }
                    }
                }
                s.push(ch);                             //и добавляем в стек
                //очень понятные комменты
            }

        }
        else
        {   //если символ не число и не оператор, тогда
            cout << "\nNot a symbol";
            exit(1);                                    //угробим прогу
        }
     }


  }
int express::solve()                                    //описание метода с помощью оператора разрешения
{//крч тут мы проводим вычисления с элементами стека, а почему мы этого не сделаем сразу с элементами строки? не могу понять что мешает
    char lastval;                                       //предыдущее значение

    while(s.gettop() > 1)                               //пока последний элемент стека больше 1
    {
        lastval = s.pop();                              //получаем предыдущее значение
        switch(s.pop())                                 //получаем предыдущий оператор
        {
                case '+':
            {
                s.push(s.pop() + lastval);
                break;
            }
                case '-':
            {
                s.push(s.pop() - lastval);
                break;
            }
            case '*':
            {
                s.push(s.pop() * lastval);
                break;
            }
            case '/':
            {
                s.push(s.pop() / lastval);
                break;
            }
                default:
            {
                cout <<"\nNot an operator";
                exit(1);
            }
        }
    }
    return int (s.pop());
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    char ans;
    char string [LEN];

    cout << "\n Enter arithmetical expression like 2+3*4/3-2";
    cout << "\n Numbers should have only one position \n Do not use space or brackets";

    do
    {
        cout << "\nExpression: ";
        cin >> string;
        express* eptr = new express(string);
        eptr->parse();
        cout << "\nResult: "<< eptr->solve();
        delete eptr;
        cout << "another one?(y/n)";
        cin >> ans;
    }
    while(ans == 'y');
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}

