/********************************************************************************
** Form generated from reading UI file 'auth_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTH_WINDOW_H
#define UI_AUTH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Auth_Window
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *loginPushButton;
    QLineEdit *lineEdit;
    QLabel *label_Password;
    QLabel *label_Name;
    QLineEdit *lineEdit_2;
    QPushButton *registerPushButton_2;
    QLabel *labelWelcome;
    QLabel *label;

    void setupUi(QWidget *Auth_Window)
    {
        if (Auth_Window->objectName().isEmpty())
            Auth_Window->setObjectName(QString::fromUtf8("Auth_Window"));
        Auth_Window->resize(302, 195);
        gridLayoutWidget = new QWidget(Auth_Window);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 241, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        loginPushButton = new QPushButton(gridLayoutWidget);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));

        gridLayout->addWidget(loginPushButton, 3, 1, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_Password = new QLabel(gridLayoutWidget);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));
        label_Password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Password->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_Password, 2, 0, 1, 1);

        label_Name = new QLabel(gridLayoutWidget);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Name->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_Name, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        registerPushButton_2 = new QPushButton(gridLayoutWidget);
        registerPushButton_2->setObjectName(QString::fromUtf8("registerPushButton_2"));

        gridLayout->addWidget(registerPushButton_2, 4, 1, 1, 1);

        labelWelcome = new QLabel(gridLayoutWidget);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setAlignment(Qt::AlignCenter);
        labelWelcome->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWelcome, 0, 1, 1, 1);

        label = new QLabel(Auth_Window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(70, 170, 181, 20));
        label->setTextInteractionFlags(Qt::NoTextInteraction);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, loginPushButton);
        QWidget::setTabOrder(loginPushButton, registerPushButton_2);

        retranslateUi(Auth_Window);

        QMetaObject::connectSlotsByName(Auth_Window);
    } // setupUi

    void retranslateUi(QWidget *Auth_Window)
    {
        Auth_Window->setWindowTitle(QApplication::translate("Auth_Window", "Form", nullptr));
        loginPushButton->setText(QApplication::translate("Auth_Window", "Log In", nullptr));
        label_Password->setText(QApplication::translate("Auth_Window", "Password :", nullptr));
        label_Name->setText(QApplication::translate("Auth_Window", "Name :", nullptr));
        registerPushButton_2->setText(QApplication::translate("Auth_Window", "Register", nullptr));
        labelWelcome->setText(QApplication::translate("Auth_Window", "Identificate yourself", nullptr));
        label->setText(QApplication::translate("Auth_Window", "Name and password missmatch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Auth_Window: public Ui_Auth_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTH_WINDOW_H
