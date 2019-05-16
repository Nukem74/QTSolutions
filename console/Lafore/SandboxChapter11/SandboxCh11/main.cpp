#include <QCoreApplication>
#include <iostream>
using namespace std;

class person
{
protected:
    char name[40];
public:
    void getName()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void putName()
    {
        cout << "Name: " << name << endl;
    }
    virtual void getData() = 0;
    virtual bool isOutstanding() = 0;

};

class student: public person
{
private:
    float gpa;
public:
    void getData()
    {
        person::getName();
        cout << "Graduating points average: ";
        cin >> gpa;
    }
    bool isOutstanding()
    {
        return(gpa > 3.5f) ? true : false;
    }
};

class professor: public person
{
private:
    int numPubs;
public:
    void getData()
    {
        person::getName();
        cout << "Publications number: ";
        cin >> numPubs;
    }
    bool isOutstanding()
    {
        return(numPubs > 100) ? true : false;
    }
};

////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
////////////////////////////////////////////////////////////
    //Base bad;
    person* persPTR[100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nEnter data for student(S) or professor(P): ";
        cin >> choice;
        (choice == 'S') ? persPTR[n] = new student : persPTR[n] = new professor;
        persPTR[n++]->getData();
        cout << " more data?(y/n)";
        cin >> choice;
    }
    while (choice == 'y');
    for(int i = 0; i < n; i++)
    {
        persPTR[i]->putName();
        if(persPTR[i]->isOutstanding())
            cout << "is outastanding person!";
    }
////////////////////////////////////////////////////////////
    return a.exec();
}
