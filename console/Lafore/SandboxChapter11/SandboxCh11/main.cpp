#include <QCoreApplication>
#include <iostream>
using namespace std;

class gamma
{
private:
    static int total;
    int id;
public:
    gamma()
    {
        total++;
        id = total;
    }
    ~gamma()
    {
        total--;
        cout << "Deleted ID: " << id << endl;
    }
    static void showtotal()
    {
        cout << "Total: " << total << endl;
    }
    void showid()
    {
        cout << "ID: " << id << endl;
    }

};

int gamma::total = 0;
////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    gamma g1;
    gamma::showtotal();

    gamma g2, g3;

    gamma::showtotal();
    g1.showid();
    g2.showid();
    g3.showid();
    cout << "===GAME OVER===";
////////////////////////////////////////////////////////////
    return a.exec();
}
