#include "mainwindow_5d2.h"
#include "ui_mainwindow_5d2.h"

MainWindow_5d2::MainWindow_5d2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_5d2)
{
    ui->setupUi(this);
    // --
    pudpSocket = new QUdpSocket;
    connect(pudpSocket, &QUdpSocket::readyRead, this, &MainWindow_5d2::receive_message);
    bool result = pudpSocket->bind(port);
    if (!result)
    {
        QMessageBox::information(this, "错", "UDP Socket创建错误");
    }
}

MainWindow_5d2::~MainWindow_5d2()
{
    delete ui;
}


void MainWindow_5d2::receive_message()
{
    while (pudpSocket->hasPendingDatagrams())
    {
        QByteArray datagram;
        datagram.resize(pudpSocket->pendingDatagramSize());
        pudpSocket->readDatagram(datagram.data(), datagram.size());
        QString message = datagram.data();
        ui->textEdit->insertPlainText(message + "\n");
    }
}
