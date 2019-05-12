#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myscene.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //重写关闭窗口事件
    void closeEvent(QCloseEvent *event);
private slots:
    //计算得分
    void CacuScore();
private:
    Ui::MainWindow *ui;
    myScene* sc;
    int score;//非全局变量得初始化
};

#endif // MAINWINDOW_H
