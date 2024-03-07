#ifndef MAINWINDOW_2_H
#define MAINWINDOW_2_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>


namespace Ui {
class MainWindow_2;
}

class MainWindow_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_2(QWidget *parent = nullptr);
    ~MainWindow_2();

private slots:
    void display_time();

private:
    Ui::MainWindow_2 *ui;
    // --
    QTimer *ptimer;
    bool colon=true;
};

#endif // MAINWINDOW_2_H
