#ifndef MAINWINDOW_4_H
#define MAINWINDOW_4_H

#include <QMainWindow>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QMessageBox>


namespace Ui {
class MainWindow_4;
}

class MainWindow_4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_4(QWidget *parent = nullptr);
    ~MainWindow_4();
    // --
    void get_host_information();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow_4 *ui;
};

#endif // MAINWINDOW_4_H
