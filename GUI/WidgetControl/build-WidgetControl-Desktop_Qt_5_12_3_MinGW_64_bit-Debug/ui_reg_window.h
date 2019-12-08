/********************************************************************************
** Form generated from reading UI file 'reg_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REG_WINDOW_H
#define UI_REG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reg_Window
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_Confirm;
    QLineEdit *confirmLineEdit;
    QPushButton *registerPushButton;
    QLabel *label_name;
    QLabel *label_password;
    QLineEdit *nameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *labelWelcome;
    QLabel *labelError;

    void setupUi(QWidget *reg_Window)
    {
        if (reg_Window->objectName().isEmpty())
            reg_Window->setObjectName(QString::fromUtf8("reg_Window"));
        reg_Window->resize(290, 186);
        gridLayoutWidget = new QWidget(reg_Window);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 221, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_Confirm = new QLabel(gridLayoutWidget);
        label_Confirm->setObjectName(QString::fromUtf8("label_Confirm"));
        label_Confirm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_Confirm->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_Confirm, 3, 0, 1, 1);

        confirmLineEdit = new QLineEdit(gridLayoutWidget);
        confirmLineEdit->setObjectName(QString::fromUtf8("confirmLineEdit"));

        gridLayout->addWidget(confirmLineEdit, 3, 1, 1, 1);

        registerPushButton = new QPushButton(gridLayoutWidget);
        registerPushButton->setObjectName(QString::fromUtf8("registerPushButton"));

        gridLayout->addWidget(registerPushButton, 4, 1, 1, 1);

        label_name = new QLabel(gridLayoutWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_name, 1, 0, 1, 1);

        label_password = new QLabel(gridLayoutWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_password->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_password, 2, 0, 1, 1);

        nameLineEdit = new QLineEdit(gridLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 1, 1, 1, 1);

        passwordLineEdit = new QLineEdit(gridLayoutWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        gridLayout->addWidget(passwordLineEdit, 2, 1, 1, 1);

        labelWelcome = new QLabel(gridLayoutWidget);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setAlignment(Qt::AlignCenter);
        labelWelcome->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(labelWelcome, 0, 1, 1, 1);

        labelError = new QLabel(reg_Window);
        labelError->setObjectName(QString::fromUtf8("labelError"));
        labelError->setEnabled(false);
        labelError->setGeometry(QRect(60, 160, 171, 20));
        labelError->setTextInteractionFlags(Qt::NoTextInteraction);

        retranslateUi(reg_Window);

        QMetaObject::connectSlotsByName(reg_Window);
    } // setupUi

    void retranslateUi(QWidget *reg_Window)
    {
        reg_Window->setWindowTitle(QApplication::translate("reg_Window", "Registration Window", nullptr));
        label_Confirm->setText(QApplication::translate("reg_Window", "Confirm :", nullptr));
        registerPushButton->setText(QApplication::translate("reg_Window", "Register", nullptr));
        label_name->setText(QApplication::translate("reg_Window", "Name :", nullptr));
        label_password->setText(QApplication::translate("reg_Window", "Password :", nullptr));
        labelWelcome->setText(QApplication::translate("reg_Window", "Registrate yourself", nullptr));
        labelError->setText(QApplication::translate("reg_Window", "You need to register unique name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reg_Window: public Ui_reg_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REG_WINDOW_H
