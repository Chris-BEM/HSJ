/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "userform.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *viewsWidget;
    QWidget *loginPage;
    QGroupBox *userGB;
    QLineEdit *userCodeLE;
    QLineEdit *userPasswordLE;
    QPushButton *userLoginPB;
    QLabel *logoLabel;
    QPushButton *userLoginPB_2;
    userForm *userPage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(650, 500);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        viewsWidget = new QStackedWidget(centralwidget);
        viewsWidget->setObjectName(QString::fromUtf8("viewsWidget"));
        viewsWidget->setEnabled(true);
        viewsWidget->setGeometry(QRect(9, -1, 632, 441));
        viewsWidget->setStyleSheet(QString::fromUtf8(""));
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        loginPage->setEnabled(false);
        loginPage->setStyleSheet(QString::fromUtf8(""));
        userGB = new QGroupBox(loginPage);
        userGB->setObjectName(QString::fromUtf8("userGB"));
        userGB->setGeometry(QRect(10, 30, 611, 401));
        QFont font;
        font.setPointSize(12);
        userGB->setFont(font);
        userGB->setStyleSheet(QString::fromUtf8(""));
        userGB->setAlignment(Qt::AlignCenter);
        userCodeLE = new QLineEdit(userGB);
        userCodeLE->setObjectName(QString::fromUtf8("userCodeLE"));
        userCodeLE->setGeometry(QRect(20, 190, 571, 31));
        userPasswordLE = new QLineEdit(userGB);
        userPasswordLE->setObjectName(QString::fromUtf8("userPasswordLE"));
        userPasswordLE->setGeometry(QRect(20, 280, 571, 31));
        userPasswordLE->setEchoMode(QLineEdit::Password);
        userLoginPB = new QPushButton(userGB);
        userLoginPB->setObjectName(QString::fromUtf8("userLoginPB"));
        userLoginPB->setEnabled(false);
        userLoginPB->setGeometry(QRect(160, 340, 121, 31));
        QFont font1;
        font1.setPointSize(10);
        userLoginPB->setFont(font1);
        logoLabel = new QLabel(userGB);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(240, 30, 131, 141));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/qss/logo-hsj.png")));
        logoLabel->setScaledContents(true);
        userLoginPB_2 = new QPushButton(userGB);
        userLoginPB_2->setObjectName(QString::fromUtf8("userLoginPB_2"));
        userLoginPB_2->setEnabled(false);
        userLoginPB_2->setGeometry(QRect(300, 340, 171, 31));
        userLoginPB_2->setFont(font1);
        userLoginPB_2->setStyleSheet(QString::fromUtf8(""));
        viewsWidget->addWidget(loginPage);
        userPage = new userForm();
        userPage->setObjectName(QString::fromUtf8("userPage"));
        viewsWidget->addWidget(userPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        viewsWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "HSJ - Sistema de Gesti\303\263n de Servicios M\303\251dicos", nullptr));
        userGB->setTitle(QString());
        userCodeLE->setPlaceholderText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        userPasswordLE->setPlaceholderText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        userLoginPB->setText(QCoreApplication::translate("MainWindow", "Iniciar sesi\303\263n", nullptr));
        logoLabel->setText(QString());
        userLoginPB_2->setText(QCoreApplication::translate("MainWindow", "\302\277Olvidaste la contrase\303\261a?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
