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
