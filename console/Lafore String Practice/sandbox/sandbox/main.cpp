#include <QCoreApplication>
#include <string>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char chararray [80];                                //объявление массива символов
    string word;                                        //объявление string

    cout << "Enter a word: ";
    cin >> word;
    int wlen = word.length();                           //вызов метода для получение длины string

    cout << "By single character: ";
    for (int i = 0;i < wlen;i++)
    {
        cout << word.at(i);                             //вызов метода для получения i элемента строки
        cout << word[i];                                //получение i элемента строки с помощью перегруженного оператора []
    }

    word.copy(chararray, wlen, 0);                      //вызов метода копирования string в массив символов
    chararray[wlen] = 0;
    cout << "\nArray contains: " << chararray << endl;
    return a.exec();
}
