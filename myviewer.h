#ifndef MYVIEWER_H
#define MYVIEWER_H

#include <QWidget>

#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QTextBrowser>
#include <QCompleter>
#include <QFileDialog>
#include <QMessageBox>
#include <QOpenGLWidget>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>

#include <QPainter>
#include <QPalette>

#include <QDebug>

class MyViewer : public QWidget {
    Q_OBJECT
public:
    explicit MyViewer(QWidget *parent = nullptr);
	~MyViewer();

//    void paintEvent(QPaintEvent *e);

	// set entire layout
	QHBoxLayout* _view_layout = new QHBoxLayout; // layout 1
	QVBoxLayout* _operation_panel_layout = new QVBoxLayout; // layout 2
	QGridLayout* _function_panel_1_layout = new QGridLayout; // layout 3
	QGridLayout* _function_panel_2_layout = new QGridLayout; // layout 3

	QGroupBox* _function_panel_1;
	QGroupBox* _function_panel_2;

	QPushButton *_button_1, *_button_2;
private:
    void testLayout();

signals:

private slots:
	void defaultSlot();
	bool showMessageBox();
};

#endif // MYVIEWER_H
