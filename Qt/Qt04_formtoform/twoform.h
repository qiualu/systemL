#ifndef TWOFORM_H
#define TWOFORM_H

// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


#include <QWidget>
#include "threeform.h"
namespace Ui {
class twoform;
}

class twoform : public QWidget
{
    Q_OBJECT

public:
    explicit twoform(QWidget *parent = nullptr);
    ~twoform();

private slots:
    void doProcessClickBackOneForm(bool);
    void doProcessClickBackThreeForm(bool);
    void doProcessShow();
signals:
    void SignalShowOneForm(QString);


private:
    Ui::twoform *ui;

    int clickCount;

    threeform *p_t3;

    void Init();



};

#endif // TWOFORM_H
