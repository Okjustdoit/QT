#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //触发添加学生菜单
    void on_actionaddStu_triggered();
    //触发查询学生菜单
    void on_actionqueryStu_triggered();

private:
    Ui::MainWindow *ui;
    //Dialog addStu;
};

#endif // MAINWINDOW_H
