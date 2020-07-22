#include "threeform.h"
#include "ui_threeform.h"
#include <QtDebug>
threeform::threeform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threeform)
{
    ui->setupUi(this);
    Init();
}

threeform::~threeform()
{
    delete ui;
}
void threeform::Init(){
    count = 0;
    myTimer = new QTimer(this);
    connect(myTimer,SIGNAL(timeout()),this,SLOT(doProcessTimeOut()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(doProcessClickThree()));
    //myTimer->start(100);

}

void threeform::doProcessClickThree(){
    // 按键  发送返回信号
    count = 0;
    emit SignalsTwoFormShow();

}
void threeform::doProcessTimeOut(){
    // 计时
    count++;
    if (count == 100){
        //count = 0;
        doProcessClickThree();
        myTimer->stop();
    }
    ui->lcdNumber->display(count);
}
