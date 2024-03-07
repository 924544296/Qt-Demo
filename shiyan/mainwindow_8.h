#ifndef MAINWINDOW_8_H
#define MAINWINDOW_8_H

#include <QMainWindow>
#include <QMessageBox>


namespace Ui {
class MainWindow_8;
}

class MainWindow_8 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_8(QWidget *parent = nullptr);
    ~MainWindow_8();

signals:
    void done_login();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow_8 *ui;
};

#endif // MAINWINDOW_8_H
