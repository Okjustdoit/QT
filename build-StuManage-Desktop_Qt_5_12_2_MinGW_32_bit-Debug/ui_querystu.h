/********************************************************************************
** Form generated from reading UI file 'querystu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSTU_H
#define UI_QUERYSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_queryStu
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbb_method;
    QLineEdit *le_cnt;
    QPushButton *btn_search;
    QTableView *tableView;

    void setupUi(QDialog *queryStu)
    {
        if (queryStu->objectName().isEmpty())
            queryStu->setObjectName(QString::fromUtf8("queryStu"));
        queryStu->resize(600, 300);
        verticalLayout = new QVBoxLayout(queryStu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cbb_method = new QComboBox(queryStu);
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->addItem(QString());
        cbb_method->setObjectName(QString::fromUtf8("cbb_method"));

        horizontalLayout->addWidget(cbb_method);

        le_cnt = new QLineEdit(queryStu);
        le_cnt->setObjectName(QString::fromUtf8("le_cnt"));

        horizontalLayout->addWidget(le_cnt);

        btn_search = new QPushButton(queryStu);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));

        horizontalLayout->addWidget(btn_search);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(queryStu);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setTextElideMode(Qt::ElideRight);

        verticalLayout->addWidget(tableView);


        retranslateUi(queryStu);

        QMetaObject::connectSlotsByName(queryStu);
    } // setupUi

    void retranslateUi(QDialog *queryStu)
    {
        queryStu->setWindowTitle(QApplication::translate("queryStu", "\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        cbb_method->setItemText(0, QApplication::translate("queryStu", "\350\257\267\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217", nullptr));
        cbb_method->setItemText(1, QApplication::translate("queryStu", "\346\214\211\345\247\223\345\220\215", nullptr));
        cbb_method->setItemText(2, QApplication::translate("queryStu", "\346\214\211\345\255\246\345\217\267", nullptr));
        cbb_method->setItemText(3, QApplication::translate("queryStu", "\346\214\211\351\231\242\347\263\273", nullptr));

        btn_search->setText(QApplication::translate("queryStu", "\345\274\200\345\247\213\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class queryStu: public Ui_queryStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSTU_H
