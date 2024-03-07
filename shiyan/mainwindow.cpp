#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // --
    ui->textEdit->installEventFilter(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->textEdit->toPlainText() == "")
    {
        return;
    }
    else
    {
        QString message = ui->textEdit->toPlainText();
        ui->textEdit->clear();
        ui->textEdit->setFocus();
        ui->textBrowser->append(message);
    }
}


//实现事件过滤器
bool MainWindow::eventFilter(QObject *target, QEvent *event)
{
    if(target == ui->textEdit)
    {
        //获取按键信号
        if(event->type() == QEvent::KeyPress)
        {
             QKeyEvent *k = static_cast<QKeyEvent *>(event);
//             QKeyEvent *k = (QKeyEvent *)event;
             if(k->key() == Qt::Key_Return)             //选定回车键(可自行定义其他按键)
             {
                 on_pushButton_clicked();               //链接槽信号
                 return true;
             }
        }
    }
    return QMainWindow::eventFilter(target,event);
}
