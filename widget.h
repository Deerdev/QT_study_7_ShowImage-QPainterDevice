#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>

class Widget : public QWidget
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *);


public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
