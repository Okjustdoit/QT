#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include "handle.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //创建场景对象
    this->sc = new myScene;
    //在graphicsView显示
    this->ui->graphicsView->setScene(this->sc);
    //信号与槽
    connect(this->ui->btn_start,SIGNAL(clicked()), this->sc,SLOT(StartGame()));
    connect(this->ui->btn_stop,SIGNAL(clicked()),this->sc, SLOT(StopGame()));
    connect(this->ui->btn_pause,SIGNAL(clicked()),this->sc, SLOT(PauseGame()));
    //初始化score
    this->score = 0;
    //接收hand发出的信号
    connect(handle::getInstance(),SIGNAL(beatMouse()),this,SLOT(CacuScore()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    int ret = QMessageBox::question(this,"询问","是否关闭窗口","是","否");
    if(1 == ret)
    {
        event->ignore();
    }
}



void MainWindow::CacuScore()
{
    this->score += 10;
    this->ui->lcdNumber->display(score);
}
