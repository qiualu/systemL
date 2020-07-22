#include "widget.h"
#include "ui_widget.h"
#include <QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);//无边框
    setAttribute(Qt::WA_TranslucentBackground);//背景透明

    Init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Init(){
    myTimer = new QTimer(this);
    index = 10;
    ui->lcdNumber->display(index);
    myTimer->start(1000);
    ui->label->hide();


    connect(myTimer,SIGNAL(timeout()),this,SLOT(doProcessTimeOut()));

    //播放动画

    movie->setFileName(":/img/img/gx (3).gif");
    ui->label->setMovie(movie);
    ui->label->setScaledContents(true); //填充满屏.. 还是有边框
}

void Widget::doProcessTimeOut(){
    index--;
    if(index == 0){
        //index = 10;
        myTimer->stop();
        movie->start();
        ui->label->show();
        ui->lcdNumber->hide();
        this->showFullScreen(); // 全屏
    }
    ui->lcdNumber->display(index);
    qDebug()<< " djs " << index <<endl;

}


