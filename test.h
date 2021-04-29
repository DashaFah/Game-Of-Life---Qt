#ifndef TEST_H
#define TEST_H

#include <QWidget>
#include <QEvent>
#include <QMouseEvent>

class test
{
public:
    test();

    void mouseMoveEvent(QMouseEvent *ev);
    int x;
    int y;

signals:
    void Mouse_Pos();

};

#endif // TEST_H
