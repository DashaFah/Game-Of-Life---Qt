#ifndef MOUSEMOVE_H
#define MOUSEMOVE_H

#include <QWidget>
#include <QEvent>
#include <QMouseEvent>

class MouseMove : public QWidget
{
    Q_OBJECT
public:
    explicit MouseMove(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent *ev);
    int x;
    int y;

signals:
    void Mouse_Pos();

public slots:
};

#endif // MOUSEMOVE_H
