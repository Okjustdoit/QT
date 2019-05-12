#ifndef HANDLE_H
#define HANDLE_H

#include <QObject>
//单例模式
class handle : public QObject
{
    Q_OBJECT
private:
    explicit handle(QObject *parent = nullptr);

signals://自定义信号
    void beatMouse();

public slots:
private:
    static handle* hand;
    //int score;
public:
    static handle* getInstance();
    //计算得分
    void addScore();
};

#endif // HANDLE_H
