#include <QCoreApplication>
#include <iostream>
#include <cstring>

using namespace std;

class part
{
private:                        //перечисление приватных членов
    char partname[30];
    int partnumber;
    double cost;
public:                         //перечисление публичных членов
    void setpart(char pname[], int pn, double c)    //метод, устанавливающий значения приватных полей, с тремя аргументами
    {
        strcpy(partname, pname);
        partnumber = pn;
        cost = c;
    }
    void showpart()             //метод без аргументов, отображающий значения приватных полей
    {
        cout << "\nName: " << partname;
        cout << ". partnumber: " << partnumber;
        cout << ". price :$" << cost;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    part part1, part2;
    part1.setpart("gear", 101, 0.11 );
    part2.setpart("lever", 399, 1);
    cout << "\nRecord #1: "; part1.showpart();
    cout << "\nRecord #2: "; part2.showpart();
    cout << endl;
    return a.exec();
}
