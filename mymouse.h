#ifndef MYMOUSE_H
#define MYMOUSE_H

#include <QWidget>

class myMouse : public QWidget
{
    Q_OBJECT
public:
    explicit myMouse(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent *ev);
    int x;
    int y;

signals:
    void Mouse_Pos();
public slots:
};

#endif // MYMOUSE_H
