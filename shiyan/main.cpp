#include "widget.h"
#include <QApplication>
//#include "mainwindow_8.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget *w = new Widget;
//    MainWindow_8 *login = new MainWindow_8;
//    login->show();
//    QObject::connect(login, &MainWindow_8::done_login, w, &Widget::show);
    w->show();

    return a.exec();
    delete w;
}
