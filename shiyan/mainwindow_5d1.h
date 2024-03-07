#ifndef MAINWINDOW_5D1_H
#define MAINWINDOW_5D1_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QTimer>


namespace Ui {
class MainWindow_5d1;
}

class MainWindow_5d1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_5d1(QWidget *parent = nullptr);
    ~MainWindow_5d1();
    // --
    void send_message();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow_5d1 *ui;
    // --
    bool start=true;
    int port=5555;
    QUdpSocket *pudpSocket;
    QTimer *ptimer;
};

#endif // MAINWINDOW_5D1_H
