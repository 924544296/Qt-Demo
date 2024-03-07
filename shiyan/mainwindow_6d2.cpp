#include "mainwindow_6d2.h"
#include "ui_mainwindow_6d2.h"

MainWindow_6d2::MainWindow_6d2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_6d2)
{
    ui->setupUi(this);
}

MainWindow_6d2::~MainWindow_6d2()
{
    delete ui;
}
