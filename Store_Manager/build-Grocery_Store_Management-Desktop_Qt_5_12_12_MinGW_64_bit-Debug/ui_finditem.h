/********************************************************************************
** Form generated from reading UI file 'finditem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDITEM_H
#define UI_FINDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindItem
{
public:
    QPushButton *btnFind;
    QLineEdit *txtValue;
    QGroupBox *groupBox;
    QRadioButton *rdoName;
    QRadioButton *rdoId;
    QRadioButton *rdoQuantity;
    QRadioButton *rdoSellingPrice;
    QTableView *tableView;

    void setupUi(QDialog *FindItem)
    {
        if (FindItem->objectName().isEmpty())
            FindItem->setObjectName(QString::fromUtf8("FindItem"));
        FindItem->resize(670, 240);
        btnFind = new QPushButton(FindItem);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setGeometry(QRect(230, 10, 75, 23));
        txtValue = new QLineEdit(FindItem);
        txtValue->setObjectName(QString::fromUtf8("txtValue"));
        txtValue->setGeometry(QRect(20, 10, 201, 20));
        groupBox = new QGroupBox(FindItem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 421, 51));
        rdoName = new QRadioButton(groupBox);
        rdoName->setObjectName(QString::fromUtf8("rdoName"));
        rdoName->setGeometry(QRect(60, 20, 121, 31));
        rdoId = new QRadioButton(groupBox);
        rdoId->setObjectName(QString::fromUtf8("rdoId"));
        rdoId->setGeometry(QRect(0, 20, 61, 31));
        rdoQuantity = new QRadioButton(groupBox);
        rdoQuantity->setObjectName(QString::fromUtf8("rdoQuantity"));
        rdoQuantity->setGeometry(QRect(320, 20, 101, 31));
        rdoSellingPrice = new QRadioButton(groupBox);
        rdoSellingPrice->setObjectName(QString::fromUtf8("rdoSellingPrice"));
        rdoSellingPrice->setGeometry(QRect(190, 20, 121, 31));
        tableView = new QTableView(FindItem);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 90, 631, 141));

        retranslateUi(FindItem);

        QMetaObject::connectSlotsByName(FindItem);
    } // setupUi

    void retranslateUi(QDialog *FindItem)
    {
        FindItem->setWindowTitle(QApplication::translate("FindItem", "Find Items", nullptr));
        btnFind->setText(QApplication::translate("FindItem", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        groupBox->setTitle(QApplication::translate("FindItem", "\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\271 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        rdoName->setText(QApplication::translate("FindItem", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        rdoId->setText(QApplication::translate("FindItem", "Id", nullptr));
        rdoQuantity->setText(QApplication::translate("FindItem", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        rdoSellingPrice->setText(QApplication::translate("FindItem", "\320\246\320\265\320\275\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindItem: public Ui_FindItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDITEM_H
