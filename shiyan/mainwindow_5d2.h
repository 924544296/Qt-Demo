#ifndef MAINWINDOW_5D2_H
#define MAINWINDOW_5D2_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QMessageBox>


namespace Ui {
class MainWindow_5d2;
}

class MainWindow_5d2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_5d2(QWidget *parent = nullptr);
    ~MainWindow_5d2();
    // --
    void receive_message();

private:
    Ui::MainWindow_5d2 *ui;
    // --
    int port=5555;
    QUdpSocket *pudpSocket;
};

#endif // MAINWINDOW_5D2_H
