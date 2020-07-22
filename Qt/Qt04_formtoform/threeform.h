#ifndef THREEFORM_H
#define THREEFORM_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class threeform;
}

class threeform : public QWidget
{
    Q_OBJECT

public:
    explicit threeform(QWidget *parent = nullptr);
    ~threeform();

    QTimer *myTimer;

private slots:
    void doProcessClickThree();
    void doProcessTimeOut();
signals:
    void SignalsTwoFormShow();

private:
    Ui::threeform *ui;

    int count;



    void Init();

};

#endif // THREEFORM_H
