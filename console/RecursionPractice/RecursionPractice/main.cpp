#include <QCoreApplication>
#include <iostream>
using namespace std;

//Дана строка, содержащая цифры и английские буквы (большие и маленькие). Найти и вывести количество цифр.
int counter = 0;
int recursionNumberCounter(char word[])
{
    if((*word != '\0') && (*word > 47) && (*word < 58))
        counter++;
    if(*word != '\0')
        recursionNumberCounter(++word);
    return counter;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char line[1000];
    cin >> line;
    cout << recursionNumberCounter(line);

    return a.exec();
}
