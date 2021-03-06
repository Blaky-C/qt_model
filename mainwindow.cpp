#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {

    // initialize
    setWindowTitle("[[Window Title]");
    setWindowIcon(QIcon(("../icons/title_icon.ico")));
    setGeometry(300, 300, 960, 640);
    qDebug() << "MainWindow finishes intializing.";

    // set menubar
    _menubar = menuBar(); // 样式需要调整
    QMenu* _file_menu = _menubar->addMenu("File");
    QAction* _open_action = _file_menu->addAction("Open", this, SLOT(slotOpen()), QKeySequence::Open);
    _open_action->setIcon(QIcon("../icons/m8.ico"));
    QAction* _save_action = _file_menu->addAction("Save", this, SLOT(close()), QKeySequence::Save);
    _file_menu->addSeparator();
    QAction* _close_action = _file_menu->addAction("Close", this, SLOT(close()), QKeySequence::Close);
    _close_action->setToolTip("Click to close window");

    // set toolbar
    _toolbar = addToolBar("My Toolbar");
    _toolbar->addAction(_open_action);
    _toolbar->addAction(_save_action);

    // set statusbar
    _statusbar = statusBar();
    _statusbar->addWidget(_label = new QLabel());
    _label->setText("<font style='bold'>Ready</font>");

    // initialize viewer
    _viewer = new MyViewer;
    this->setCentralWidget(_viewer);
//    _viewer->show();

}

MainWindow::~MainWindow() {
	delete _label;
	delete _menubar;
	delete _toolbar;
	delete _statusbar;
	delete _viewer;
}


// private slot
void MainWindow::slotOpen() {
    QString str_file = QFileDialog::getOpenFileName();
    qDebug() << str_file;
}
