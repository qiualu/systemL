#include "widget.h"
#include "ui_widget.h"
#include <QMenu>
#include <QDebug>




// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

//这个宏告诉MSVC，执行程序中字符的编码采用UTF-8,别用本地的编码



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // :/tb/img/tb (1).jpg

    ui->pushButton->setIcon(QIcon(":/tb/img/tb (1).jpg")); // 设置图标
    ui->pushButton->setIconSize(QSize(50,50)); // 设置图标大小

    QMenu *menu = new QMenu(this);
    // 下拉选项按钮
    //menu->addAction(QIcon(":/tb/img/tb (2).jpg"), "无敌小火车", this, ""); //中文MSVS报错
    QAction *al = menu->addAction(QIcon(":/tb/img/tb (2).jpg"),"无敌小火车",this,SLOT(doProcess()));
    al->setObjectName("无敌小火车");
    menu->addAction(QIcon(":/tb/img/tb (3).jpg"),"无敌风火轮",this,SLOT(doProcess()));
    menu->addAction(QIcon(":/tb/img/tb (4).jpg"),"无敌棒棒糖",this,SLOT(doProcess()));
    menu->addAction(QIcon(":/tb/img/tb (5).jpg"),"无敌小棒槌",this,SLOT(doProcess()));
    ui->pushButton->setMenu(menu);


    connect(ui->cbox_1,SIGNAL(clicked()),this,SLOT(doProcessCheckBox()));
    connect(ui->cbox_2,SIGNAL(clicked()),this,SLOT(doProcessCheckBox()));
    connect(ui->cbox_3,SIGNAL(clicked()),this,SLOT(doProcessCheckBox()));

    connect(ui->rbtn_1,SIGNAL(clicked(bool)),this,SLOT(doProcessRadioButton()));
    connect(ui->rbtn_2,SIGNAL(clicked(bool)),this,SLOT(doProcessRadioButton()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::doProcess(){
    QAction *action = (QAction *)this->sender();
    qDebug() <<" doProcess " << endl ;
    qDebug() << action->text()<<endl;
}

void Widget::doProcessCheckBox(){
    qDebug() <<" doProcessCheckBox "  << endl ;
    QCheckBox *cbox = (QCheckBox *)this->sender();
    qDebug()<<cbox->text()<<endl;
}
void Widget::doProcessRadioButton(){
    qDebug() <<" doProcessRadioButton "  << endl ;
    QRadioButton *rbtn = (QRadioButton *)this->sender();
    if (rbtn->isChecked()){
        qDebug()<< rbtn->text() <<endl;
    }else{
        qDebug()<< "没有 rbtn->text()" <<endl;
    }
}

