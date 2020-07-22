#include "twoform.h"
#include "ui_twoform.h"

twoform::twoform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoform)
{
    ui->setupUi(this);
}

twoform::~twoform()
{
    delete ui;
}
