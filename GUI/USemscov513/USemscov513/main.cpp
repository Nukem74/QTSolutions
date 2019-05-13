#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "mywin.h"

MyWin::MyWin(const QString& title) : QMainWindow (0)
{

    setWindowTitle(title);
    resize(200, 120);
    move(150, 100);

}

void MyWin::closeEvent(QCloseEvent *event)
{
    int r = QMessageBox::Question(this, "Confirm", "Exit?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(r == QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWin win ("My window");
    win.show();

    return a.exec();
}
