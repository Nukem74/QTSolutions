#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForLocale(codec);                       //не совпадает с примером Usemskov41

    QLabel label (QObject::tr(
                      "<font size=\"+3 \" color =\"#103060\"><center>"
            "   Hello <b>Qt</b>!<br />"
            "   Привет, <b>Qt</b>!"
            "</center></font>"));
    label.resize(200,100);
    label.setWindowTitle(QObject::tr("Надпись QLabel"));
    label.show();

    return a.exec();
}
