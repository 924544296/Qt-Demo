#include "mainwindow_7.h"
#include "ui_mainwindow_7.h"

MainWindow_7::MainWindow_7(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_7)
{
    ui->setupUi(this);
    // --
    ui->lineEdit->setReadOnly(true);
}

MainWindow_7::~MainWindow_7()
{
    delete ui;
}


void MainWindow_7::add_num(QString num)
{
    if (ui->lineEdit_2->text() == "0")
    {
        ui->lineEdit_2->setText(num);
    }
    else
    {
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + num);
    }
}


void MainWindow_7::add_operator(QString operator_)
{
    if (operand_str=="")
    {
        operand_str = ui->lineEdit_2->text();
        operator_str = operator_;
        ui->lineEdit_2->setText(operator_str);
        ui->lineEdit->setText(operand_str);
    }
    else
    {
        on_pushButton_clicked();
        operator_str = operator_;
        ui->lineEdit_2->setText(operator_str);
    }
}


void MainWindow_7::on_pushButton_2_clicked()
{
    add_num("1");
}


void MainWindow_7::on_pushButton_3_clicked()
{
    add_num("2");
}


void MainWindow_7::on_pushButton_4_clicked()
{
    add_num("3");
}


void MainWindow_7::on_pushButton_6_clicked()
{
    add_num("4");
}


void MainWindow_7::on_pushButton_7_clicked()
{
    add_num("5");
}


void MainWindow_7::on_pushButton_8_clicked()
{
    add_num("6");
}


void MainWindow_7::on_pushButton_10_clicked()
{
    add_num("7");
}


void MainWindow_7::on_pushButton_11_clicked()
{
    add_num("8");
}


void MainWindow_7::on_pushButton_12_clicked()
{
    add_num("9");
}


void MainWindow_7::on_pushButton_14_clicked()
{
    add_num("0");
}


void MainWindow_7::on_pushButton_15_clicked()
{
    if (ui->lineEdit_2->text() == "")
    {
        ui->lineEdit_2->setText("0.");
    }
    else if (ui->lineEdit_2->text().contains(".") == true)
    {
        return;
    }
    else
    {
        ui->lineEdit_2->setText(ui->lineEdit_2->text() + ".");
    }
}


// clear
void MainWindow_7::on_pushButton_16_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    operand_str = "";
    operator_str = "";
}


void MainWindow_7::on_pushButton_5_clicked()
{
    add_operator("+");
}


void MainWindow_7::on_pushButton_9_clicked()
{
    add_operator("-");
}


void MainWindow_7::on_pushButton_13_clicked()
{
    add_operator("*");
}


void MainWindow_7::on_pushButton_17_clicked()
{
    add_operator("/");
}


// =
void MainWindow_7::on_pushButton_clicked()
{
    if (operand_str!="" && operator_str!="" && ui->lineEdit_2->text()!="")
    {
        float result=0, operand1=operand_str.toFloat(), operand2=ui->lineEdit_2->text().mid(1).toFloat();
        if (operator_str == "+")
        {
            result = operand1 + operand2;
        }
        if (operator_str == "-")
        {
            result = operand1 - operand2;
        }
        if (operator_str == "*")
        {
            result = operand1 * operand2;
        }
        if (operator_str == "/")
        {
            if (operand2 != 0.0)
            {
                result = operand1 / operand2;
            }
            else
            {
                QMessageBox::warning(this, "提示", "除数不能为零");
                on_pushButton_16_clicked(); // clear
                return;
            }
        }
        //
        ui->lineEdit->setText(QString::number(result));
        // 重开
//        operand_str = "";
//        operator_str = "";
//        ui->lineEdit_2->clear();
        // 继续
        operand_str = QString::number(result);
        ui->lineEdit_2->clear();
    }
}

