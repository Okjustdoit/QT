#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>//时间
#include <QTimer>//定时器
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//槽函数
private slots:
    //更新时间和显示
    void UpdateTimeAndDisplay();
    //开始按钮
    void on_btn_start_clicked();
    //停止按钮
    void on_btn_stop_clicked();
    //暂停按钮
    void on_btn_pause_clicked();
    //打点按钮
    void RecordTime();

private:
    Ui::MainWindow *ui;
    //时间对象
    QTime baseTime;
    //定时器对象
    QTimer pTimer;
    //时间的字符串形式
    QString showStr;
};

#endif // MAINWINDOW_H
