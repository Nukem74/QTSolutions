#include <QCoreApplication>
#include <iostream>
using namespace std;

//Дана строка, содержащая только английские буквы (большие и маленькие).
//Добавить символ '*' (звездочка) между буквами (перед первой буквой и после последней символ '*' добавлять не нужно).
char* recursionDelimiter(char input[], char output[])
{
    *output = *input;

    if(*(++input) != '\0')
    {
        *(++output) = '*';
        recursionDelimiter(input,++output);
    }

    return output;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char line[1000];
    char word[1000];
    cin >> line;
    recursionDelimiter(line, word);
    for(int i = 0; word[i] != '\0'; i++)
        cout << word[i];

    return a.exec();
}
