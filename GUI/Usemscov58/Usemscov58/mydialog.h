#ifndef MYDIALOG_H
#define MYDIALOG_H
#include <QSpinBox>
#include <QDialog>
#include <QDial>
#include <QSlider>
#include <QProgressBar>
class MyDialog : public QDialog         //объявление класса, наследующего от QDialog
{
    Q_OBJECT                            //макрос обеспечивающий работу служб QT
private:                                //перечисление приватных членов
    QSpinBox *m_sb;
    QDial *m_dial;
    QSlider *m_slider;
    QProgressBar *m_pb;

public:                                 //перечисление публичных членов
    MyDialog();
};

#endif // MYDIALOG_H
