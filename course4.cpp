#include "course4.h"
#include "ui_course4.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Course4::Course4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course4)
{
    ui->setupUi(this);
}

Course4::~Course4()
{
    delete ui;
}

void Course4::on_pushButton_course4_clicked()
{
    QFile file("//Users//juandelacruz//Desktop//Learning Management System//Text File//course4.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"course3",file.errorString());

    QTextStream in(&file);

    ui->textBrowser_course4->setText(in.readAll());
}
