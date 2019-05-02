#include <QCoreApplication>
#include <iostream>
#include <string>
using namespace std;

class publication
{
private:
    string _name;
    float _price;
public:
    void set(string n, int p)
    {
        _name = n;
        _price = p;
    }
    void displayName() const
    {
       cout << "\nPublication's name: ";
       cout << _name;
    }
    void displayPrice() const
    {
        cout << "\nPublication's price: ";
        cout << _price;
    }
};

class book: public publication
{
private:
    unsigned int _pages;
public:
    void set(unsigned int pg, float pr, string n)
    {
        publication::set(n, pr);
        _pages = pg;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
