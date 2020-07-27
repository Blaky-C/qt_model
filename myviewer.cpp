#include "myviewer.h"


MyViewer::MyViewer(QWidget *parent) : QWidget(parent) {

//    testLayout();


    this->setLayout(_view_layout);
//    _view_layout->setMargin(8);
    _view_layout->addWidget(new QOpenGLWidget(), 2);
    _view_layout->addSpacing(4);
//    _view_layout->addWidget(new QTextBrowser(), 1);
    _view_layout->addLayout(_operation_panel_layout, 1);

    _operation_panel_layout->addWidget(_function_panel_1 = new QGroupBox("Function Panel 1", this), 1);
    _operation_panel_layout->addWidget(_function_panel_2 = new QGroupBox("Function Panel 2", this), 1);
    _operation_panel_layout->addWidget(new QTextBrowser, 1);

    _function_panel_1->setLayout(_function_panel_1_layout);
    _function_panel_1_layout->addWidget(_button_1 = new QPushButton("Button 1", this), 0, 0);
    _function_panel_1_layout->addWidget(_button_2 = new QPushButton("Button 2", this), 0, 1);
    _function_panel_1_layout->addWidget(new QPushButton("Button 3", this), 1, 0);
    _function_panel_1_layout->addWidget(new QPushButton("Button 4", this), 1, 1);
    _function_panel_1_layout->addWidget(new QPushButton("Button 5", this), 2, 0);
    _function_panel_1_layout->addWidget(new QPushButton("Button 6", this), 2, 1);
    _function_panel_1_layout->setRowStretch(3, 1);

	
    _function_panel_2->setLayout(_function_panel_2_layout);
    /*_function_panel_2_layout->addWidget(new QPushButton("Button 1", this), 0, 0);
    _function_panel_2_layout->addWidget(new QPushButton("Button 2", this), 0, 1);
    _function_panel_2_layout->addWidget(new QPushButton("Button 3", this), 1, 0);
    _function_panel_2_layout->addWidget(new QPushButton("Button 4", this), 1, 1);
    _function_panel_2_layout->addWidget(new QPushButton("Button 5", this), 2, 0);
    _function_panel_2_layout->addWidget(new QPushButton("Button 6", this), 2, 1);*/

	connect(_button_1, SIGNAL(clicked()), this, SLOT(defaultSlot()));
	connect(_button_2, SIGNAL(clicked()), this, SLOT(showMessageBox()));

    qDebug() << "MyViewer finishes intializing.";
}

MyViewer::~MyViewer() {
	delete _button_1;
	delete _button_2;
	delete _function_panel_1_layout;
	delete _function_panel_2_layout;
	delete _function_panel_1;
	delete _function_panel_2;
	delete _operation_panel_layout;
	delete _view_layout;
}

void MyViewer::testLayout() {

    //    QPainter* p = new QPainter;
    //    p->fillRect(rect(), Qt::red);

    QPalette pal;
    pal.setColor(QPalette::Background, Qt::red);
    setAutoFillBackground(true);
    setPalette(pal);
}

bool MyViewer::showMessageBox() {
	return QMessageBox::question(this, "Q", "ready?", QMessageBox::Yes | QMessageBox::No);
}

void MyViewer::defaultSlot() {
	printf("Default button clicked slot.\n");
}

//void MyViewer::paintEvent(QPaintEvent *e) {
//    QPainter* p = new QPainter;
//    p->fillRect(rect(), Qt::red);
//}
