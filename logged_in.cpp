#include "logged_in.h"
#include "ui_logged_in.h"

logged_in::logged_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logged_in)
{
    ui->setupUi(this);
}

logged_in::~logged_in()
{
    delete ui;
}

void logged_in::on_pushButton_StudentInfo_clicked()
{
    hide();
    course_info = new Course_info(this);
    course_info->show();
}

void logged_in::on_pushButton_Courses_clicked()
{
    hide();
    course_selection = new Course_selection(this);
    course_selection->show();

}
