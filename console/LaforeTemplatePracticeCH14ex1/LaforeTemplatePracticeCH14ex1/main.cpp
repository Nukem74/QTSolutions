#include <QCoreApplication>
#include <iostream>
using namespace std;

//samples
int sample1[] = {0, -11, 22, -33, 44};
float sample2[] = {0, -1.21f, 3.14, -2e-3, 3.101e4};
double sample3[] = {-50.0, -80.0, -113.0, -75.0, -0.232};

template <class notype>
notype total(notype* arr, const int size)
{
    if(size > 0)
    {
        notype result = 0;
        for(int i = 0; i < size; ++i)
        {
            result += arr[i];
        }
        return result / size;
    }
    else
        cout << "wrong size, won't fit";
}

/*template <class notype>
void typetest1()
{
    notype test1[5] = absolute(sample1,5);
    for(int i = 0; i < 5; ++i)
    {
        cout << sizeof(test1[i]);
        if(test1[i] < 0)
            cout << "function failed at sample1: " << i << " element" << endl;
    }
    notype test2[5] = absolute(sample2,5);
    for(int i = 0; i < 5; ++i)
    {
        cout << sizeof(test2[i]);
        if(test2[i] < 0)
            cout << "function failed at sample2: " << i << " element" << endl;
    }
    notype test3[5] = absolute(sample3,5);
    for(int i = 0; i < 5; ++i)
    {
        cout << sizeof(test3[i]);
        if(test3[i] < 0)
            cout << "function failed at sample2: " << i << " element" << endl;
    }
}*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << total<int>(sample1, 5) << endl;
    cout << total<float>(sample2, 5) << endl;
    cout << total<double>(sample3, 5) << endl;
    return a.exec();
}
