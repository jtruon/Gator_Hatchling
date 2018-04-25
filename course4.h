#ifndef COURSE4_H
#define COURSE4_H

#include <QDialog>

namespace Ui {
class Course4;
}

class Course4 : public QDialog
{
    Q_OBJECT

public:
    explicit Course4(QWidget *parent = 0);
    ~Course4();

private slots:
    void on_pushButton_course4_clicked();

private:
    Ui::Course4 *ui;
};

#endif // COURSE4_H
