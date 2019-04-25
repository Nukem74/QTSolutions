#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QTextCodec>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
        QTextCodec::setCodecForLocale(codec);
        QLabel label (QObject::tr("Окошечко"));

    if(QMessageBox::question(NULL,  QObject::tr("Подтвердите"), QObject::tr("Выйти из программы?"), QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok) == QMessageBox::Ok)

        /*Некорреткный пример листинга
          метод tr указан без базового класса
          в качестве родительского элемента указатель this
        */
    return a.exec();
}
