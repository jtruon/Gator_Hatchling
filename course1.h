#ifndef COURSE1_H
#define COURSE1_H

#include <QDialog>

namespace Ui {
class Course1;
}

class Course1 : public QDialog
{
    Q_OBJECT

public:
    explicit Course1(QWidget *parent = 0);
    ~Course1();

private slots:

    void on_pushButton_mygrade1_clicked();

private:
    Ui::Course1 *ui;
};

#endif // COURSE1_H
