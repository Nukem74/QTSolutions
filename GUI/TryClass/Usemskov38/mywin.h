#ifndef MYWIN_H                     //начало директивы условной компиляции
#define MYWIN_H

#include <QObject>                  //определения подключаемых классов
#include <QtGui>
#include <QMainWindow>

class MyWin : public QMainWindow    //определение пользовательского(моего) класса
{
    Q_OBJECT                        //макрос(что макрос?)
    public:                         //перечисление публичных членов
        MyWin(const QString& title);//конструктор с одним параметром(строка заголовка - титул)
};

#endif // MYWIN_H                   //конец директивы условной компиляции
