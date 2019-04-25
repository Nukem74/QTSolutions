#include "mainwindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QLabel>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget win;
    QGridLayout* layout = new QGridLayout(&win);

    QLabel* label1 = new QLabel("One");
    QLabel* label2 = new QLabel("Two");
    QLabel* label3 = new QLabel("Three");
    QLabel* label4 = new QLabel("Four");

    layout->addWidget(label1, 0, 0, Qt::AlignCenter);
    layout->addWidget(label2, 0, 1, Qt::AlignCenter);
    layout->addWidget(label3, 1, 0, Qt::AlignCenter);
    layout->addWidget(label4, 1, 1, Qt::AlignCenter);
    win.setLayout(layout);
    win.show();
    return a.exec();
}
