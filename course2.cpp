#include "course2.h"
#include "ui_course2.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Course2::Course2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course2)
{
    ui->setupUi(this);
}

Course2::~Course2()
{
    delete ui;
}

void Course2::on_pushButton_course2_clicked()
{
    QFile file("//Users//juandelacruz//Desktop//Learning Management System//Text File//Course2.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"course2",file.errorString());

    QTextStream in(&file);

    ui->textBrowser_course2->setText(in.readAll());
}
