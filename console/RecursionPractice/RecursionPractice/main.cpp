#include <QCoreApplication>
#include <iostream>
using namespace std;

//Дана строка, содержащая только английские буквы (большие и маленькие).
//Добавить открывающиеся и закрывающиеся скобки по следующему образцу:
//"example" -> "(e(x(a(m)p)l)e)" (До середины добавлены открывающиеся скобки, после середины – закрывающиеся.
//В случае, когда длина строки четна в скобках, расположенных в середине, должно быть 2 символа.
//("card -> (c(ar)d", но не "(c(a()r)d)").


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char word[1000] = "LItBeoFLcSGBOFQxMHoIuDDWcqcVgkcRoAeocXO";
    char line[1000];
    int count = 0;
    while(word[count] != '\0')
    {
        count++;
    }
    int i = 0;

    for(i = 0; i < count; i++)
    {
        line[i] = '(';i++;
        line[i] = word[i/2];

    }
    //cout << i;

    /*int i = 0;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;
    line[i] = '(';i++;
    line[i] = word[i/2];i++;*/
    int j = 0;
    for(j = 0; j < count + 2; j++)
    {
        line[2*count - j] = ')';j++;
        line[2*count - j] = word[count - j/2];
    }
    /*line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    //cout << word[count - j/2];
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    //cout << word[count - j/2];
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';j++;
    //cout << word[count - j/2];
    line[2*count - j] = word[count - j/2];j++;
    //cout << word[count - j/2];
    line[2*count - j] = ')';j++;
    line[2*count - j] = word[count - j/2];j++;
    line[2*count - j] = ')';*/
    cout << line;


    return a.exec();
}
