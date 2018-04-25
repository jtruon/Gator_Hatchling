#ifndef COURSE2_H
#define COURSE2_H

#include <QDialog>

namespace Ui {
class Course2;
}

class Course2 : public QDialog
{
    Q_OBJECT

public:
    explicit Course2(QWidget *parent = 0);
    ~Course2();

private slots:
    void on_pushButton_course2_clicked();

private:
    Ui::Course2 *ui;
};

#endif // COURSE2_H
