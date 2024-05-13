/********************************************************************************
** Form generated from reading UI file 'returneditems.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNEDITEMS_H
#define UI_RETURNEDITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReturnedItems
{
public:
    QTableView *tableView;

    void setupUi(QDialog *ReturnedItems)
    {
        if (ReturnedItems->objectName().isEmpty())
            ReturnedItems->setObjectName(QString::fromUtf8("ReturnedItems"));
        ReturnedItems->resize(1060, 420);
        tableView = new QTableView(ReturnedItems);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1060, 420));

        retranslateUi(ReturnedItems);

        QMetaObject::connectSlotsByName(ReturnedItems);
    } // setupUi

    void retranslateUi(QDialog *ReturnedItems)
    {
        ReturnedItems->setWindowTitle(QApplication::translate("ReturnedItems", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnedItems: public Ui_ReturnedItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNEDITEMS_H
