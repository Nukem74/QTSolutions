#include <QCoreApplication>
#include <iostream>
#include <process.h>
using namespace std;

const int LEN = 80;
enum period {hourly, weekly, monthly};

class student                                   //объявление класса
{
private:                                        //перечисление приватных членов
    char school[LEN];
    char degree[LEN];
public:
    void getedu()                               //перечисление публичных членов
    {
        cout << "State school: ";
        cin >> school;
        cout << "Designate degree: ";
        cin >> degree;
    }
    void putedu () const
    {
        cout << "\n Graduated from " << school;
        cout << " with " << degree << " degree";
    }
};

class employee                                  //объявление класса
{
private:                                        //перечисление приватных членов
    char name[LEN];
    unsigned long number;
public:                                         //перечисление публичных членов
    void getdata()
    {
        cout << "\n State second name: ";
        cin >> name;
        cout << "\n State ID: ";
        cin >> number;
    }
    void putdata ()const
    {
        cout << "\n Second name: " << name;
        cout << "\nID: " << number;
    }
};

class employee2: public employee
{
private:
    double compensation;
    char temp;
    period per;
public:
    void getdata()
    {
        employee::getdata();
        cout << "\nDesignate compensation: ";
        cin >> compensation;
        cout << "\nSelect period(h/w/m): ";
        cin >> temp;
        switch(temp)
        {
            case 'h':

            {
                cout << "\nYou selected hourly compensation.";
                per = hourly;
                break;
            }
            case 'w':
            {
                cout << "\nYou seelcted weekly compensation.";
                per = weekly;
                break;
            }
            case 'm':
            {
                cout << "\nYou selected monthly compensation.";
                per = monthly;
                break;
            }
            default:
            {
                cout << "\nWrong entry, monthly compensation selected ";
                per = monthly;
                break;
            }
        }
    }
    void putdata()const
    {
        employee::putdata();
        cout << "/nAmount of compensation: " << compensation << " per ";
        switch (per)
        {
                case 0 :
                {
                    cout << " hour";
                    break;
                }
                case 1:
                {
                    cout << " week";
                    break;
                }
                case 2:
                {
                    cout << " month";
                    break;
                }
        }
    }
};

class manager          //объявление класса включающего объекты других классов
{
private:                                        //перечисление приватных членов
    char title[LEN];
    double dues;
    employee2 emp;
    student stu;
public:
    void getdata()                              //перегрузка метода базового класса
    {
        cout << "\nManagement staff";
        emp.getdata();
        stu.getedu();
        //employee::getdata();
        //student::getedu();
        cout << "\n State title: ";
        cin >> title;
        cout << "\n Designate dues: ";
        cin >> dues;
    }
    void putdata()const                         //перегрузка метода базового класса
    {
        emp.putdata();
        stu.putedu();
        //employee::putdata();
        //student::putedu();
        cout << "\n Title: " << title;
        cout << "\n Golf-club dues paid: " << dues;
    }

};
class scientist              //объявление класса включающего объекты других классов
{
private:                                        //перечисление приватных членов
    int pubs;
    employee2 emp;
    student stu;
public:                                         //перечисление публичных членов
    void getdata()                              //перегрузка метода базового класса
    {
        cout << "\nDeveloping staff";
        emp.getdata();
        stu.getedu();
        //employee::getdata();
        //student::getedu();
        cout << "\n Designate publications index: ";
        cin >> pubs;
    }
    void putdata()const                         //перегрузка метода базового класса
    {
        emp.putdata();
        stu.putedu();
        //employee::putdata();
        //student::putedu();
        cout << "\n Publications index: " << pubs;
    }
};

class laborer                  //объявление класса-наследника с доступом к публичным членам предка
{
private:
    employee2 emp;
public:                                         //перечисление публичных членов
    void getdata()                              //перегрузка метода базового класса
    {
        cout << "\nCOMRADE";
        emp.getdata();
        //employee::getdata();
    }
    void putdata()const
    {
        emp.putdata();
    }
};

class foreman: public laborer                   //объявление класса-наследника второго порядка с доступом к публичным членам предка
{
private:
    float quotas;
public:
    void getdata()
    {

        laborer::getdata();
        cout << " FOREMAN";
        cout << "/nDesignate quote: ";
        cin >> quotas;
    }
    void putdata() const
    {
        laborer::putdata();
        cout << "\n Quote: ";
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    manager m1, m2;
    scientist s1;
    //laborer l1;
    //foreman f1;

    m1.getdata();
    //m2.getdata();
    //s1.getdata();
    //l1.getdata();
    //f1.getdata();
    m1.putdata();
    //m2.putdata();
    //f1.putdata();
    //l1.putdata();
    //s1.putdata();
    return a.exec();
}
