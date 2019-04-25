#include <QCoreApplication>
#include <iostream>
#include <cstring>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char str1[] = "Soft kitty, warm kitty - little ball of fur";
    const int MAX = 80;
    char str2 [MAX];
    int j;
    for(j = 0; j < strlen(str1);j++)                //strlen возвращает длину строки
    {
        str2[j] = str1 [j];
    }
    str2[10] = '\0';                                // '\0' устанавливает символ окончания строки
    cout << str2 << endl;
    return a.exec();
}
