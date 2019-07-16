#include <QCoreApplication>
#include <iostream>
#include <algorithm>
using namespace std;

int source[] = {11, 44, 33, 11, 22, 33, 11, 22, 44};    //declaration of sample array
int pattern[] = {11, 22 ,33};                           //declaration of target array
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int* ptr;
    ptr = search(source, source+9, pattern, pattern+3); //call "search" to find if there are members of pattern array in source array
    if(ptr == source+9)                                 //displaying result
        cout << "No match" << endl;
    else
        cout << "Match at " << (ptr-source) << endl;
    return a.exec();
}
