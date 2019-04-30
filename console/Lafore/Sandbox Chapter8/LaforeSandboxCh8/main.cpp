#include <QCoreApplication>
#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    enum {SZ = 80};
    char str[SZ];
public:
    String()
    {
        str[0] = '\x0';
    }
    String (char s [])
    {
        strcpy (str, s);
    }
    void display() const
    {
        cout << str;
    }
    operator char*()
    {
        return str;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    String s1;
    char xstr[] = "Hooray! Hooray! It's a holy-holiday";
    s1 = xstr;
    s1.display();
    String s2 = "We are the champions!";

    cout << static_cast<char*>(s2);
    cout << endl;
    return a.exec();
}
