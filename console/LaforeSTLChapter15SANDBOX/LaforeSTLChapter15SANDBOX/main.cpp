#include <QCoreApplication>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//samples
char* names[] = {"Sirgay" , "Thatyana", "He-lena", "Dmitriy", "Michaelis", "Khuilo"};
//comparing function for C-style function
bool alpha_comp(char* s1, char* s2)
{
    return(strcmp(s1,s2) < 0) ? true : false;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sort(names, names + 6, alpha_comp); //call "sort" to order sample array

    for(int j = 0; j < 6; j++)
        cout << names[j] << endl;       //displaying
    return a.exec();
}


