#ifndef MAINWINDOW_6D2_H
#define MAINWINDOW_6D2_H

#include <QMainWindow>

namespace Ui {
class MainWindow_6d2;
}

class MainWindow_6d2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_6d2(QWidget *parent = nullptr);
    ~MainWindow_6d2();

private:
    Ui::MainWindow_6d2 *ui;
};

#endif // MAINWINDOW_6D2_H
