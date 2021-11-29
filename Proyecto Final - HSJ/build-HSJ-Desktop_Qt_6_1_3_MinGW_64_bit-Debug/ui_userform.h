/********************************************************************************
** Form generated from reading UI file 'userform.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERFORM_H
#define UI_USERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userForm
{
public:
    QTableView *databaseTableView;
    QStackedWidget *stackedWidget;
    QWidget *stacked1;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QWidget *stacked2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QWidget *stacked3;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QPushButton *pushButton_4;
    QWidget *stacked4;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *displaySubjectPB;
    QPushButton *displaySubjectPB_2;
    QPushButton *pushButton;
    QPushButton *displaySubjectPB_3;
    QPushButton *resetTablePB;

    void setupUi(QWidget *userForm)
    {
        if (userForm->objectName().isEmpty())
            userForm->setObjectName(QString::fromUtf8("userForm"));
        userForm->resize(639, 421);
        databaseTableView = new QTableView(userForm);
        databaseTableView->setObjectName(QString::fromUtf8("databaseTableView"));
        databaseTableView->setGeometry(QRect(10, 50, 611, 241));
        stackedWidget = new QStackedWidget(userForm);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 310, 601, 101));
        stacked1 = new QWidget();
        stacked1->setObjectName(QString::fromUtf8("stacked1"));
        label = new QLabel(stacked1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 201, 31));
        label_2 = new QLabel(stacked1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 40, 47, 21));
        lineEdit = new QLineEdit(stacked1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 40, 113, 20));
        pushButton_2 = new QPushButton(stacked1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 40, 75, 23));
        stackedWidget->addWidget(stacked1);
        stacked2 = new QWidget();
        stacked2->setObjectName(QString::fromUtf8("stacked2"));
        label_3 = new QLabel(stacked2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 40, 71, 21));
        lineEdit_2 = new QLineEdit(stacked2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 40, 113, 20));
        label_4 = new QLabel(stacked2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 221, 31));
        pushButton_3 = new QPushButton(stacked2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 40, 75, 23));
        stackedWidget->addWidget(stacked2);
        stacked3 = new QWidget();
        stacked3->setObjectName(QString::fromUtf8("stacked3"));
        label_5 = new QLabel(stacked3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 40, 131, 21));
        lineEdit_3 = new QLineEdit(stacked3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 40, 113, 20));
        label_6 = new QLabel(stacked3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 201, 31));
        pushButton_4 = new QPushButton(stacked3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 40, 75, 23));
        stackedWidget->addWidget(stacked3);
        stacked4 = new QWidget();
        stacked4->setObjectName(QString::fromUtf8("stacked4"));
        label_7 = new QLabel(stacked4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 40, 121, 21));
        lineEdit_4 = new QLineEdit(stacked4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(130, 40, 113, 20));
        label_8 = new QLabel(stacked4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 201, 31));
        pushButton_5 = new QPushButton(stacked4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(260, 40, 75, 23));
        stackedWidget->addWidget(stacked4);
        layoutWidget = new QWidget(userForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 611, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        displaySubjectPB = new QPushButton(layoutWidget);
        displaySubjectPB->setObjectName(QString::fromUtf8("displaySubjectPB"));

        horizontalLayout->addWidget(displaySubjectPB);

        displaySubjectPB_2 = new QPushButton(layoutWidget);
        displaySubjectPB_2->setObjectName(QString::fromUtf8("displaySubjectPB_2"));

        horizontalLayout->addWidget(displaySubjectPB_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        displaySubjectPB_3 = new QPushButton(layoutWidget);
        displaySubjectPB_3->setObjectName(QString::fromUtf8("displaySubjectPB_3"));

        horizontalLayout->addWidget(displaySubjectPB_3);

        resetTablePB = new QPushButton(layoutWidget);
        resetTablePB->setObjectName(QString::fromUtf8("resetTablePB"));

        horizontalLayout->addWidget(resetTablePB);


        retranslateUi(userForm);

        QMetaObject::connectSlotsByName(userForm);
    } // setupUi

    void retranslateUi(QWidget *userForm)
    {
        userForm->setWindowTitle(QCoreApplication::translate("userForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("userForm", "Busqueda avanzada de insumos:", nullptr));
        label_2->setText(QCoreApplication::translate("userForm", "Lote:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("userForm", "Buscar", nullptr));
        label_3->setText(QCoreApplication::translate("userForm", "ID doctor:", nullptr));
        label_4->setText(QCoreApplication::translate("userForm", "Busqueda avanzada de diagnosticos:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("userForm", "Buscar", nullptr));
        label_5->setText(QCoreApplication::translate("userForm", "N\303\272mero de paciente:", nullptr));
        label_6->setText(QCoreApplication::translate("userForm", "Busqueda avanzada de pacientes:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("userForm", "Buscar", nullptr));
        label_7->setText(QCoreApplication::translate("userForm", "N\303\272mero de estudio:", nullptr));
        label_8->setText(QCoreApplication::translate("userForm", "Busqueda avanzada de estudios:", nullptr));
        pushButton_5->setText(QCoreApplication::translate("userForm", "Buscar", nullptr));
        displaySubjectPB->setText(QCoreApplication::translate("userForm", "Stock insumos", nullptr));
        displaySubjectPB_2->setText(QCoreApplication::translate("userForm", "Diagnosticos", nullptr));
        pushButton->setText(QCoreApplication::translate("userForm", "Pacientes", nullptr));
        displaySubjectPB_3->setText(QCoreApplication::translate("userForm", "Estudios", nullptr));
        resetTablePB->setText(QCoreApplication::translate("userForm", "Requisici\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userForm: public Ui_userForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERFORM_H
