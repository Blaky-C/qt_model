#ifndef MYAPPLICATION_H
#define MYAPPLICATION_H

#include <QApplication>

class MyApplication : public QApplication {
    Q_OBJECT
public:
    MyApplication(int argc, char* argv[]);

//    // send global notification
//    bool notify(QObject *, QEvent *) override;
};

#endif // MYAPPLICATION_H
