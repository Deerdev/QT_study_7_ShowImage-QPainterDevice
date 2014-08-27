#ifndef IMAGE1_H
#define IMAGE1_H

#include <QWidget>
#include <qpainter>


class image1 : public QWidget
{
    Q_OBJECT
public:
    explicit image1(QWidget *parent = 0);

signals:

public slots:
protected:
    void paintEvent(QPaintEvent *);

};

#endif // IMAGE1_H
