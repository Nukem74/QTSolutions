#include "mainwindow.h"
#include <QApplication>
#include "reg_window.h"
#include "auth_window.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.display();

    return a.exec();
}
