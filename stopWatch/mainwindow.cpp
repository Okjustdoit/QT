#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //定时器连接
    connect(&this->pTimer,SIGNAL(timeout()), this, SLOT(UpdateTimeAndDisplay()));
    //打点信号与槽
    connect(this->ui->btn_log,SIGNAL(clicked()),this, SLOT(RecordTime()));
    this->ui->btn_pause->setEnabled(false);
    this->ui->btn_stop->setEnabled(false);
    this->ui->btn_log->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateTimeAndDisplay()
{
    //获取当前时间
    QTime currentTime = QTime::currentTime();
    //当前时间与基准时间相减
    int sub = this->baseTime.msecsTo(currentTime);
    /*时钟
    this->baseTime = this->baseTime.addMSecs(sub);
    //转成字符串
    QString time =  this->baseTime.toString("hh:mm:ss:zzz");
    */
    /*秒表*/
    QTime showTime(0,0);
    showTime = showTime.addMSecs(sub);
    this->showStr = showTime.toString("hh:mm:ss:zzz");
    //显示
    this->ui->lcdNumber->display(showStr);
}

void MainWindow::on_btn_start_clicked()
{
    //获取当前时间
    this->baseTime = QTime::currentTime();
    //this->baseTime.setHMS(0,0,0);//设置初始时间00:00:00
    pTimer.start(1);//1毫秒
    //设置点击后不可再点击
    this->ui->btn_start->setEnabled(false);
    this->ui->btn_pause->setEnabled(true);
    this->ui->btn_stop->setEnabled(true);
    this->ui->btn_log->setEnabled(true);
}

void MainWindow::on_btn_stop_clicked()
{
    if(this->ui->btn_stop->text() == "停止")
    {
        this->ui->btn_stop->setText("清零");
        //停止定时器
        this->pTimer.stop();
        this->ui->btn_pause->setEnabled(false);
        this->ui->btn_start->setEnabled(false);
    }else {
        this->ui->btn_stop->setText("停止");
        //清空显示屏lcd
        this->ui->lcdNumber->display("00:00:00:00");
        //清空打点屏textbrowser
        this->ui->textBrowser->clear();

        //设置点击后不可再点击
        this->ui->btn_start->setEnabled(true);
        this->ui->btn_pause->setEnabled(false);
        this->ui->btn_stop->setEnabled(false);
        this->ui->btn_log->setEnabled(false);
    }

}

void MainWindow::on_btn_pause_clicked()
{
    static QTime pauseTime;
    if(this->ui->btn_pause->text() == "暂停")
    {
        this->ui->btn_pause->setText("继续");
        //停止定时器
        this->pTimer.stop();
        //记录按下暂停时的时间
        pauseTime = QTime::currentTime();
        this->ui->btn_stop->setEnabled(false);
        this->ui->btn_start->setEnabled(false);
    }else {
        this->ui->btn_pause->setText("暂停");
        //记录按下继续时的时间
        QTime cur = QTime::currentTime();
        //求暂停时间
        int t = pauseTime.msecsTo(cur);
        //基准时间加上暂停的时间
        this->baseTime = this->baseTime.addMSecs(t);
        //定时器开始
        this->pTimer.start();

        //设置点击后不可再点击
        this->ui->btn_start->setEnabled(false);
        this->ui->btn_pause->setEnabled(true);
        this->ui->btn_stop->setEnabled(true);
        this->ui->btn_log->setEnabled(true);
    }
}
void MainWindow::RecordTime()
{
    //在tect Browser上显示文本
    this->ui->textBrowser->append(showStr);
}
