#include "course_selection.h"
#include "ui_course_selection.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


Course_selection::Course_selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Course_selection)
{
    ui->setupUi(this);
}

Course_selection::~Course_selection()
{
    delete ui;
}

void Course_selection::on_pushButton_course1_clicked()
{
    course1 = new Course1(this);
    course1->show();
}


void Course_selection::on_pushButton_course2_clicked()
{
    course2 = new Course2(this);
    course2 ->show();
}

void Course_selection::on_pushButton_course3_clicked()
{
    course3 = new Course3(this);
    course3->show();
}

void Course_selection::on_pushButton_course4_clicked()
{
    course4 = new Course4(this);
    course4 ->show();
}

void Course_selection::on_pushButton_gpa_clicked()
{
    QFile file("//Users//juandelacruz//Desktop//Learning Management System//Text File//gpa.txt");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"gpa",file.errorString());

    QTextStream in(&file);

    ui->textEdit_gpa->setText(in.readAll());
}
