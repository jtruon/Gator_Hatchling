#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "Dtruong" && password == "test")
    {
        QMessageBox::information(this,"login","Username and Password are correct");
        hide();
        Logged_in = new logged_in(this);
        Logged_in->show();

    }
    else
    {
        QMessageBox:: warning(this,"login","Username and password are not correct");
    }
}
