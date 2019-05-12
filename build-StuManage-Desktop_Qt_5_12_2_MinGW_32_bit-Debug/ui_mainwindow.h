/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionaddStu;
    QAction *actionqueryStu;
    QAction *actionabout;
    QAction *actionhelp;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(550, 400);
        actionaddStu = new QAction(MainWindow);
        actionaddStu->setObjectName(QString::fromUtf8("actionaddStu"));
        actionqueryStu = new QAction(MainWindow);
        actionqueryStu->setObjectName(QString::fromUtf8("actionqueryStu"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 110, 531, 91));
        label->setStyleSheet(QString::fromUtf8("font: 87 48pt \"Arial Black\";\n"
"font: 36pt \"Arial\";\n"
"color: rgb(85, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 23));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionaddStu);
        menu->addAction(actionqueryStu);
        menu_2->addAction(actionabout);
        menu_2->addAction(actionhelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionaddStu->setText(QApplication::translate("MainWindow", "addStu", nullptr));
        actionqueryStu->setText(QApplication::translate("MainWindow", "queryStu", nullptr));
        actionabout->setText(QApplication::translate("MainWindow", "about", nullptr));
        actionhelp->setText(QApplication::translate("MainWindow", "help", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
