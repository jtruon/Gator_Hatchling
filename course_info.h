#ifndef COURSE_INFO_H
#define COURSE_INFO_H

#include <QDialog>


namespace Ui {
class Course_info;
}

class Course_info : public QDialog
{
    Q_OBJECT

public:
    explicit Course_info(QWidget *parent = 0);
    ~Course_info();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Course_info *ui;

};

#endif // COURSE_INFO_H
