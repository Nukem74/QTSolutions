#include "mainwindow.h"                                                                 //подключение классов
#include <QApplication>
#include <QLabel>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                                                         //подключение и установка языковых кодеков
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
        QTextCodec::setCodecForLocale(codec);

   QLabel label(QObject::tr("Эмблема Qt"));
   label.setPixmap(QPixmap("d:/Docs/QTSolutions/GUI/PicLabel/Usemskov44/img/qt.png"));  //не работает, Земсков обещал позже рассказать об этому подробнее

   label.setAlignment(Qt::AlignCenter);                                                 //форматирование шрифта виджета label
   label.setFont(QFont("Arial", 12));

   label.resize(600, 400);                                                              //форматирование заголовка окна
   label.setWindowTitle(QObject::tr("Надпись с рисунком"));
   label.show();

    return a.exec();
}
