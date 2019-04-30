#include <QCoreApplication>
#include <iostream>
using namespace std;
class Counter
{
protected:
    unsigned int count;
public:
    Counter(): count(0)
    {
        //empty
    }
    Counter(int c) : count (c)
    {
        //empty
    }
    unsigned int get_count() const
    {
        return count;
    }
    Counter operator++ ()
    {
        return Counter (++count);
    }
};

class CountDn: public Counter           //определение класса-наследника с указанием предка
{
public:
    Counter operator--()
    {
        return Counter( --count);
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    CountDn c1;
    cout << "\n c1=" << c1.get_count() << endl;
    ++c1;
    ++c1;
    ++c1;
    cout << "\n c1=" << c1.get_count() <<  endl;
    --c1;
    --c1;
    cout << "\n c1=" << c1.get_count() <<  endl;
    return a.exec();
}
