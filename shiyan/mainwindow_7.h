#ifndef MAINWINDOW_7_H
#define MAINWINDOW_7_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>


namespace Ui {
class MainWindow_7;
}

class MainWindow_7 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_7(QWidget *parent = nullptr);
    ~MainWindow_7();
    // --
    void add_num(QString num);
    void add_operator(QString operator_);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow_7 *ui;
    // --
    QString operand_str="", operator_str="";
};

#endif // MAINWINDOW_7_H
