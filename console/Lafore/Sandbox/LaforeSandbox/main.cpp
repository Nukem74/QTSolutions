#include <QCoreApplication>
#include <iostream>

using namespace std;

class String
{
private:
    enum{SZ = 80};
    char str[SZ];
public:
    String()                        //конструктор без параметров
    {
        str[0] = '\0';
    }
    String(char s [])
    {
        strcpy (str, s);            //конструктор с одним параметром
    }
    void display()
    {
        cout << str;
    }
    void concat(String s2)
    {
        if(strlen(str) + strlen(s2.str) < SZ)
            strcat(str, s2.str);
        else {
            cout << "/nOverflow";
        }
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    String s1 ("Happy Hanooka!");
    String s2 = "mein untermensch";
    String s3;
    cout << "\ns1="; s1.display();
    cout << "\ns2="; s2.display();
    cout << "\ns3="; s3.display();

    s3 = s1;
    cout << "\ns3="; s3.display();
    s3.concat(s2);
    cout << "\ns3="; s3.display();
    cout << endl;
    return a.exec();
}
