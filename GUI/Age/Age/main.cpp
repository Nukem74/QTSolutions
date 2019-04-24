#include "mainwindow.h"
#include <qapplication.h>
#include <QHBoxLayout>
#include <qslider.h>
#include <qspinbox.h>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QHBoxLayout *hbox = new QHBoxLayout(0);
    hbox->setObjectName("Enter your Age");
    hbox->setMargin(6);
    hbox->setSpacing(6);
    QSpinBox *spinBox = new QSpinBox();
    QSlider *slider = new QSlider(Qt::Horizontal, hbox);


    return app.exec();
}
