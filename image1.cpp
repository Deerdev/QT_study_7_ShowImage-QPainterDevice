#include "image1.h"
#include <QImage>
#include <QRgb>


image1::image1(QWidget *parent) :
    QWidget(parent)
{
    setWindowTitle("QImage");

}

void image1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QImage image(3,3,QImage::Format_RGB32);//新建一个3x3的像素
    QRgb value;

    value = qRgb(189,149,39);
    image.setPixel(1,1,value);

    //painter.drawImage(10, 10,image);

    value = qRgb(122,163,39);
    image.setPixel(0,1,value);
    image.setPixel(1,0,value);
    //painter.drawImage(12,12,image);

    value = qRgb(237,187,51);
    image.setPixel(2,1,value);
    painter.drawImage(15,15,image);//像素级别的显示，非常小

    QImage image2;
    image2.load(":/qt-logo.png");
    painter.drawImage(20,20,image2);


}
