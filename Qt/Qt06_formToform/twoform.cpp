#include "twoform.h"
#include "ui_twoform.h"

twoForm::twoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoForm)
{
    ui->setupUi(this);
}

twoForm::~twoForm()
{
    delete ui;
}
