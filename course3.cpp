#include "course3.h"
#include "ui_course3.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Course3::Course3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course3)
{
    ui->setupUi(this);
}

Course3::~Course3()
{
    delete ui;
}

void Course3::on_pushButton_course3_clicked()
{
    QFile file("//Users//juandelacruz//Desktop//Learning Management System//Text File//Course3.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"course3",file.errorString());

    QTextStream in(&file);

    ui->textBrowser_grade3->setText(in.readAll());
}
