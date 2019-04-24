//простое оконное приложение отображающее URL и email

#include "mainwindow.h"                                                                     //включение классов и релевантных фаилов
#include <QApplication>
#include <QLabel>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("CP1251");                                 //установка и подключение кодека для кирилицы
    QTextCodec::setCodecForLocale(codec);

    QLabel label( QObject::tr(                                                              //установка содержимого диалогового окна(виджета?)
                      "Адрес в Интернете: "
                      "<a href=\"http://www.meduza.io \">"
                      "http://www.meduza.io</a><br/>"
                      "E-mail: <a href=\"mailto:Nukem74@gmail.com"
                      "?subject=Книга 'Qt4 Cookbook' &body=Здравствуй, Nukem!\">"
                      "Nukem74@gmail.com</a>"));
    label.setOpenExternalLinks(true);                                                       //разрешение работы URL ссылок
    label.setFrameStyle(QFrame::Panel |QFrame::Sunken);
    label.setAlignment(Qt::AlignCenter);

    //label.setTextInteractionFlags(Qt::TextEditorInteraction);                               //разрешение редактирования содержимого label

    QFont font("Serif", 12, QFont::Bold);                                                   //форматирование шрифта и диалогового окна
    label.setFont(font);
    label.resize(500, 100);
    label.setWindowTitle(QObject::tr("Надпись со ссылкой"));
    label.show();

    return a.exec();
}
