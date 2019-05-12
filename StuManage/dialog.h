#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    //清空用户输入界面
    void ClearUserInterface();
    //写入文件
    void WriteToFile(QString cnt);
private slots:
    //按下确定按钮
    void on_btn_ok_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
