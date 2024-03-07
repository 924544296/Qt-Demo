#include "mainwindow_4.h"
#include "ui_mainwindow_4.h"


MainWindow_4::MainWindow_4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_4)
{
    ui->setupUi(this);
    // --
    get_host_information();
}

MainWindow_4::~MainWindow_4()
{
    delete ui;
}


void MainWindow_4::on_pushButton_clicked()
{
    QList<QNetworkInterface> allInterfaces = QNetworkInterface::allInterfaces();
    QString detail = "";
    for (int i=0; i<allInterfaces.count(); i++)
    {
        QNetworkInterface interface = allInterfaces.at(i);
        detail = detail + tr("设备：") + interface.name() + "\n";
        detail = detail + tr("硬件地址：") + interface.hardwareAddress() + "\n";
        QList<QNetworkAddressEntry> addressEntries = interface.addressEntries();
        for (int j=0; j<addressEntries.count(); j++)
        {
            QNetworkAddressEntry entry = addressEntries.at(j);
            detail = detail + "\t" + tr("IP地址：") + entry.ip().toString() + "\n";
            detail = detail + "\t" + tr("子网掩码：") + entry.netmask().toString() + "\n";
            detail = detail + "\t" + tr("广播地址：") + entry.broadcast().toString() + "\n";
        }
    }
    QMessageBox::information(this, tr("详细信息"), detail);
}


void MainWindow_4::get_host_information()
{
    //
    QString local_host_name = QHostInfo::localHostName();
    ui->lineEdit->setText(local_host_name);
    //
    QHostInfo hostInfo = QHostInfo::fromName(local_host_name);
    QList<QHostAddress> addresses = hostInfo.addresses();
    if (!addresses.isEmpty())
    {
        ui->lineEdit_2->setText(addresses.at(0).toString());
        qDebug() << addresses;
    }
}
