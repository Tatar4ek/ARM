/********************************************************************************
** Form generated from reading UI file 'itemsreport.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSREPORT_H
#define UI_ITEMSREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ItemsReport
{
public:
    QTableView *tableView;

    void setupUi(QDialog *ItemsReport)
    {
        if (ItemsReport->objectName().isEmpty())
            ItemsReport->setObjectName(QString::fromUtf8("ItemsReport"));
        ItemsReport->setWindowModality(Qt::WindowModal);
        ItemsReport->resize(1060, 420);
        tableView = new QTableView(ItemsReport);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1060, 420));

        retranslateUi(ItemsReport);

        QMetaObject::connectSlotsByName(ItemsReport);
    } // setupUi

    void retranslateUi(QDialog *ItemsReport)
    {
        ItemsReport->setWindowTitle(QApplication::translate("ItemsReport", "Report of Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemsReport: public Ui_ItemsReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSREPORT_H
