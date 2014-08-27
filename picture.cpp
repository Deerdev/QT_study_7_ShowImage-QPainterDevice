#include "picture.h"
#include <QPainter>
#include <QPicture>

picture::picture(QWidget *parent) :
    QWidget(parent)
{
    resize(800,400);
    b1 = new QPushButton(this);
    b1->setText("save");
    b1->setGeometry(150,150,50,50);
    b2 = new QPushButton(this);
    b2->setText("load");
    b2->setGeometry(450,150,50,50);

    connect(b1,SIGNAL(clicked()),this,SLOT(savepicture()));
    connect(b2,SIGNAL(clicked()),this,SLOT(reloadpicture()));

}

void picture::savepicture()
{

}


void picture::reloadpicture()
{

}
