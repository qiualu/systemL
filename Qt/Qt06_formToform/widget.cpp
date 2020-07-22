#include "widget.h"
#include "ui_widget.h"

#include"comtwoform.h"
#include "comthreefrom.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


// 点击go 2
void Widget::on_pushButton_clicked()
{
    this->hide();
    comTwoForm::p_twoForm->show();
}
// 点击go 3
void Widget::on_pushButton_2_clicked()
{
    this->hide();
    comthreefrom::P_threeform->show();
}
