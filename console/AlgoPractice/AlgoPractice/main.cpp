#include <QCoreApplication>
#include <iostream>
using namespace std;
int sample[] = {15, 9, 8, 1, 4, 11, 7, 12, 13, 6, 5, 3, 16, 2, 10, 14};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int j;

    for(j = 1; j < 15; j++)
    {
        int i = j - 1;
        while(i >= 0 && (sample[i] > sample[j]))
        {
            sample[i+1] = sample[i];
            i--;
        }
        sample[i + 1] = sample[j];
    }
    for(int i = 0; i < 16; i++)
        cout << sample[i] << endl;
    return a.exec();
}
