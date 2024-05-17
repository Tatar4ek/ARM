/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnAddItem;
    QPushButton *btnUpdateItem;
    QPushButton *btnAvailableItems;
    QPushButton *btnSoldItems;
    QPushButton *btnReport;
    QPushButton *btnExpiredItems;
    QPushButton *btnSpoiledItem;
    QPushButton *btnReturnItems;
    QPushButton *btnFindItem;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 260);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnAddItem = new QPushButton(centralWidget);
        btnAddItem->setObjectName(QString::fromUtf8("btnAddItem"));
        btnAddItem->setGeometry(QRect(9, 10, 121, 70));
        QFont font;
        font.setPointSize(11);
        btnAddItem->setFont(font);
        btnUpdateItem = new QPushButton(centralWidget);
        btnUpdateItem->setObjectName(QString::fromUtf8("btnUpdateItem"));
        btnUpdateItem->setGeometry(QRect(140, 10, 100, 70));
        btnUpdateItem->setFont(font);
        btnAvailableItems = new QPushButton(centralWidget);
        btnAvailableItems->setObjectName(QString::fromUtf8("btnAvailableItems"));
        btnAvailableItems->setGeometry(QRect(140, 90, 100, 70));
        btnAvailableItems->setFont(font);
        btnSoldItems = new QPushButton(centralWidget);
        btnSoldItems->setObjectName(QString::fromUtf8("btnSoldItems"));
        btnSoldItems->setGeometry(QRect(250, 90, 100, 70));
        btnSoldItems->setFont(font);
        btnReport = new QPushButton(centralWidget);
        btnReport->setObjectName(QString::fromUtf8("btnReport"));
        btnReport->setGeometry(QRect(370, 10, 241, 151));
        btnReport->setFont(font);
        btnExpiredItems = new QPushButton(centralWidget);
        btnExpiredItems->setObjectName(QString::fromUtf8("btnExpiredItems"));
        btnExpiredItems->setGeometry(QRect(9, 90, 121, 70));
        btnExpiredItems->setFont(font);
        btnSpoiledItem = new QPushButton(centralWidget);
        btnSpoiledItem->setObjectName(QString::fromUtf8("btnSpoiledItem"));
        btnSpoiledItem->setGeometry(QRect(9, 170, 121, 70));
        QFont font1;
        font1.setPointSize(10);
        btnSpoiledItem->setFont(font1);
        btnReturnItems = new QPushButton(centralWidget);
        btnReturnItems->setObjectName(QString::fromUtf8("btnReturnItems"));
        btnReturnItems->setGeometry(QRect(140, 170, 131, 70));
        btnReturnItems->setFont(font);
        btnFindItem = new QPushButton(centralWidget);
        btnFindItem->setObjectName(QString::fromUtf8("btnFindItem"));
        btnFindItem->setGeometry(QRect(250, 10, 100, 70));
        btnFindItem->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 170, 341, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Black"));
        font2.setPointSize(12);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Grocery Store Manager 1.0", nullptr));
        btnAddItem->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214\n"
" \320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
        btnUpdateItem->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
        btnAvailableItems->setText(QApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        btnSoldItems->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\275\320\275\321\213\320\265\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        btnReport->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\321\221\321\202\n"
"(\320\222\321\213\320\267\320\276\320\262 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205)", nullptr));
        btnExpiredItems->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\200\320\276\321\207\320\265\320\275\320\275\321\213\320\265\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        btnSpoiledItem->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\261\321\200\320\260\320\272\320\276\320\262\320\260\320\275\320\275\321\213\320\265\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        btnReturnItems->setText(QApplication::translate("MainWindow", "\320\222\320\276\320\267\320\262\321\200\320\260\321\211\320\265\320\275\320\275\321\213\320\265\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\213", nullptr));
        btnFindItem->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270\n"
"\320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\220\320\240\320\234 \320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200\320\260 \320\277\320\276 \320\277\321\200\320\276\320\264\320\260\320\266\320\260\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
