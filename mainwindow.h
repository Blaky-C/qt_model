#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myviewer.h"

#include <QMainWindow>

#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QStatusBar>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    MyViewer* _viewer;
	QMenuBar* _menubar;
	QToolBar* _toolbar;
	QStatusBar* _statusbar;
	QLabel* _label;

private slots:

    void slotOpen();
};
#endif // MAINWINDOW_H
