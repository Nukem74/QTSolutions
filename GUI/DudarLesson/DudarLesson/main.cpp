#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QDebug>

extern QString* str;

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
