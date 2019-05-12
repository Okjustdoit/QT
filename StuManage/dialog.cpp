#include "dialog.h"
#include "ui_dialog.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>//信息窗口
#include <QPushButton>
#include <QButtonGroup>
#include <QAbstractButton>
#include <QButtonGroup>
#include <QList>
#include <QFile>
#include <QTextStream>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(this->ui->btn_cancle,SIGNAL(clicked(bool)),this,SLOT(close()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_ok_clicked()
{
    QString name = this->ui->le_name->text();
    QString id = this->ui->le_id->text();
    //qDebug() << name << '\t' << id;
    /*
    QMessageBox msgBox;
    msgBox.setText("请确认信息");
    msgBox.setInformativeText(name+'\n'+id);
    //标准按钮
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    //添加自定义按钮
    QPushButton* defaultBut = msgBox.addButton("确定",QMessageBox::AcceptRole);
    //设置默认按钮
    msgBox.setDefaultButton(defaultBut);
    msgBox.addButton("取消",QMessageBox::RejectRole);
    msgBox.exec();
    */

    /* */
    QButtonGroup* sexGroup = new QButtonGroup(this);
    sexGroup->addButton(this->ui->rbtn_male);
    sexGroup->addButton(this->ui->rbtn_fmale);
    //bool isMale = this->ui->rbtn_male->isChecked();
    QString sex = sexGroup->checkedButton()->text();//获取选中按钮的文本
    /*
    if(isMale)
    {
        sex = "男";
    }else
    {
        sex = this->ui->rbtn_fmale->text();
    }
    */
    QButtonGroup interestGroup;
    interestGroup.addButton(this->ui->cb_basket);
    interestGroup.addButton(this->ui->cb_shutt);
    interestGroup.addButton(this->ui->cb_soccer);
    interestGroup.addButton(this->ui->cb_volleyball);

    /**/
    QList<QAbstractButton *>inter_List = interestGroup.buttons();
    QString ints;
    int i = 0;
    for(i = 0; i < inter_List.length();i++)
    {
        QAbstractButton* che = inter_List.at(i);
        if(che->isChecked())
        {
            ints += che->text() + " ";
        }
    }
    //qDebug()<< inter_List.length();


    QString age = this->ui->cbb_age->currentText();
    QString yx = this->ui->cbb_yx->currentText();
    int ret = 0;
    QString content = name+'\n'+id +'\n'+ sex + '\n'+age+'\n' + yx + '\n'+ints;
    QString cnt = name+' '+id +' '+ sex + ' '+age+' ' + yx + ' '+ints + '\n';
    if(name.length() < 1 || id.length() < 1)
    {
        //提示窗口
        QMessageBox::critical(this,"错误","输入不完整","确认");
    }
    else {
        ret = QMessageBox::question(this, "请确认信息",content,"确认","取消");
    }
    if(0 == ret)
    {
        ClearUserInterface();
        WriteToFile(cnt);
    }

    //https://blog.csdn.net/lu_embedded/article/details/50482356
}
void Dialog::ClearUserInterface()
{
    this->ui->le_name->clear();
    this->ui->le_id->clear();
    this->ui->rbtn_male->setChecked(true);
    this->ui->cbb_age->setCurrentIndex(0);
    this->ui->cbb_yx->setCurrentIndex(0);
    //清除复选框
    QButtonGroup interestGroup;
    interestGroup.addButton(this->ui->cb_basket);
    interestGroup.addButton(this->ui->cb_shutt);
    interestGroup.addButton(this->ui->cb_soccer);
    interestGroup.addButton(this->ui->cb_volleyball);

    QList<QAbstractButton *>inter_List = interestGroup.buttons();

    int i = 0;
    for(i = 0; i < inter_List.length();i++)
    {
        QAbstractButton* che = inter_List.at(i);
        che->setChecked(false);

    }
    //设置光标
    this->ui->le_name->setFocus();
}

void Dialog::WriteToFile(QString cnt)
{
    QFile file("StuInfo.txt");
    if(!file.open(QIODevice::Append | QIODevice::Text))
    {
        QMessageBox::critical(this,"错误","打开文件失败","确定");
        return;
    }
    QTextStream out(&file);
    out << cnt;
    file.close();
}
