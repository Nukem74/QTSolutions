#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow mw;
    mw.setWindowTitle("Hello from QT4");
    mw.resize(400, 300);
    mw.show();

    return a.exec();
}
