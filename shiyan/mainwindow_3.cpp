#include "mainwindow_3.h"
#include "ui_mainwindow_3.h"

MainWindow_3::MainWindow_3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_3)
{
    ui->setupUi(this);
    // --
    ptimer = new QTimer;
    connect(ptimer, &QTimer::timeout, this, &MainWindow_3::display_time);
}

MainWindow_3::~MainWindow_3()
{
    delete ui;
}

void MainWindow_3::on_pushButton_clicked()
{
//    ptimer->start(1000);
    ptimer->start(100);
}


void MainWindow_3::on_pushButton_2_clicked()
{
    ptimer->stop();
}


void MainWindow_3::display_time()
{
    time++;
    ui->lcdNumber->display(time);
}
