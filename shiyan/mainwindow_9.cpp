#include "mainwindow_9.h"
#include "ui_mainwindow_9.h"

MainWindow_9::MainWindow_9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_9)
{
    ui->setupUi(this);
    // --
    ui->label->setScaledContents(true);
    ui->label->setFocus();
    ui->label->installEventFilter(this);
}

MainWindow_9::~MainWindow_9()
{
    delete ui;
}


void MainWindow_9::on_pushButton_clicked()
{
    QString name = QFileDialog::getOpenFileName(this, "打开图像", "", "图像格式(*.png *.jpg *.bmp)");
    QImage image(name);
    ui->label->setPixmap(QPixmap::fromImage(image));
    ui->label->setFocus();
}


void MainWindow_9::mousePressEvent(QMouseEvent *event)
{
    ui->label->move(event->position().x(), event->position().y());
    ui->label->setFocus();
    event->accept();
}


void MainWindow_9::wheelEvent(QWheelEvent *event)
{
    if (event->angleDelta().y() > 0)
    {
        ui->label->resize(ui->label->width()+5, ui->label->height()+5);
    }
    else
    {
        ui->label->resize(ui->label->width()-5, ui->label->height()-5);
    }
    ui->label->setFocus();
    event->accept();
}


//void MainWindow_9::keyPressEvent(QKeyEvent *event)
//{
//    qDebug() << "3";
//    if (event->key() == Qt::Key_Up)
//    {
//        ui->label->move(ui->label->x(), ui->label->y()-5);
//    }
//    else if (event->key() == Qt::Key_Down)
//    {
//        ui->label->move(ui->label->x(), ui->label->y()+5);
//    }
//    else if (event->key() == Qt::Key_Left)
//    {
//        ui->label->move(ui->label->x()-5, ui->label->y());
//    }
//    else if (event->key() == Qt::Key_Right)
//    {
//        ui->label->move(ui->label->x()+5, ui->label->y());
//    }
//    ui->label->setFocus();
//    event->accept();
//}


//bool MainWindow_9::event(QEvent *event)
//{
//    if (event->type() == QEvent::KeyPress)
//    {
//        QKeyEvent *k = static_cast<QKeyEvent *>(event);
//        //             QKeyEvent *k = (QKeyEvent *)event;
//        if (k->key() == Qt::Key_Up)
//        {
//            ui->label->move(ui->label->x(), ui->label->y()-5);
//            ui->label->setFocus();
//            return true;
//        }
//        else if (k->key() == Qt::Key_Down)
//        {
//            ui->label->move(ui->label->x(), ui->label->y()+5);
//            ui->label->setFocus();
//            return true;
//        }
//        else if (k->key() == Qt::Key_Left)
//        {
//            ui->label->move(ui->label->x()-5, ui->label->y());
//            ui->label->setFocus();
//            return true;
//        }
//        else if (k->key() == Qt::Key_Right)
//        {
//            ui->label->move(ui->label->x()+5, ui->label->y());
//            ui->label->setFocus();
//            return true;
//        }
//    }
//    return QMainWindow::event(event);
//}


bool MainWindow_9::eventFilter(QObject *target, QEvent *event)
{
    //获取按键信号
    if(event->type() == QEvent::KeyPress)
    {
        QKeyEvent *k = static_cast<QKeyEvent *>(event);
        //             QKeyEvent *k = (QKeyEvent *)event;
        if (k->key() == Qt::Key_Up)
        {
            ui->label->move(ui->label->x(), ui->label->y()-5);
            ui->label->setFocus();
            return true;
        }
        else if (k->key() == Qt::Key_Down)
        {
            ui->label->move(ui->label->x(), ui->label->y()+5);
            ui->label->setFocus();
            return true;
        }
        else if (k->key() == Qt::Key_Left)
        {
            ui->label->move(ui->label->x()-5, ui->label->y());
            ui->label->setFocus();
            return true;
        }
        else if (k->key() == Qt::Key_Right)
        {
            ui->label->move(ui->label->x()+5, ui->label->y());
            ui->label->setFocus();
            return true;
        }
    }
    return QMainWindow::eventFilter(target,event);
}
