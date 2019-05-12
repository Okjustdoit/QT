#include "querystu.h"
#include "ui_querystu.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <QStringList>
#include <QDebug>

queryStu::queryStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::queryStu)
{
    ui->setupUi(this);
    ReadFromFile();
    this->model = new QStandardItemModel();
    //设置表头(属于model管)
    this->model->setHorizontalHeaderItem(0,new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1,new QStandardItem("学号"));
    this->model->setHorizontalHeaderItem(2,new QStandardItem("性别"));
    this->model->setHorizontalHeaderItem(3,new QStandardItem("年龄"));
    this->model->setHorizontalHeaderItem(4,new QStandardItem("院系"));
    this->model->setHorizontalHeaderItem(5,new QStandardItem("兴趣"));

    //显示
    this->ui->tableView->setModel(model);
    //设置列宽（属于view管）
    this->ui->tableView->setColumnWidth(0,50);
    this->ui->tableView->setColumnWidth(1,150);
    this->ui->tableView->setColumnWidth(2,50);
    this->ui->tableView->setColumnWidth(3,50);
    this->ui->tableView->setColumnWidth(4,100);
    this->ui->tableView->setColumnWidth(5,150);
}

queryStu::~queryStu()
{
    delete ui;
}

void queryStu::ReadFromFile()
{
    QFile file("StuInfo.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::critical(this,"错误","打开文件失败","确定");
        return;
    }
    QTextStream in(&file);
    while(!in.atEnd())//没有到文件末尾
    {
        QString line = in.readLine();
        stu_Lines.push_back(line);
    }
    file.close();


}



void queryStu::on_btn_search_clicked()
{
    int index = this->ui->cbb_method->currentIndex();
    QString cnt = this->ui->le_cnt->text();
    Query(index, cnt);
}
void queryStu::Query(int index, QString cnt)
{
    //显示的行
    int row = 0;
    //遍历列表
    for(int i = 0; i < stu_Lines.length(); i++)
    {
        QString line = stu_Lines.at(i);
        //去掉字符串中首尾的空格
        line = line.trimmed();
        //拆分字符串（以空格拆分）
        QStringList subs = line.split(" ");
        //按查询方式比较
        switch (index) {
        case 1://按姓名
            if(subs.at(0) == cnt)
            {
                DisPlay(row++,subs);
            }
            break;
        case 2://按学号
            if(subs.at(1) == cnt)
            {
                DisPlay(row++,subs);
            }
            break;
        case 3://按院系
            if(subs.at(4) == cnt)
            {
                DisPlay(row++,subs);
            }
            break;
        }
    }
}

void queryStu::DisPlay(int row, QStringList subs)
{
    //遍历学生信息
    for(int i = 0; i < 5; i++)
    {
        //显示学生信息
        this->model->setItem(row, i, new QStandardItem(subs.at(i)));
    }
    //整合所有兴趣
    QString ins;
    for(int i = 5; i < subs.length(); i++)
    {
        ins += subs.at(i);
    }
    this->model->setItem(row, 5, new QStandardItem(ins));
}
