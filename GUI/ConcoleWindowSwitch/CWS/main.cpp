#include <QCoreApplication>
#include <iostream>
#include "startdialog.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    StartDialog startDialog;

    startDialog.show();

    return a.exec();
}
