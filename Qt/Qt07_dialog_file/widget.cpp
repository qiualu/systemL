#include "widget.h"
#include "ui_widget.h"


#include<QMessageBox>
#include<QFontDialog>
#include<QColorDialog>
#include<QPalette>
#include<QInputDialog>
#include<QFileDialog>

#include <QTextStream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    p_dialog = NULL;
    Init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Init(){
    myFile = new QFile(this);
}

// 设置字体 msg dislog
void Widget::on_pushButton_3_clicked()
{
    QMessageBox::warning(this,"warning","xxxxxxx",
                         QMessageBox::Yes|QMessageBox::No);

}

void Widget::on_color_dialog_clicked()
{
    QColor mycolor = QColorDialog::getColor(Qt::red,this,"get color");
    if(mycolor.isValid()){
        QPalette pe = ui->label->palette();
        pe.setColor(QPalette::WindowText,mycolor);
        ui->label->setPalette(pe);
    }
}

void Widget::on_font_dialog_clicked()
{
    bool ok;
    QFont serifFont("Lobster",22,QFont::Bold); //设置
    QFont myfont = QFontDialog::getFont(&ok,serifFont,this,"get font",QFontDialog::ScalableFonts);
    if(ok){
        ui->label->setFont(myfont);
    }

}

void Widget::on_input_dialog_clicked()
{
    int i = QInputDialog::getInt(this,"get int","年龄",1,1,100,1);
    qDebug() << i<< " 大小吧 ";
}

void Widget::on_progress_dialog_clicked()
{
    if(p_dialog == NULL){
        step = 0;
        p_dialog = new QProgressDialog(this);
        p_dialog->setRange(0,100);
        connect(p_dialog,SIGNAL(canceled()),this,SLOT(doProcessCancel()));

        myTimer =  new QTimer(this);
        connect(myTimer,SIGNAL(timeout()),this,SLOT(doProcessTimeOut()));
        myTimer->start(100);
    }


}
void Widget::doProcessCancel(){
    qDebug() << " doProcessCancel ";
    myTimer->stop();
    delete p_dialog;
    p_dialog = NULL;
}
void Widget::doProcessTimeOut(){
    qDebug() << " doProcessTimeOut ";
    p_dialog->setValue(step);
    step++;
    if(step==101){
        myTimer->stop();
        delete p_dialog;
        p_dialog = NULL;
        step = 0;
    }
}


// 打开文件
void Widget::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"get file","../Qt07_dialog_file/",
                                                    "SOURCES(*.cpp);;HEADERS(*.h);;FORMS(*.ui)");
    qDebug() << " filename "<< filename << endl;
    if(filename.isEmpty()){
        QMessageBox::warning(this,"warning","file can`t select");
        return;
    }

    myFile->setFileName(filename);
    bool ret = myFile->open(QIODevice::ReadOnly|QIODevice::Text);
    if(!ret){
        QMessageBox::warning(this,"warning","open failed");
        return;
    }
//    while(!myFile->atEnd()){

//        QByteArray ba = myFile->read(1024);
//        QString str = QString(ba);
//        ui->textEdit->append(str);

//        QByteArray ba = myFile->readLine();
//        QString str = QString(ba);
//        ui->textEdit->append(str);

//        QByteArray ba = myFile->readAll();
//        QString str = QString(ba);
//        ui->textEdit->append(str);

//    }
    // 文件流形式
    QTextStream text(myFile);
    while(!text.atEnd()){
        QString str = text.readAll();
        ui->textEdit->append(str);
    }

}
// 保存文件
void Widget::on_save_file_clicked()
{

}
