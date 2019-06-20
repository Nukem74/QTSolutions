#include <QCoreApplication>
#include <iostream>

using namespace std;
enum error {MISSTYPE = 101};
double hypotenuse(const double &a,const double &b)
{
    if((typeid (double) == typeid (a)) && (typeid (double) == typeid (b)))
        return (static_cast<double>(a*a + b*b));
    else
    {
        return MISSTYPE;
    }
}


void test_hypotenuse()
{
    cout << "\ntesting input: " << endl;
    if(hypotenuse('a', 'b') == 101)
        cout << "correct";
    else
        cout << "incorrect";
    cout << "\ntesting integer input: " << endl;
    int s = 5;
    if(hypotenuse(s, 14.1) == 101)
        cout << "correct";
    else
        cout << "incorrect";
    cout << "\ntesting range overflow:" << endl;
    cout << hypotenuse(3e309,2.7e310) << endl;
    cout << hypotenuse(3e39,2.7e31) << endl;
    cout << hypotenuse(3e9,2.7e3) << endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test_hypotenuse();
    return a.exec();
}
