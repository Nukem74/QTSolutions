#ifndef MYWIN_H
#define MYWIN_H

#include <QtGui>
#include <QMainWindow>

class MyWin : public QMainWindow
{
    Q_OBJECT
public:
    MyWin(const QString& title);
protected:
    void closeEvent(QCloseEvent * event);
};

#endif // MYWIN_H
