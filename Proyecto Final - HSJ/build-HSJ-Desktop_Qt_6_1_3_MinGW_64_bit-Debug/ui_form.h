/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPlainTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *form)
    {
        if (form->objectName().isEmpty())
            form->setObjectName(QString::fromUtf8("form"));
        form->setEnabled(true);
        form->resize(519, 369);
        buttonBox = new QDialogButtonBox(form);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(140, 300, 351, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 121, 21));
        label_2 = new QLabel(form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 150, 81, 21));
        label_3 = new QLabel(form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 47, 21));
        radioButton = new QRadioButton(form);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(60, 110, 111, 21));
        radioButton_2 = new QRadioButton(form);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(180, 110, 82, 21));
        spinBox = new QSpinBox(form);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(140, 70, 42, 22));
        label_4 = new QLabel(form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 47, 21));
        lineEdit_2 = new QLineEdit(form);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 30, 113, 20));
        plainTextEdit = new QPlainTextEdit(form);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(90, 160, 411, 101));
        layoutWidget = new QWidget(form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(form);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, form, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, form, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(form);
    } // setupUi

    void retranslateUi(QDialog *form)
    {
        form->setWindowTitle(QCoreApplication::translate("form", "HSJ - Sistema de Gesti\303\263n de Servicios M\303\251dicos", nullptr));
        label->setText(QCoreApplication::translate("form", "Cantidad requerida:", nullptr));
        label_2->setText(QCoreApplication::translate("form", "Descripci\303\263n:", nullptr));
        label_3->setText(QCoreApplication::translate("form", "Tipo:", nullptr));
        radioButton->setText(QCoreApplication::translate("form", "Medicamento", nullptr));
        radioButton_2->setText(QCoreApplication::translate("form", "Insumo", nullptr));
        label_4->setText(QCoreApplication::translate("form", "C\303\263digo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form: public Ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
