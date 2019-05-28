#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    float floatar[100];
    float* pointerFloat = floatar;
    float* sumPointer = new float();
    for(int i = 0; i < 100; i++)
    {
        *(pointerFloat++) = rand();
    }
    pointerFloat = floatar;
    for(int i = 0; i < 100; i++)
    {
        *sumPointer += *(pointerFloat++);
        cout << *pointerFloat << endl;
    }
    cout << *sumPointer / 100;
    return a.exec();
}
