#include "myitem.h"
#include <QPixmap>
#include <QDebug>
#include "handle.h"
#include <QCursor>
myItem::myItem()//默认构造
{
    //将图片绑定到图元
    this->setPixmap(QPixmap(":/bg/pic/bg.jpg"));
    //初始化参数
    this->mouse = false;
    this->start = false;
}

void myItem::setPic(QString path)
{
    this->setPixmap(QPixmap(path));
}

void myItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    if(this->isStat())//开始游戏
    {
        //设置鼠标样式
        this->setCursor(QCursor(QPixmap(":/mouse/pic/chui1.jpg")));
        handle * hand = handle::getInstance();
        if(this->isMouse())
        {
            //qDebug() << "是地鼠";
            hand->addScore();
            //防止多次加分
            this->setMouse(false);
        }else {
            //qDebug() << "不是地鼠";
        }
    }


}

void myItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(QPixmap(":mouse/pic/chui2.jpg")));
}

void myItem::setMouse(bool ret)
{
    this->mouse = ret;
}

bool myItem::isMouse()
{
    return this->mouse;
}

void myItem::setStart(bool ret)
{
    this->start = ret;
}

bool myItem::isStat()
{
    return this->start;
}
