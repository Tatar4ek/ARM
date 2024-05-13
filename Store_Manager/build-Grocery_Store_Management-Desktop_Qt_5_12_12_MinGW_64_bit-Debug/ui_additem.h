/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddItem
{
public:
    QPushButton *btnAdd;
    QLabel *label;
    QLineEdit *txtName;
    QLineEdit *txtQuantity;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtDOP;
    QLabel *label_4;
    QLineEdit *txtDOS;
    QLabel *label_5;
    QLineEdit *txtSellingPrice;
    QLabel *label_6;
    QLineEdit *txtPurchasePrice;
    QLabel *label_7;
    QComboBox *cmbStatus;
    QLabel *lblInfo;
    QLineEdit *txtId;
    QLabel *label_8;

    void setupUi(QDialog *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName(QString::fromUtf8("AddItem"));
        AddItem->setWindowModality(Qt::WindowModal);
        AddItem->resize(550, 380);
        AddItem->setInputMethodHints(Qt::ImhExclusiveInputMask);
        btnAdd = new QPushButton(AddItem);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(150, 250, 251, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(12);
        btnAdd->setFont(font);
        label = new QLabel(AddItem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 141, 16));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        txtName = new QLineEdit(AddItem);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setGeometry(QRect(180, 40, 341, 20));
        QFont font2;
        font2.setPointSize(9);
        txtName->setFont(font2);
        txtQuantity = new QLineEdit(AddItem);
        txtQuantity->setObjectName(QString::fromUtf8("txtQuantity"));
        txtQuantity->setGeometry(QRect(180, 70, 341, 20));
        txtQuantity->setFont(font2);
        label_2 = new QLabel(AddItem);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 121, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(AddItem);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 121, 21));
        label_3->setFont(font1);
        txtDOP = new QLineEdit(AddItem);
        txtDOP->setObjectName(QString::fromUtf8("txtDOP"));
        txtDOP->setGeometry(QRect(180, 130, 341, 20));
        txtDOP->setFont(font2);
        label_4 = new QLabel(AddItem);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 130, 131, 21));
        label_4->setFont(font1);
        txtDOS = new QLineEdit(AddItem);
        txtDOS->setObjectName(QString::fromUtf8("txtDOS"));
        txtDOS->setGeometry(QRect(180, 160, 341, 20));
        txtDOS->setFont(font2);
        label_5 = new QLabel(AddItem);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 160, 141, 21));
        label_5->setFont(font1);
        txtSellingPrice = new QLineEdit(AddItem);
        txtSellingPrice->setObjectName(QString::fromUtf8("txtSellingPrice"));
        txtSellingPrice->setGeometry(QRect(180, 190, 341, 20));
        txtSellingPrice->setFont(font2);
        label_6 = new QLabel(AddItem);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 190, 141, 20));
        label_6->setFont(font1);
        txtPurchasePrice = new QLineEdit(AddItem);
        txtPurchasePrice->setObjectName(QString::fromUtf8("txtPurchasePrice"));
        txtPurchasePrice->setGeometry(QRect(180, 220, 341, 21));
        txtPurchasePrice->setFont(font2);
        label_7 = new QLabel(AddItem);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 220, 161, 21));
        label_7->setFont(font1);
        cmbStatus = new QComboBox(AddItem);
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->addItem(QString());
        cmbStatus->setObjectName(QString::fromUtf8("cmbStatus"));
        cmbStatus->setGeometry(QRect(180, 100, 341, 22));
        lblInfo = new QLabel(AddItem);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(190, 350, 171, 20));
        lblInfo->setLayoutDirection(Qt::LeftToRight);
        txtId = new QLineEdit(AddItem);
        txtId->setObjectName(QString::fromUtf8("txtId"));
        txtId->setGeometry(QRect(180, 10, 341, 21));
        txtId->setFont(font2);
        label_8 = new QLabel(AddItem);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 111, 20));
        label_8->setFont(font1);

        retranslateUi(AddItem);

        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QDialog *AddItem)
    {
        AddItem->setWindowTitle(QApplication::translate("AddItem", "Add an Item", nullptr));
        btnAdd->setText(QApplication::translate("AddItem", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("AddItem", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("AddItem", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_3->setText(QApplication::translate("AddItem", "\320\241\321\202\320\260\321\202\321\203\321\201", nullptr));
        label_4->setText(QApplication::translate("AddItem", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\272\321\203\320\277\320\272\320\270", nullptr));
        label_5->setText(QApplication::translate("AddItem", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270", nullptr));
        label_6->setText(QApplication::translate("AddItem", "\320\246\320\265\320\275\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270", nullptr));
        label_7->setText(QApplication::translate("AddItem", "\320\227\320\260\320\272\321\203\320\277\320\276\321\207\320\275\320\260\321\217 \321\206\320\265\320\275\320\260", nullptr));
        cmbStatus->setItemText(0, QApplication::translate("AddItem", "\320\235\320\260 \321\201\320\272\320\273\320\260\320\264\320\265", nullptr));
        cmbStatus->setItemText(1, QApplication::translate("AddItem", "\320\230\321\201\321\202\320\265\320\272 \321\201\321\200\320\276\320\272 \320\263\320\276\320\264\320\275\320\276\321\201\321\202\320\270", nullptr));
        cmbStatus->setItemText(2, QApplication::translate("AddItem", "\320\237\321\200\320\276\320\264\320\260\320\275", nullptr));
        cmbStatus->setItemText(3, QApplication::translate("AddItem", "\320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\265\320\275", nullptr));
        cmbStatus->setItemText(4, QApplication::translate("AddItem", "\320\221\321\200\320\260\320\272", nullptr));

        lblInfo->setText(QString());
        label_8->setText(QApplication::translate("AddItem", "Id", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
