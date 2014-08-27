#include "widget.h"
#include "image1.h"
#include "picture.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    image1 w2;
    w2.show();

//    picture w3;
//    w3.show();

    return a.exec();
}
