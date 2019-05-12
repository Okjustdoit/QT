#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include <QGraphicsScene>
#include "myitem.h"
#include <QTimer>
class myScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit myScene(QObject *parent = nullptr);

signals:

public slots:
    //在场景中显示地鼠
    void showMouse();
    //开始
    void StartGame();
    //暂停
    void PauseGame();
    //停止
    void StopGame();
private:
    myItem* item[16];
    QTimer* pTimer;
};

#endif // MYSCENE_H
