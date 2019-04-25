#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QTextCodec>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
           QTextCodec::setCodecForLocale(codec);
    //В QT5.12 возможно не нужны текстовые кодеки для отображения кирилицы
    QWidget win;
    //QVBoxLayout* layout0 = new QVBoxLayout(&win);
    //нельзя подобным образом ^ одновременно использовать вертикальную и горизонтальную развертку
    QHBoxLayout* layout1 = new QHBoxLayout(&win);
    //QLabel* label00 = new QLabel(QLabel::tr("Раз"), &win);
    //QLabel* label01 = new QLabel(QLabel::tr("Два"), &win);
    //QLabel* label10 = new QLabel("Три", &win);
    QString name = "Алексей";
    QString age = "27";
    QString str = "Меня зовут %1 и мне %2 лет";
    QLabel* label11 = new QLabel(str.arg(name).arg(age), &win);
    QLineEdit le("земсков - халтурщик");
    le.setAlignment(Qt::AlignCenter);
    le.setFont(QFont("Tahoma", 12));
    le.setWindowTitle("QLineEdit");
    /*пара объектов QLabel не добавленные к объекту layout оказываются в верхнем левом углу окна
     и будут накладываться на все прочие пересекающиеся с ними объекты*/
    //label00->setFrameStyle(QFrame::Panel | QFrame:: Sunken);
    //label01->setFrameStyle(QFrame::Panel | QFrame::Raised);
    //label10->setFrameStyle(QFrame::Panel | QFrame:: Sunken);
    label11->setFrameStyle(QFrame::Panel | QFrame::Raised);

    //layout0 -> addWidget(label00);
    //layout0 -> addWidget(label01);
    //layout1 -> addWidget(label10);
    layout1 -> addWidget(label11);

    //win.setLayout(layout0);
    win.setLayout(layout1);

    /*
    w.show();*/
    /*разница между объектами MainWindow и QWidget:
      MainWindow по умолчанию инициализируется большим окном
      QWidget инициализируется окном минимального размера
      MainWindow не принимает в себя объекты layout но принимает объекты QLabel
      MainWindow строже относится к параметрам дочерних объектов*/
    le.show();
    win.show();
    //каждый вызов метода show отображает свой объект в отдельном окне

    return a.exec();
}
