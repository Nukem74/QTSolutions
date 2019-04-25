#include <QCoreApplication>
#include <iostream>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string full_name, nickname, address;
    string greeting ("Hello. ");

    cout << "Enter your name: ";
    getline(cin, full_name);
    cout << "\nYour name is: " << full_name << endl;
    cout << "Enter your nickname: ";
    cin >> nickname;

    greeting += nickname;
    cout << greeting << endl;

    cout << "Enter your address with multiple lines\n";
    cout << "Finish your entry with $\n";
    getline(cin, address, '$');
    cout << "Your address: " << address;
    return a.exec();
}
