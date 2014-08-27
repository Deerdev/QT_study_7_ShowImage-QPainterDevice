#include "widget.h"
#include <QImage>
#include <QBitmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

}

Widget::~Widget()
{

}


void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap(":/qt-logo.png");
    QBitmap bitmap(":/qt-logo.png");
    painter.drawPixmap(10, 10, 250, 125, pixmap);
    painter.drawPixmap(270, 10, 250, 125, bitmap);
    QPixmap pixmap2(":/qt-logo-white.png");
    QBitmap bitmap2(":/qt-logo-white.png");
    painter.drawPixmap(10, 140, 250, 125, pixmap2);
    painter.drawPixmap(270, 140, 250, 125, bitmap2);
}
