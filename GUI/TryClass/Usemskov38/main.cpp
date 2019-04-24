#include "mainwindow.h"
#include <QApplication>
#include "mywin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForLocale(codec);
    MyWin win(QObject::tr("Мое окно"));                         //создание экземпляра пользовательского класса
    win.show();                                                 //отображение окна на экран монитора
    /*MainWindow w;
    w.show();*/

    return a.exec();
}
