#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <ctime>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w[10];
    for (int i = 0;i < 10;i++)
    {
        w[i].show();

        w[i].close();
    }


    return a.exec();
}
