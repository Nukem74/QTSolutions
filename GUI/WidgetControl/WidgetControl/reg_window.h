#ifndef REG_WINDOW_H
#define REG_WINDOW_H

#include <QWidget>

namespace Ui {
class reg_Window;
}

class reg_Window : public QWidget
{
    Q_OBJECT

public:
    explicit reg_Window(QWidget *parent = nullptr);
    ~reg_Window();

private slots:
    void on_registerPushButton_clicked();

private:
    Ui::reg_Window *ui;

//signals:
  //  void regClosed();
};

#endif // REG_WINDOW_H
