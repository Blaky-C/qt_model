#include "myviewer.h"

#include <QPainter>
#include <QPalette>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>

#include <QOpenGLWidget>
#include <QTextEdit>
#include <QTextBrowser>
#include <QPushButton>

MyViewer::MyViewer(QWidget *parent) : QWidget(parent) {

//    testLayout();

    // set entire layout
    QHBoxLayout* _view_layout = new QHBoxLayout; // layout 1
    QVBoxLayout* _operation_panel_layout = new QVBoxLayout; // layout 2
    QGridLayout* _function_panel_1_layout = new QGridLayout; // layout 3
    QGridLayout* _function_panel_2_layout = new QGridLayout; // layout 3

    this->setLayout(_view_layout);
//    _view_layout->setMargin(8);
    _view_layout->addWidget(new QOpenGLWidget(), 2);
    _view_layout->addSpacing(4);
//    _view_layout->addWidget(new QTextBrowser(), 1);
    _view_layout->addLayout(_operation_panel_layout, 1);

    QGroupBox* _function_panel_1;
    QGroupBox* _function_panel_2;
    _operation_panel_layout->addWidget(_function_panel_1 = new QGroupBox("Function Panel 1", this), 1);
    _operation_panel_layout->addWidget(_function_panel_2 = new QGroupBox("Function Panel 2", this), 1);
    _operation_panel_layout->addWidget(new QTextBrowser, 1);

    _function_panel_1->setLayout(_function_panel_1_layout);
    _function_panel_1_layout->addWidget(new QPushButton("Button 1", this), 0, 0);
    _function_panel_1_layout->addWidget(new QPushButton("Button 2", this), 0, 1);
    _function_panel_1_layout->addWidget(new QPushButton("Button 3", this), 1, 0);
    _function_panel_1_layout->addWidget(new QPushButton("Button 4", this), 1, 1);
    _function_panel_1_layout->addWidget(new QPushButton("Button 5", this), 2, 0);
    _function_panel_1_layout->addWidget(new QPushButton("Button 6", this), 2, 1);
    _function_panel_1_layout->setRowStretch(3, 1);


    _function_panel_2->setLayout(_function_panel_2_layout);
    _function_panel_2_layout->addWidget(new QPushButton("Button 1", this), 0, 0);
    _function_panel_2_layout->addWidget(new QPushButton("Button 2", this), 0, 1);
    _function_panel_2_layout->addWidget(new QPushButton("Button 3", this), 1, 0);
    _function_panel_2_layout->addWidget(new QPushButton("Button 4", this), 1, 1);
    _function_panel_2_layout->addWidget(new QPushButton("Button 5", this), 2, 0);
    _function_panel_2_layout->addWidget(new QPushButton("Button 6", this), 2, 1);
    _function_panel_2_layout->setRowStretch(3, 1);




    qDebug() << "MyViewer has been intialized.";
}

void MyViewer::testLayout() {

    //    QPainter* p = new QPainter;
    //    p->fillRect(rect(), Qt::red);

    QPalette pal;
    pal.setColor(QPalette::Background, Qt::red);
    setAutoFillBackground(true);
    setPalette(pal);
}

//void MyViewer::paintEvent(QPaintEvent *e) {
//    QPainter* p = new QPainter;
//    p->fillRect(rect(), Qt::red);
//}
