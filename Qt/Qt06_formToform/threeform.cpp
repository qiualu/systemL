#include "threeform.h"
#include "ui_threeform.h"


#include "comonform.h"
#include "comtwoform.h"


threeForm::threeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threeForm)
{
    ui->setupUi(this);
}

threeForm::~threeForm()
{
    delete ui;
}
// 点击 go 1
void threeForm::on_pushButton_clicked()
{
    this->hide();
    Comonform::p_oneform->show();
}
// 点击 go 2
void threeForm::on_pushButton_2_clicked()
{
    this->hide();
    comTwoForm::p_twoForm->show();
}
