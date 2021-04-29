#include "mymouse.h"

myMouse::myMouse(QWidget *parent) : QWidget(parent)
{

}
void myMouse::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Pos();
}
