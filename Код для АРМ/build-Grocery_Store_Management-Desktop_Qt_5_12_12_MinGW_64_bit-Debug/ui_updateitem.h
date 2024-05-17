/********************************************************************************
** Form generated from reading UI file 'updateitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEM_H
#define UI_UPDATEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpdateItem
{
public:
    QLineEdit *txtId;
    QLabel *label_2;
    QComboBox *cmbStatus;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *lblInfo;

    void setupUi(QDialog *UpdateItem)
    {
        if (UpdateItem->objectName().isEmpty())
            UpdateItem->setObjectName(QString::fromUtf8("UpdateItem"));
        UpdateItem->setWindowModality(Qt::WindowModal);
        UpdateItem->resize(388, 234);
        txtId = new QLineEdit(UpdateItem);
        txtId->setObjectName(QString::fromUtf8("txtId"));
        txtId->setGeometry(QRect(180, 10, 191, 20));
        QFont font;
        font.setPointSize(10);
        txtId->setFont(font);
        label_2 = new QLabel(UpdateItem);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 151, 16));
        label_2->setFont(font);
        cmbStatus = new QComboBox(UpdateItem);
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->setObjectName(QString::fromUtf8("cmbStatus"));
        cmbStatus->setGeometry(QRect(180, 40, 191, 22));
        cmbStatus->setFont(font);
        label = new QLabel(UpdateItem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 16));
        label->setFont(font);
        pushButton = new QPushButton(UpdateItem);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 80, 361, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Black"));
        font1.setPointSize(10);
        pushButton->setFont(font1);
        lblInfo = new QLabel(UpdateItem);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(10, 190, 361, 31));

        retranslateUi(UpdateItem);

        QMetaObject::connectSlotsByName(UpdateItem);
    } // setupUi

    void retranslateUi(QDialog *UpdateItem)
    {
        UpdateItem->setWindowTitle(QApplication::translate("UpdateItem", "Update Any Item", nullptr));
        label_2->setText(QApplication::translate("UpdateItem", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\265 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        cmbStatus->setItemText(0, QApplication::translate("UpdateItem", "\320\230\321\201\321\202\320\265\320\272 \321\201\321\200\320\276\320\272 \320\263\320\276\320\264\320\275\320\276\321\201\321\202\320\270", nullptr));
        cmbStatus->setItemText(1, QApplication::translate("UpdateItem", "\320\224\320\276\321\201\321\202\321\203\320\277\320\265\320\275", nullptr));
        cmbStatus->setItemText(2, QApplication::translate("UpdateItem", "\320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\265\320\275", nullptr));
        cmbStatus->setItemText(3, QApplication::translate("UpdateItem", "\320\237\321\200\320\276\320\264\320\260\320\275", nullptr));
        cmbStatus->setItemText(4, QApplication::translate("UpdateItem", "\320\221\321\200\320\260\320\272", nullptr));

        label->setText(QApplication::translate("UpdateItem", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 Id \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        pushButton->setText(QApplication::translate("UpdateItem", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateItem: public Ui_UpdateItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEM_H
