#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

bool isSimple(int number)
{
    int counter = 0;
    for(int i = 2; i != number; i++)
        {
            if(number % i == 0)
            {
                counter++;
            }
        }
    return(counter == 0);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSpinBox* sb1 = new QSpinBox;
    int sig = sb1->value();

    QLabel* lbl = new QLabel();
    if(isSimple(sig))
    {
        lbl->setText("is Simple");
    }
    else
    {
        lbl->setText("is NOT simple");
    }
    QWidget window;
    QHBoxLayout* layout = new QHBoxLayout(&window);

    layout->addWidget(sb1);
    layout->addWidget(lbl);
    window.show();

    return a.exec();
}
