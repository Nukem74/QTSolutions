#include "mainwindow.h"
#include <QApplication>
#include <QQueue>
#include <QMap>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QQueue<QString> que;
    QMultiMap<QString, QString> map;


    MainWindow w;
    w.show();

    return a.exec();
}
