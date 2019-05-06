#include "mycheckbox.h"
#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec :: codecForName("CP1251");
    QTextCodec::setCodecForLocale(codec);

    MyCheckBox chb(QObject::tr("Необычный чекбокс"));
    chb.show();

    return a.exec();
}
