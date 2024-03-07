#include "mainwindow_2.h"
#include "ui_mainwindow_2.h"


MainWindow_2::MainWindow_2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_2)
{
    ui->setupUi(this);
    // --
    QTimer *ptimer = new QTimer;
    ptimer->start(1000);
    connect(ptimer, &QTimer::timeout, this, &MainWindow_2::display_time);
}


MainWindow_2::~MainWindow_2()
{
    delete ui;
}


void MainWindow_2::display_time()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm:ss");
    if (colon)
    {
        text[2] = ':';
        text[5] = ':';
        colon = false;
    }
    else
    {
        text[2] = ' ';
        text[5] = ' ';
        colon = true;
    }
    ui->lcdNumber->display(text);
}
