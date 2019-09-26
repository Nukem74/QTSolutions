/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *ENQUEUE_button;
    QPushButton *SELECT_button;
    QPushButton *SHOW_button;
    QPushButton *CREATE_button;
    QPushButton *DATABASE_button;
    QPushButton *DATABASES_button;
    QPushButton *TABLES_button;
    QPushButton *TABLE_button;
    QPushButton *USE_button;
    QPushButton *SOURCE_button;
    QPushButton *DROP_button;
    QPushButton *KEY_button;
    QPushButton *PRIMARY_button;
    QPushButton *FOREIGN_button;
    QPushButton *REFERENCE_button;
    QPushButton *DESCRIBE_button;
    QPushButton *INSERT_button;
    QPushButton *INTO_button;
    QPushButton *VALUES_button;
    QPushButton *UPDATE_button;
    QPushButton *SET_button;
    QPushButton *WHERE_button;
    QPushButton *GROUP_BY_button;
    QPushButton *FROM_button;
    QPushButton *DISTINCT_button;
    QPushButton *COUNT_button;
    QPushButton *MAX_button;
    QPushButton *MIN_button;
    QPushButton *SUM_button;
    QPushButton *AVG_button;
    QPushButton *HAVING_button;
    QPushButton *ORDERED_BY_button;
    QPushButton *BETWEEN_button;
    QPushButton *LIKE_button;
    QPushButton *IN_button;
    QPushButton *JOIN_button;
    QPushButton *VIEW_button;
    QListWidget *QueueList;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(636, 491);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 390, 621, 20));
        ENQUEUE_button = new QPushButton(centralWidget);
        ENQUEUE_button->setObjectName(QString::fromUtf8("ENQUEUE_button"));
        ENQUEUE_button->setGeometry(QRect(280, 410, 75, 23));
        SELECT_button = new QPushButton(centralWidget);
        SELECT_button->setObjectName(QString::fromUtf8("SELECT_button"));
        SELECT_button->setGeometry(QRect(180, 50, 71, 21));
        SHOW_button = new QPushButton(centralWidget);
        SHOW_button->setObjectName(QString::fromUtf8("SHOW_button"));
        SHOW_button->setGeometry(QRect(180, 80, 71, 23));
        CREATE_button = new QPushButton(centralWidget);
        CREATE_button->setObjectName(QString::fromUtf8("CREATE_button"));
        CREATE_button->setGeometry(QRect(10, 110, 71, 23));
        DATABASE_button = new QPushButton(centralWidget);
        DATABASE_button->setObjectName(QString::fromUtf8("DATABASE_button"));
        DATABASE_button->setGeometry(QRect(10, 140, 71, 23));
        DATABASES_button = new QPushButton(centralWidget);
        DATABASES_button->setObjectName(QString::fromUtf8("DATABASES_button"));
        DATABASES_button->setGeometry(QRect(10, 170, 71, 23));
        TABLES_button = new QPushButton(centralWidget);
        TABLES_button->setObjectName(QString::fromUtf8("TABLES_button"));
        TABLES_button->setGeometry(QRect(180, 200, 71, 23));
        TABLE_button = new QPushButton(centralWidget);
        TABLE_button->setObjectName(QString::fromUtf8("TABLE_button"));
        TABLE_button->setGeometry(QRect(180, 170, 71, 23));
        USE_button = new QPushButton(centralWidget);
        USE_button->setObjectName(QString::fromUtf8("USE_button"));
        USE_button->setGeometry(QRect(180, 260, 71, 23));
        SOURCE_button = new QPushButton(centralWidget);
        SOURCE_button->setObjectName(QString::fromUtf8("SOURCE_button"));
        SOURCE_button->setGeometry(QRect(180, 110, 71, 23));
        DROP_button = new QPushButton(centralWidget);
        DROP_button->setObjectName(QString::fromUtf8("DROP_button"));
        DROP_button->setGeometry(QRect(10, 260, 71, 23));
        KEY_button = new QPushButton(centralWidget);
        KEY_button->setObjectName(QString::fromUtf8("KEY_button"));
        KEY_button->setGeometry(QRect(100, 170, 71, 23));
        PRIMARY_button = new QPushButton(centralWidget);
        PRIMARY_button->setObjectName(QString::fromUtf8("PRIMARY_button"));
        PRIMARY_button->setGeometry(QRect(100, 320, 71, 23));
        FOREIGN_button = new QPushButton(centralWidget);
        FOREIGN_button->setObjectName(QString::fromUtf8("FOREIGN_button"));
        FOREIGN_button->setGeometry(QRect(10, 320, 71, 23));
        REFERENCE_button = new QPushButton(centralWidget);
        REFERENCE_button->setObjectName(QString::fromUtf8("REFERENCE_button"));
        REFERENCE_button->setGeometry(QRect(100, 350, 71, 23));
        DESCRIBE_button = new QPushButton(centralWidget);
        DESCRIBE_button->setObjectName(QString::fromUtf8("DESCRIBE_button"));
        DESCRIBE_button->setGeometry(QRect(10, 200, 71, 23));
        INSERT_button = new QPushButton(centralWidget);
        INSERT_button->setObjectName(QString::fromUtf8("INSERT_button"));
        INSERT_button->setGeometry(QRect(10, 290, 71, 23));
        INTO_button = new QPushButton(centralWidget);
        INTO_button->setObjectName(QString::fromUtf8("INTO_button"));
        INTO_button->setGeometry(QRect(100, 110, 71, 23));
        VALUES_button = new QPushButton(centralWidget);
        VALUES_button->setObjectName(QString::fromUtf8("VALUES_button"));
        VALUES_button->setGeometry(QRect(180, 290, 71, 23));
        UPDATE_button = new QPushButton(centralWidget);
        UPDATE_button->setObjectName(QString::fromUtf8("UPDATE_button"));
        UPDATE_button->setGeometry(QRect(180, 230, 71, 23));
        SET_button = new QPushButton(centralWidget);
        SET_button->setObjectName(QString::fromUtf8("SET_button"));
        SET_button->setGeometry(QRect(180, 20, 71, 23));
        WHERE_button = new QPushButton(centralWidget);
        WHERE_button->setObjectName(QString::fromUtf8("WHERE_button"));
        WHERE_button->setGeometry(QRect(180, 350, 71, 23));
        GROUP_BY_button = new QPushButton(centralWidget);
        GROUP_BY_button->setObjectName(QString::fromUtf8("GROUP_BY_button"));
        GROUP_BY_button->setGeometry(QRect(100, 20, 71, 23));
        FROM_button = new QPushButton(centralWidget);
        FROM_button->setObjectName(QString::fromUtf8("FROM_button"));
        FROM_button->setGeometry(QRect(10, 350, 71, 23));
        DISTINCT_button = new QPushButton(centralWidget);
        DISTINCT_button->setObjectName(QString::fromUtf8("DISTINCT_button"));
        DISTINCT_button->setGeometry(QRect(10, 230, 71, 23));
        COUNT_button = new QPushButton(centralWidget);
        COUNT_button->setObjectName(QString::fromUtf8("COUNT_button"));
        COUNT_button->setGeometry(QRect(10, 80, 71, 23));
        MAX_button = new QPushButton(centralWidget);
        MAX_button->setObjectName(QString::fromUtf8("MAX_button"));
        MAX_button->setGeometry(QRect(100, 230, 71, 23));
        MIN_button = new QPushButton(centralWidget);
        MIN_button->setObjectName(QString::fromUtf8("MIN_button"));
        MIN_button->setGeometry(QRect(100, 260, 71, 23));
        SUM_button = new QPushButton(centralWidget);
        SUM_button->setObjectName(QString::fromUtf8("SUM_button"));
        SUM_button->setGeometry(QRect(180, 140, 71, 23));
        AVG_button = new QPushButton(centralWidget);
        AVG_button->setObjectName(QString::fromUtf8("AVG_button"));
        AVG_button->setGeometry(QRect(10, 20, 71, 23));
        HAVING_button = new QPushButton(centralWidget);
        HAVING_button->setObjectName(QString::fromUtf8("HAVING_button"));
        HAVING_button->setGeometry(QRect(100, 50, 71, 23));
        ORDERED_BY_button = new QPushButton(centralWidget);
        ORDERED_BY_button->setObjectName(QString::fromUtf8("ORDERED_BY_button"));
        ORDERED_BY_button->setGeometry(QRect(100, 290, 71, 23));
        BETWEEN_button = new QPushButton(centralWidget);
        BETWEEN_button->setObjectName(QString::fromUtf8("BETWEEN_button"));
        BETWEEN_button->setGeometry(QRect(10, 50, 71, 23));
        LIKE_button = new QPushButton(centralWidget);
        LIKE_button->setObjectName(QString::fromUtf8("LIKE_button"));
        LIKE_button->setGeometry(QRect(100, 200, 71, 23));
        IN_button = new QPushButton(centralWidget);
        IN_button->setObjectName(QString::fromUtf8("IN_button"));
        IN_button->setGeometry(QRect(100, 80, 71, 23));
        JOIN_button = new QPushButton(centralWidget);
        JOIN_button->setObjectName(QString::fromUtf8("JOIN_button"));
        JOIN_button->setGeometry(QRect(100, 140, 71, 23));
        VIEW_button = new QPushButton(centralWidget);
        VIEW_button->setObjectName(QString::fromUtf8("VIEW_button"));
        VIEW_button->setGeometry(QRect(180, 320, 71, 23));
        QueueList = new QListWidget(centralWidget);
        QueueList->setObjectName(QString::fromUtf8("QueueList"));
        QueueList->setGeometry(QRect(265, 11, 351, 361));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 636, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        ENQUEUE_button->setText(QApplication::translate("MainWindow", "Enqueue", nullptr));
        SELECT_button->setText(QApplication::translate("MainWindow", "SELECT", nullptr));
        SHOW_button->setText(QApplication::translate("MainWindow", "SHOW", nullptr));
        CREATE_button->setText(QApplication::translate("MainWindow", "CREATE", nullptr));
        DATABASE_button->setText(QApplication::translate("MainWindow", "DATABASE", nullptr));
        DATABASES_button->setText(QApplication::translate("MainWindow", "DATABASES", nullptr));
        TABLES_button->setText(QApplication::translate("MainWindow", "TABLES", nullptr));
        TABLE_button->setText(QApplication::translate("MainWindow", "TABLE", nullptr));
        USE_button->setText(QApplication::translate("MainWindow", "USE", nullptr));
        SOURCE_button->setText(QApplication::translate("MainWindow", "SOURCE", nullptr));
        DROP_button->setText(QApplication::translate("MainWindow", "DROP", nullptr));
        KEY_button->setText(QApplication::translate("MainWindow", "KEY", nullptr));
        PRIMARY_button->setText(QApplication::translate("MainWindow", "PRIMARY", nullptr));
        FOREIGN_button->setText(QApplication::translate("MainWindow", "FOREIGN", nullptr));
        REFERENCE_button->setText(QApplication::translate("MainWindow", "REFERENCE", nullptr));
        DESCRIBE_button->setText(QApplication::translate("MainWindow", "DESCRIBE", nullptr));
        INSERT_button->setText(QApplication::translate("MainWindow", "INSERT", nullptr));
        INTO_button->setText(QApplication::translate("MainWindow", "INTO", nullptr));
        VALUES_button->setText(QApplication::translate("MainWindow", "VALUES", nullptr));
        UPDATE_button->setText(QApplication::translate("MainWindow", "UPDATE", nullptr));
        SET_button->setText(QApplication::translate("MainWindow", "SET", nullptr));
        WHERE_button->setText(QApplication::translate("MainWindow", "WHERE", nullptr));
        GROUP_BY_button->setText(QApplication::translate("MainWindow", "GROUP BY", nullptr));
        FROM_button->setText(QApplication::translate("MainWindow", "FROM", nullptr));
        DISTINCT_button->setText(QApplication::translate("MainWindow", "DISTINCT", nullptr));
        COUNT_button->setText(QApplication::translate("MainWindow", "COUNT", nullptr));
        MAX_button->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        MIN_button->setText(QApplication::translate("MainWindow", "MIN", nullptr));
        SUM_button->setText(QApplication::translate("MainWindow", "SUM", nullptr));
        AVG_button->setText(QApplication::translate("MainWindow", "AVG", nullptr));
        HAVING_button->setText(QApplication::translate("MainWindow", "HAVING", nullptr));
        ORDERED_BY_button->setText(QApplication::translate("MainWindow", "ORDRD BY", nullptr));
        BETWEEN_button->setText(QApplication::translate("MainWindow", "BETWEEN", nullptr));
        LIKE_button->setText(QApplication::translate("MainWindow", "LIKE", nullptr));
        IN_button->setText(QApplication::translate("MainWindow", "IN", nullptr));
        JOIN_button->setText(QApplication::translate("MainWindow", "JOIN", nullptr));
        VIEW_button->setText(QApplication::translate("MainWindow", "VIEW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
