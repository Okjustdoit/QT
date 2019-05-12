/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QRadioButton *rbtn_male;
    QRadioButton *rbtn_fmale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cbb_age;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbb_yx;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QGridLayout *gridLayout;
    QCheckBox *cb_basket;
    QCheckBox *cb_volleyball;
    QCheckBox *cb_shutt;
    QCheckBox *cb_soccer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancle;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(360, 480);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setAcceptDrops(false);
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("font: 28pt \"Arial\";\n"
"color: rgb(170, 0, 0);"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_13->addWidget(label_12);

        le_name = new QLineEdit(Dialog);
        le_name->setObjectName(QString::fromUtf8("le_name"));

        horizontalLayout_13->addWidget(le_name);

        horizontalLayout_13->setStretch(0, 1);
        horizontalLayout_13->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        le_id = new QLineEdit(Dialog);
        le_id->setObjectName(QString::fromUtf8("le_id"));

        horizontalLayout->addWidget(le_id);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        rbtn_male = new QRadioButton(Dialog);
        rbtn_male->setObjectName(QString::fromUtf8("rbtn_male"));
        rbtn_male->setAutoExclusive(true);

        horizontalLayout_2->addWidget(rbtn_male);

        rbtn_fmale = new QRadioButton(Dialog);
        rbtn_fmale->setObjectName(QString::fromUtf8("rbtn_fmale"));
        rbtn_fmale->setAutoExclusive(true);

        horizontalLayout_2->addWidget(rbtn_fmale);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        horizontalLayout_2->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cbb_age = new QComboBox(Dialog);
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->addItem(QString());
        cbb_age->setObjectName(QString::fromUtf8("cbb_age"));

        horizontalLayout_3->addWidget(cbb_age);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cbb_yx = new QComboBox(Dialog);
        cbb_yx->addItem(QString());
        cbb_yx->addItem(QString());
        cbb_yx->addItem(QString());
        cbb_yx->addItem(QString());
        cbb_yx->setObjectName(QString::fromUtf8("cbb_yx"));

        horizontalLayout_4->addWidget(cbb_yx);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);
        horizontalLayout_4->setStretch(2, 4);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cb_basket = new QCheckBox(Dialog);
        cb_basket->setObjectName(QString::fromUtf8("cb_basket"));

        gridLayout->addWidget(cb_basket, 0, 0, 1, 1);

        cb_volleyball = new QCheckBox(Dialog);
        cb_volleyball->setObjectName(QString::fromUtf8("cb_volleyball"));

        gridLayout->addWidget(cb_volleyball, 0, 1, 1, 1);

        cb_shutt = new QCheckBox(Dialog);
        cb_shutt->setObjectName(QString::fromUtf8("cb_shutt"));

        gridLayout->addWidget(cb_shutt, 1, 0, 1, 1);

        cb_soccer = new QCheckBox(Dialog);
        cb_soccer->setObjectName(QString::fromUtf8("cb_soccer"));

        gridLayout->addWidget(cb_soccer, 1, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 8);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_ok = new QPushButton(Dialog);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));

        horizontalLayout_6->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btn_cancle = new QPushButton(Dialog);
        btn_cancle->setObjectName(QString::fromUtf8("btn_cancle"));

        horizontalLayout_6->addWidget(btn_cancle);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_6->setText(QApplication::translate("Dialog", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_12->setText(QApplication::translate("Dialog", "\345\247\223\345\220\215", nullptr));
        le_name->setPlaceholderText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", nullptr));
        label->setText(QApplication::translate("Dialog", "\345\255\246\345\217\267", nullptr));
        le_id->setPlaceholderText(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\346\200\247\345\210\253", nullptr));
        rbtn_male->setText(QApplication::translate("Dialog", "\347\224\267", nullptr));
        rbtn_fmale->setText(QApplication::translate("Dialog", "\345\245\263", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\345\271\264\351\276\204", nullptr));
        cbb_age->setItemText(0, QApplication::translate("Dialog", "18", nullptr));
        cbb_age->setItemText(1, QApplication::translate("Dialog", "19", nullptr));
        cbb_age->setItemText(2, QApplication::translate("Dialog", "20", nullptr));
        cbb_age->setItemText(3, QApplication::translate("Dialog", "21", nullptr));
        cbb_age->setItemText(4, QApplication::translate("Dialog", "22", nullptr));

        label_4->setText(QApplication::translate("Dialog", "\351\231\242\347\263\273", nullptr));
        cbb_yx->setItemText(0, QApplication::translate("Dialog", "\346\225\231\350\202\262\345\255\246\351\231\242", nullptr));
        cbb_yx->setItemText(1, QApplication::translate("Dialog", "\347\224\265\345\255\220\344\277\241\346\201\257\344\270\216\347\224\265\346\260\224\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        cbb_yx->setItemText(2, QApplication::translate("Dialog", "\346\225\260\345\255\246\344\270\216\345\244\247\346\225\260\346\215\256\345\255\246\351\231\242", nullptr));
        cbb_yx->setItemText(3, QApplication::translate("Dialog", "\351\237\263\344\271\220\345\255\246\351\231\242", nullptr));

        label_5->setText(QApplication::translate("Dialog", "\345\205\264\350\266\243", nullptr));
        cb_basket->setText(QApplication::translate("Dialog", "\347\257\256\347\220\203", nullptr));
        cb_volleyball->setText(QApplication::translate("Dialog", "\346\216\222\347\220\203", nullptr));
        cb_shutt->setText(QApplication::translate("Dialog", "\347\276\275\346\257\233\347\220\203", nullptr));
        cb_soccer->setText(QApplication::translate("Dialog", "\350\266\263\347\220\203", nullptr));
        btn_ok->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btn_cancle->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
