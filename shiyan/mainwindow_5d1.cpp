#include "mainwindow_5d1.h"
#include "ui_mainwindow_5d1.h"

MainWindow_5d1::MainWindow_5d1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_5d1)
{
    ui->setupUi(this);
    // --
    ptimer = new QTimer;
    pudpSocket = new QUdpSocket;
    connect(ptimer, &QTimer::timeout, this, &MainWindow_5d1::send_message);
}

MainWindow_5d1::~MainWindow_5d1()
{
    delete ui;
}

void MainWindow_5d1::on_pushButton_clicked()
{
    if (start == true)
    {
        ptimer->start(1000);
        start = false;
        ui->pushButton->setText("停止");
    }
    else
    {
        ptimer->stop();
        start = true;
        ui->pushButton->setText("开始");
    }
}


void MainWindow_5d1::send_message()
{
    QString message = ui->lineEdit->text();
    if (message == "")
    {
        return;
    }
//    int length;
//    if ((length = pudpSocket->writeDatagram(message.toLatin1(), message.length(), QHostAddress::Broadcast, port)) != message.length())
//    qDebug() << pudpSocket->writeDatagram(message.toLatin1(), message.length(), QHostAddress::Broadcast, port);
    if (pudpSocket->writeDatagram(message.toLatin1(), message.length(), QHostAddress::Broadcast, port) != message.length())
    {
        return;
    }
}
