#ifndef MYITEM_H
#define MYITEM_H
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>
class myItem : public QGraphicsPixmapItem
{
public:
    myItem();
    void setPic(QString path);
    //重写鼠标按下事件
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //重写鼠标抬起事件

    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

    void setMouse(bool ret);
    bool isMouse();
    void setStart(bool ret);
    bool isStat();
private:
    //是否有地鼠
    bool mouse;
    //游戏状态
    bool start;
};

#endif // MYITEM_H
