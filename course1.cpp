#include "course1.h"
#include "ui_course1.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Course1::Course1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course1)
{
    ui->setupUi(this);
}

Course1::~Course1()
{
    delete ui;
}


void Course1::on_pushButton_mygrade1_clicked()
{
   QFile file("//Users//juandelacruz//Desktop//Learning Management System//Text File//Course1.txt");

   if(!file.open(QIODevice::ReadOnly))
       QMessageBox::information(0,"course1",file.errorString());

   QTextStream in(&file);

   ui->textBrowser_course1->setText(in.readAll());
}


