#include "course_info.h"
#include "ui_course_info.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Course_info::Course_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course_info)
{
    ui->setupUi(this);
}

Course_info::~Course_info()
{
    delete ui;
}


void Course_info::on_pushButton_clicked()
{
    QFile file("//Users//juandelacruz//Desktop//Learning Management System//Text File//Student_Info_out.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);

    ui->textBrowser_studentInfo->setText(in.readAll());
}
