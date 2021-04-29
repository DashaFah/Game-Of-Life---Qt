#ifndef MOUSEMOVEMENT_H
#define MOUSEMOVEMENT_H

#include <QWidget>
#include <QMouseEvent>
#include <QEvent>

class mousemovement : public QWidget
{
    Q_OBJECT
public:
    explicit mousemovement(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent *ev);
    int x;
    int y;

signals:
    void Mouse_Pos();
public slots:
};

#endif // MOUSEMOVEMENT_H
