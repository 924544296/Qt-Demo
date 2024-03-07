#ifndef MAINWINDOW_9_H
#define MAINWINDOW_9_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QKeyEvent>


namespace Ui {
class MainWindow_9;
}

class MainWindow_9 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_9(QWidget *parent = nullptr);
    ~MainWindow_9();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow_9 *ui;

protected:
    void mousePressEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
//    void keyPressEvent(QKeyEvent *event);
//    bool event(QEvent *event);
    bool eventFilter(QObject *target, QEvent *event);
};

#endif // MAINWINDOW_9_H
