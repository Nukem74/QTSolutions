#include <QCoreApplication>
#include <iostream>
using namespace std;


class bin
{
private:
    const static int size = 8;
    bool byte[size];
public:
    bin()
    {
        //empty
    }
    bin(int n)
    {
        if(n > 255)
        {
            for(int i = size - 1; i >= 0; i--)
            {
                byte[i] = true;
            }
        }
        else
        {
            for(int i = size - 1; i >= 0; i--)
            {
                byte[i] = false;
            }
            int j = size - 1;
            while(n != 0)
            {
                byte[j] = (n % 2 == 0) ? false : true;
                n = n / 2;
                j--;
            }
        }
    }
    void get()
    {
        for(int i = size - 1; i >= 0; i--)
        {
            cout << byte[i];
        }
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bin sample = 1;
    sample.get();
    return a.exec();
}
