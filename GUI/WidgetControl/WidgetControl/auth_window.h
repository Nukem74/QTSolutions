#ifndef AUTH_WINDOW_H
#define AUTH_WINDOW_H

#include <QWidget>
#include "reg_window.h"

namespace Ui {
class Auth_Window;
}

class Auth_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Auth_Window(QWidget *parent = nullptr);
    ~Auth_Window();
/*signals:
    void AuthClosed();*/

private slots:
    void on_registerPushButton_2_clicked();
    //void on_regWin_closed();

    void on_loginPushButton_clicked();

private:
    Ui::Auth_Window *ui;
    reg_Window ui_Reg;
};

#endif // AUTH_WINDOW_H
