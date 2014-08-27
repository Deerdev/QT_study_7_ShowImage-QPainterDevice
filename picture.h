#ifndef PICTURE_H
#define PICTURE_H

#include <QWidget>
#include <QPushButton>

class picture : public QWidget
{
    Q_OBJECT
public:
    explicit picture(QWidget *parent = 0);

signals:

public slots:
    void savepicture();
    void reloadpicture();
//protected:
//    void paintEvent(QPaintEvent *);

private:
    QPushButton *b1;
    QPushButton *b2;

};

#endif // PICTURE_H
