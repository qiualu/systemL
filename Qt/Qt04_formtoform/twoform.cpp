#include "twoform.h"
#include "ui_twoform.h"
#include<QMovie>
#include<QDebug>



twoform::twoform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoform)
{
    ui->setupUi(this);
    Init();
}

twoform::~twoform()
{
    delete ui;
}
void twoform::Init(){
    clickCount = 0;
    // 显示GIF
    QMovie *movie = new QMovie(":/img/img/gx (2).gif");
    movie->start();
    ui->label_2->setMovie(movie);
    ui->label_2->setScaledContents(true);

    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(doProcessClickBackOneForm(bool)));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(doProcessClickBackThreeForm(bool)));

    // 页面3的对象
    p_t3 = new threeform();
    connect(p_t3,SIGNAL(SignalsTwoFormShow()),this,SLOT(doProcessShow()));
}


void twoform::doProcessClickBackOneForm(bool){
    // 发送信号,通知第一个窗口显示
    clickCount++;
    emit SignalShowOneForm(QString::number(clickCount));
    qDebug()<< " 点击 按钮 2 " <<endl;
}
void twoform::doProcessClickBackThreeForm(bool){
    qDebug()<< " 点击 按钮 3 " <<endl;
    p_t3->show();
    this->hide();
    p_t3->myTimer->start(100);
}
void twoform::doProcessShow(){
    // 接收到 页面3 的信号
    p_t3->hide();
    this->show();
}
