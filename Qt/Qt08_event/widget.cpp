#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPicture pic;
    pic.load("../data/img/tb (1).jpg");
    ui->label->setPicture(pic);

}

Widget::~Widget()
{
    delete ui;
}
// 按键按下
void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        qDebug()<< " 鼠-左键点击";
    }else if (event->button() == Qt::RightButton){
        qDebug()<< " 鼠-右键点击";
    }else if (event->button() == Qt::MidButton){
        qDebug()<< " 鼠-中键点击";
    }


    qDebug()<< " 鼠标点击位置globalPos :  "<< event->globalPos() ;
    qDebug()<< " 鼠标点击位置windowPos :  "<< event->windowPos() ;
}
// 按键抬起
void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug()<< " 鼠标Releas位置globalPos :  "<< event->globalPos() ;
    qDebug()<< " 鼠标Releas位置windowPos :  "<< event->windowPos() ;
}
// 按键移动
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<< " 鼠标Move位置globalPos :  "<< event->globalPos() ;
    qDebug()<< " 鼠标Move位置windowPos :  "<< event->windowPos() ;
}
// 按键双击
void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug()<< " 鼠标DoubleClick位置globalPos :  "<< event->globalPos() ;
    qDebug()<< " 鼠标DoubleClick位置windowPos :  "<< event->windowPos() ;
}

// 刷新
void Widget::paintEvent(QPaintEvent *event)
{
    qDebug()<< " paintEvent :  " << event;
    QPainter painter(this);
    // 用图画
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap("../data/img/tb (1).jpg"));

    // 用画笔 画对角线
    QPen penl;
    penl.setStyle(Qt::DotLine);
    penl.setColor(Qt::red);
    penl.setWidth(5);
    painter.setPen(penl);
    painter.drawLine(QPointF(0,0),QPointF(this->width(),this->height()));


    // 用画笔 画矩形
    QPen pen2;
    pen2.setStyle(Qt::CustomDashLine); // 线的形状
    pen2.setColor(Qt::blue);
    pen2.setWidth(10);
    painter.drawRect(100,100,bianjiao,bianjiao);
    // 画椭圆
    painter.drawEllipse(QPoint(this->width()/2,this->height()/2),100,50);


    // 用画刷图
    QBrush brush1;
    brush1.setStyle(Qt::CrossPattern);
    brush1.setColor(QColor(111,54,36));
    painter.setBrush(brush1);
    static const QPointF points[4] = {
        QPointF(134,80),
        QPointF(500,10),
        QPointF(80,30),
        QPointF(bianjiao,70),
    };
    painter.drawPolygon(points,4);

    //painter.setPen();

}



void Widget::on_pushButton_clicked()
{
    bianjiao += 10;
    this->update();
}
