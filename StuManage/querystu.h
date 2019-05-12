#ifndef QUERYSTU_H
#define QUERYSTU_H

#include <QDialog>
#include <QList>
#include <QStandardItem>//单元格
#include <QStandardItemModel>//表格
namespace Ui {
class queryStu;
}

class queryStu : public QDialog
{
    Q_OBJECT

public:
    explicit queryStu(QWidget *parent = nullptr);
    ~queryStu();
    //从文件中读取数据
    void ReadFromFile();
    //查询学生
    void Query(int index, QString cnt);
    //tableView的显示函数
    void DisPlay(int row, QStringList subs);
private slots:
    //查询按钮
    void on_btn_search_clicked();

private:
    Ui::queryStu *ui;
    //存储单个学生的信息
    QList<QString> stu_Lines;
    //tabelView模型
    QStandardItemModel* model;
};

#endif // QUERYSTU_H
