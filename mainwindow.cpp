#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "deque.h"
#include "node.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Deque Obj;



void MainWindow::on_pushButton_clicked()
{
    double Value=ui->lineEdit->text().toDouble();
    Value+Obj;

}


void MainWindow::on_pushButton_2_clicked()
{
    double Value=ui->lineEdit->text().toDouble();
    Obj+Value;
}


void MainWindow::on_pushButton_3_clicked()
{
    QLineEdit *out=ui->lineEdit_2;
    out<<Obj;
}


void MainWindow::on_pushButton_4_clicked()
{
    Obj-1;
}


void MainWindow::on_pushButton_5_clicked()
{
    Obj-2;
}

