#include "mousemovement.h"

mousemovement::mousemovement(QWidget *parent) : QWidget(parent)
{
  this->setMouseTracking(true);

}

void mousemovement::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Pos();
}
