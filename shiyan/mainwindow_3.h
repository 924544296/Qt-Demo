#ifndef MAINWINDOW_3_H
#define MAINWINDOW_3_H

#include <QMainWindow>
#include <QTimer>


namespace Ui {
class MainWindow_3;
}

class MainWindow_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_3(QWidget *parent = nullptr);
    ~MainWindow_3();
    // --
    void display_time();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow_3 *ui;
    // --
    QTimer *ptimer;
    int time=0;
};

#endif // MAINWINDOW_3_H
