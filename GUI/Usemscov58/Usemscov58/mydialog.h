#ifndef MYDIALOG_H
#define MYDIALOG_H
#include <QSpinBox>
#include <QDialog>
#include <QDial>
#include <QSlider>
#include <QProgressBar>
class MyDialog : public QDialog
{
    Q_OBJECT
private:
    QSpinBox *m_sb;
    QDial *m_dial;
    QSlider *m_slider;
    QProgressBar *m_pb;

public:
    MyDialog();
};

#endif // MYDIALOG_H
