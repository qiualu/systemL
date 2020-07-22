#include "oneform.h"
#include "ui_oneform.h"
#include<QMovie>
#include<QDebug>


oneform::oneform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::oneform)
{
    ui->setupUi(this);
    Init();
}

oneform::~oneform()
{
    delete ui;
}

void oneform::Init(){
    QMovie *movie = new QMovie(":/img/img/gx (1).gif");
    movie->start();
    ui->label_2->setMovie(movie);
    ui->label_2->setScaledContents(true);

    p_t2 = new twoform();
    p_t3 = new twoform();
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(doProcessClinckGotoTwoForm(bool)));
    connect(p_t2,SIGNAL(SignalShowOneForm(QString)),this,SLOT(doProcessTwoFormRequest(QString)));

}


void oneform::doProcessClinckGotoTwoForm(bool){
    // 按钮
    //tf1.show();

    //twoform *tf2 = new twoform(this);
    //tf2->show();

    //twoform *tf3 = new twoform();
    //tf3->show();

    p_t2->show();
    this->hide();
}

void oneform::doProcessTwoFormRequest(QString str){

    qDebug()<< "接收页面二的信号 : "<< str <<endl;
    p_t2->hide();
    this->show();

}
