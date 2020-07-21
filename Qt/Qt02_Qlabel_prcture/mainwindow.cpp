#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QImage *img=new QImage; //新建一个image对象
    QImage *img1=new QImage; //新建一个image对象
    QImage *img2=new QImage; //新建一个image对象
    QImage *img3=new QImage; //新建一个image对象

    img->load(":/img/img (1).jpg");
    img1->load(":/img/img (2).jpg");
    img2->load(":/img/img (3).jpg");
    img3->load(":/img/img (4).jpg");

    ui->label->setPixmap(QPixmap::fromImage(*img));
    ui->label_2->setPixmap(QPixmap::fromImage(*img1));
    ui->label_3->setPixmap(QPixmap::fromImage(*img2));
    ui->label_4->setPixmap(QPixmap::fromImage(*img3));



}

MainWindow::~MainWindow()
{
    delete ui;
}

