#ifndef LOGGED_IN_H
#define LOGGED_IN_H

#include <QDialog>
#include "course_info.h"
#include "course_selection.h"

namespace Ui {
class logged_in;
}

class logged_in : public QDialog
{
    Q_OBJECT

public:
    explicit logged_in(QWidget *parent = 0);
    ~logged_in();

private slots:
    void on_pushButton_StudentInfo_clicked();

    void on_pushButton_Courses_clicked();

private:
    Ui::logged_in *ui;
    Course_info *course_info;
    Course_selection *course_selection;

};

#endif // LOGGED_IN_H
