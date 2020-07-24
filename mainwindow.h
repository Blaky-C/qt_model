#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "myviewer.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    MyViewer* _viewer;
//    QString _window_title = QString("[WindowTitle]");

private slots:

    void slotOpen();
};
#endif // MAINWINDOW_H
