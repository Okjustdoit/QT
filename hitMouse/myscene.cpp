#include "myscene.h"
#include "stdlib.h"
myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    /*
    //图元对象
    this->item = new myItem;
    this->item->setPos(0,0);
    //将图元放到场景中
    this->addItem(this->item);*/
    for(int i = 0; i < 16; i++)
    {
        this->item[i] = new myItem;
        //设置位置
        this->item[i]->setPos(i/4*this->item[i]->boundingRect().width(),i%4*this->item[i]->boundingRect().height());
        //将图元放到场景中
        this->addItem(this->item[i]);
    }
    //this->item[4]->setPic(":/mouse/pic/mouse2.jpg");
    //定时器
    this->pTimer = new QTimer;
    connect(this->pTimer,SIGNAL(timeout()),this,SLOT(showMouse()));

}

void myScene::showMouse()
{
    for(int i = 0; i < 16; i++)
    {
        this->item[i]->setPic(":bg/pic/bg.jpg");
        //不是地鼠
        this->item[i]->setMouse(false);
    }
    //随机数0-15
    int count = rand()%3 + 1;
    for(int i = 0; i < count; i++)
    {
        int index = rand()%16;
        this->item[index]->setPic(":/mouse/pic/mouse2.jpg");
        //是地鼠
        this->item[index]->setMouse(true);
    }
}

void myScene::StartGame()
{
    //开启定时器
    this->pTimer->start(1000);
    //设置游戏状态
    for(int i = 0; i < 16; i++)
    {
        this->item[i]->setStart(true);
    }
}

void myScene::PauseGame()
{
    this->pTimer->stop();
    //设置游戏状态
    for(int i = 0; i < 16; i++)
    {
        this->item[i]->setStart(false);
    }
}

void myScene::StopGame()
{
    this->pTimer->stop();
    //重置地图
    for(int i = 0; i < 16; i++)
    {
        this->item[i]->setPic(":bg/pic/bg.jpg");
        //不是地鼠
        this->item[i]->setMouse(false);
    }
    //设置游戏状态
    for(int i = 0; i < 16; i++)
    {
        this->item[i]->setStart(false);
    }
}
