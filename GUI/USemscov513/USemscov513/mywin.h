#ifndef MYWIN_H
#define MYWIN_H

#include <QtGui>
#include <QMainWindow>

class MyWin : public QMainWindow
{
    Q_OBJECT
public:
    MyWin(const QString& title);
};

#endif // MYWIN_H
