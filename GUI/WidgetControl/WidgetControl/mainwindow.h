#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "auth_window.h"
#include "reg_window.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();
/*public slots:
    void AuthWindowClosed();*/

private:
    Ui::MainWindow *ui_Main;

    Auth_Window ui_Auth;
};

#endif // MAINWINDOW_H
