#ifndef LOGGED_IN_H
#define LOGGED_IN_H

#include <QDialog>

namespace Ui {
class logged_in;
}

class logged_in : public QDialog
{
    Q_OBJECT

public:
    explicit logged_in(QWidget *parent = 0);
    ~logged_in();

private:
    Ui::logged_in *ui;
};

#endif // LOGGED_IN_H
