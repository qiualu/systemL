#include "oneform.h"
#include "ui_oneform.h"

oneform::oneform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::oneform)
{
    ui->setupUi(this);
}

oneform::~oneform()
{
    delete ui;
}

