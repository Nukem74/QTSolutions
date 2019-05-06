#include <QWidget>
#include <QVBoxLayout>
#include "mydialog.h"

const int MAXVAL = 99;
const int MINVAL = 0;

MyDialog::MyDialog():QDialog()              //что это, ЮРА?! это конструктор? с доступом к классу MyDiaolog? Наследующий от класса QDialog?
                                            //Я сам не знаю, только догадываюсь, так что лучше бы ты рассказал
{
    m_sb = new QSpinBox(this);
    m_sb->setRange(MINVAL, MAXVAL);

    m_dial = new QDial(this);
    m_dial->setRange(MINVAL, MAXVAL);
    m_dial->setNotchesVisible(true);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setRange(MINVAL, MAXVAL);
    m_slider->setTickInterval(10);
    m_slider->setTickPosition(QSlider::TicksAbove);

    m_pb = new QProgressBar(this);
    m_pb->setRange(MINVAL, MAXVAL);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(m_sb);
    layout->addWidget(m_dial);
    layout->addWidget(m_slider);
    layout->addWidget(m_pb);
    setLayout(layout);

    connect(m_sb,SIGNAL(valueChanged(int)),m_dial,SLOT(setValue(int)));
    connect(m_sb,SIGNAL(valueChanged(int)),m_slider,SLOT(setValue(int)));
    connect(m_sb,SIGNAL(valueChanged(int)),m_pb,SLOT(setValue(int)));

    connect(m_dial,SIGNAL(valueChanged(int)),m_sb,SLOT(setValue(int)));
    connect(m_dial,SIGNAL(valueChanged(int)),m_slider,SLOT(setValue(int)));
    connect(m_dial,SIGNAL(valueChanged(int)),m_pb,SLOT(setValue(int)));

    connect(m_slider,SIGNAL(valueChanged(int)),m_sb,SLOT(setValue(int)));
    connect(m_slider,SIGNAL(valueChanged(int)),m_dial,SLOT(setValue(int)));
    connect(m_slider,SIGNAL(valueChanged(int)),m_pb,SLOT(setValue(int)));
}
