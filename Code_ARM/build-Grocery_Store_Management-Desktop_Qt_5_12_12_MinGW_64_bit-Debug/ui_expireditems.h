/********************************************************************************
** Form generated from reading UI file 'expireditems.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPIREDITEMS_H
#define UI_EXPIREDITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ExpiredItems
{
public:
    QTableView *tableView;

    void setupUi(QDialog *ExpiredItems)
    {
        if (ExpiredItems->objectName().isEmpty())
            ExpiredItems->setObjectName(QString::fromUtf8("ExpiredItems"));
        ExpiredItems->resize(1060, 420);
        tableView = new QTableView(ExpiredItems);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1060, 420));

        retranslateUi(ExpiredItems);

        QMetaObject::connectSlotsByName(ExpiredItems);
    } // setupUi

    void retranslateUi(QDialog *ExpiredItems)
    {
        ExpiredItems->setWindowTitle(QApplication::translate("ExpiredItems", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExpiredItems: public Ui_ExpiredItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPIREDITEMS_H
