#ifndef ONEFORM_H
#define ONEFORM_H

// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


#include <QWidget>
#include "twoform.h"

QT_BEGIN_NAMESPACE
namespace Ui { class oneform; }
QT_END_NAMESPACE

class oneform : public QWidget
{
    Q_OBJECT

public:
    oneform(QWidget *parent = nullptr);
    ~oneform();

private slots:
    void doProcessClinckGotoTwoForm(bool);
    // 接收页面而的信息
    void doProcessTwoFormRequest(QString);
private:
    Ui::oneform *ui;
    void Init();
    //twoform *tf1 = new twoform(this);
    twoform tf1;
    twoform *p_t2;
    twoform *p_t3;

};
#endif // ONEFORM_H
