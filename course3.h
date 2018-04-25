#ifndef COURSE3_H
#define COURSE3_H

#include <QDialog>

namespace Ui {
class Course3;
}

class Course3 : public QDialog
{
    Q_OBJECT

public:
    explicit Course3(QWidget *parent = 0);
    ~Course3();

private slots:
    void on_pushButton_course3_clicked();

private:
    Ui::Course3 *ui;
};

#endif // COURSE3_H
