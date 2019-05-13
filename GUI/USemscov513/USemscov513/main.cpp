#include "mainwindow.h"
#include <QApplication>
#include "mywin.h"

MyWin::MyWin(const QString& title) : QMainWindow (0)
{

    setWindowTitle(title);
    resize(200, 120);
    move(150, 100);

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWin win ("My window");
    win.show();

    return a.exec();
}
