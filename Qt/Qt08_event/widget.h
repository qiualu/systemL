#ifndef WIDGET_H
#define WIDGET_H

// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif


#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPicture>
#include <QPainter>
#include <QPen>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void mousePressEvent(QMouseEvent *event) override; // 点下
    void mouseReleaseEvent(QMouseEvent *event) override; // 松开
    void mouseMoveEvent(QMouseEvent *event) override;  // 点击移动
    void mouseDoubleClickEvent(QMouseEvent *event) override; // 双击

    // 刷新
    void paintEvent(QPaintEvent *) override;
    int bianjiao = 100;
private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
