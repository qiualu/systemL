#include "threeform.h"
#include "ui_threeform.h"

threeform::threeform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threeform)
{
    ui->setupUi(this);
}

threeform::~threeform()
{
    delete ui;
}
