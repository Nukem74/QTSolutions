#include <QCoreApplication>
#include <iostream>
using namespace std;

const int MAX = 80;

int result = 0;
void recursiveCopy(char *A, char *B)
{
    if(*A != '\0')
    {
        *B = *A;
        recursiveCopy(A++, B++);                //должно работать, все же супер
    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char word1 [MAX];
    char word2 [] = "Tiny Lumpy Evergreen Froze Among The Trees";
    recursiveCopy(word2, word1);

    cout << endl << word2;




    return a.exec();
}
