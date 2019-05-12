#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "querystu.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionaddStu_triggered()
{
    Dialog addStu;
    addStu.exec();
    //this->addStu.show();

}

void MainWindow::on_actionqueryStu_triggered()
{
    queryStu qStu;
    qStu.exec();
}
