#include "twoform.h"
#include "ui_twoform.h"

#include "comonform.h"
#include "comthreefrom.h"

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


// 点击 go 1
void twoForm::on_pushButton_clicked()
{
    this->hide();
    Comonform::p_oneform->show();
}
// 点击 go 3
void twoForm::on_pushButton_2_clicked()
{
    this->hide();
    comthreefrom::P_threeform->show();
}
