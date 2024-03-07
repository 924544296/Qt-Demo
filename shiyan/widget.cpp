#include "widget.h"
#include "ui_widget.h"
#include "mainwindow.h"
#include "mainwindow_2.h"
#include "mainwindow_3.h"
#include "mainwindow_4.h"
#include "mainwindow_5d1.h"
#include "mainwindow_5d2.h"
#include "mainwindow_6d1.h"
#include "mainwindow_6d2.h"
#include "mainwindow_7.h"
#include "mainwindow_8.h"
#include "mainwindow_9.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // --
    ui->comboBox->addItem("回车发送消息");
    ui->comboBox->addItem("系统时钟");
    ui->comboBox->addItem("计时器");
    ui->comboBox->addItem("获取本机网络信息");
    ui->comboBox->addItem("UDP网络广播");
    ui->comboBox->addItem("TCP网络聊天室");
    ui->comboBox->addItem("计算器");
    ui->comboBox->addItem("登录");
    ui->comboBox->addItem("图像缩放平移");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    switch (ui->comboBox->currentIndex())
    {
    case 0:
    {
        MainWindow *w = new MainWindow(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 1:
    {
        MainWindow_2 *w = new MainWindow_2(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 2:
    {
        MainWindow_3 *w = new MainWindow_3(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 3:
    {
        MainWindow_4 *w = new MainWindow_4(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 4:
    {
        MainWindow_5d1 *w1 = new MainWindow_5d1(this);
        MainWindow_5d2 *w2 = new MainWindow_5d2(this);
        w1->show();
        w1->setAttribute(Qt::WA_DeleteOnClose);
        w2->show();
        w2->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 5:
    {
        MainWindow_6d1 *w1 = new MainWindow_6d1(this);
        MainWindow_6d2 *w2 = new MainWindow_6d2(this);
        w1->show();
        w1->setAttribute(Qt::WA_DeleteOnClose);
        w2->show();
        w2->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 6:
    {
        MainWindow_7 *w = new MainWindow_7(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 7:
    {
        MainWindow_8 *w = new MainWindow_8(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    case 8:
    {
        MainWindow_9 *w = new MainWindow_9(this);
        w->show();
        w->setAttribute(Qt::WA_DeleteOnClose);
        break;
    }
    }
}
