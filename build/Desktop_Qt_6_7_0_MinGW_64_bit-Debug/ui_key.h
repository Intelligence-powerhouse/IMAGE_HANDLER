/********************************************************************************
** Form generated from reading UI file 'key.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEY_H
#define UI_KEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_key
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *submit;
    QPushButton *cancel;

    void setupUi(QWidget *key)
    {
        if (key->objectName().isEmpty())
            key->setObjectName("key");
        key->resize(400, 290);
        lineEdit = new QLineEdit(key);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 120, 261, 31));
        label = new QLabel(key);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 80, 211, 20));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        submit = new QPushButton(key);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(60, 180, 93, 28));
        cancel = new QPushButton(key);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(230, 180, 93, 28));

        retranslateUi(key);

        QMetaObject::connectSlotsByName(key);
    } // setupUi

    void retranslateUi(QWidget *key)
    {
        key->setWindowTitle(QCoreApplication::translate("key", "Form", nullptr));
        label->setText(QCoreApplication::translate("key", "\350\257\267\350\276\223\345\205\245\345\257\206\351\222\245", nullptr));
        submit->setText(QCoreApplication::translate("key", "\347\241\256\350\256\244", nullptr));
        cancel->setText(QCoreApplication::translate("key", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class key: public Ui_key {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEY_H
