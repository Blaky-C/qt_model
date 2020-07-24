#ifndef MYVIEWER_H
#define MYVIEWER_H

#include <QWidget>

class MyViewer : public QWidget {
    Q_OBJECT
public:
    explicit MyViewer(QWidget *parent = nullptr);

//    void paintEvent(QPaintEvent *e);

private:
    void testLayout();

signals:



};

#endif // MYVIEWER_H
