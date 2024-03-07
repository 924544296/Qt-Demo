#ifndef MAINWINDOW_6D1_H
#define MAINWINDOW_6D1_H

#include <QMainWindow>

namespace Ui {
class MainWindow_6d1;
}

class MainWindow_6d1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_6d1(QWidget *parent = nullptr);
    ~MainWindow_6d1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow_6d1 *ui;
};

#endif // MAINWINDOW_6D1_H
