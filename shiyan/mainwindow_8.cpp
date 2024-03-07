#include "mainwindow_8.h"
#include "ui_mainwindow_8.h"

MainWindow_8::MainWindow_8(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_8)
{
    ui->setupUi(this);
}

MainWindow_8::~MainWindow_8()
{
    delete ui;
}

void MainWindow_8::on_pushButton_clicked()
{
    if (ui->lineEdit->text()=="WW" && ui->lineEdit_2->text()=="7")
    {
        emit done_login();
        hide();
    }
    else
    {
        QMessageBox::information(this, "提示", "用户名或密码错误");
    }
}

