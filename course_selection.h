#ifndef COURSE_SELECTION_H
#define COURSE_SELECTION_H

#include <QDialog>
#include "course1.h"
#include "course2.h"
#include "course3.h"
#include "course4.h"
namespace Ui {
class Course_selection;
}

class Course_selection : public QDialog
{
    Q_OBJECT

public:
    explicit Course_selection(QWidget *parent = 0);
    ~Course_selection();

private slots:
    void on_pushButton_course1_clicked();

    void on_pushButton_course2_clicked();

    void on_pushButton_course3_clicked();

    void on_pushButton_course4_clicked();

    void on_pushButton_gpa_clicked();

private:
    Ui::Course_selection *ui;
    Course1 *course1;
    Course2 *course2;
    Course3 *course3;
    Course4 *course4;

};

#endif // COURSE_SELECTION_H
