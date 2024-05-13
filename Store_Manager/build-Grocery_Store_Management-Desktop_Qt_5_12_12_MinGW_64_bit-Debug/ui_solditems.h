/********************************************************************************
** Form generated from reading UI file 'solditems.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLDITEMS_H
#define UI_SOLDITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SoldItems
{
public:
    QTableView *tableView;

    void setupUi(QDialog *SoldItems)
    {
        if (SoldItems->objectName().isEmpty())
            SoldItems->setObjectName(QString::fromUtf8("SoldItems"));
        SoldItems->setWindowModality(Qt::WindowModal);
        SoldItems->resize(1060, 420);
        tableView = new QTableView(SoldItems);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 1060, 420));

        retranslateUi(SoldItems);

        QMetaObject::connectSlotsByName(SoldItems);
    } // setupUi

    void retranslateUi(QDialog *SoldItems)
    {
        SoldItems->setWindowTitle(QApplication::translate("SoldItems", "Sold Items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SoldItems: public Ui_SoldItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLDITEMS_H
