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
    line[i] = word[i/2];i++;
    line[2*count - 40] = ')';
    line[2*count - 39] = word[count -19];
    line[2*count - 38] = ')';
    line[2*count - 37] = word[count -18];
    line[2*count - 36] = ')';
    line[2*count - 35] = word[count -17];
    line[2*count - 34] = ')';
    line[2*count - 33] = word[count -16];
    line[2*count - 32] = ')';
    line[2*count - 31] = word[count -15];
    line[2*count - 30] = ')';
    line[2*count - 29] = word[count -14];
    line[2*count - 28] = ')';
    line[2*count - 27] = word[count -13];
    line[2*count - 26] = ')';
    line[2*count - 25] = word[count -12];
    line[2*count - 24] = ')';
    line[2*count - 23] = word[count -11];
    line[2*count - 22] = ')';
    line[2*count - 21] = word[count -10];
    line[2*count - 20] = ')';
    line[2*count - 19] = word[count -9];
    line[2*count - 18] = ')';
    line[2*count - 17] = word[count -8];
    line[2*count - 16] = ')';
    line[2*count - 15] = word[count -7];
    line[2*count - 14] = ')';
    line[2*count - 13] = word[count -6];
    line[2*count - 12] = ')';
    line[2*count - 11] = word[count - 5];
    line[2*count - 10] = ')';
    line[2*count - 9] = word[count - 4];
    line[2*count - 8] = ')';
    line[2*count - 7] = word[count - 3];
    line[2*count - 6] = ')';
    line[2*count - 5] = word[count - 2];
    line[2*count - 4] = ')';
    line[2*count - 3] = word[count - 1];
    line[2*count -2] = ')';
    line[2*count - 1] = word[count];
    line[2*count] = ')';
    cout << line;


    return a.exec();
}
