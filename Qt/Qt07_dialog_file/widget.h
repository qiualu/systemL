#ifndef WIDGET_H
#define WIDGET_H
#include <QDebug>
#include<QProgressDialog>
#include<QTimer>
#include<QFile>
#include <QByteArray>

// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


     QProgressDialog *p_dialog;
     QTimer *myTimer;
     int step;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_color_dialog_clicked();

    void on_font_dialog_clicked();

    void on_input_dialog_clicked();

    void on_progress_dialog_clicked();

    void doProcessCancel();
    void doProcessTimeOut();

    void on_save_file_clicked();

private:
    Ui::Widget *ui;

    QFile *myFile;
    void Init();


};
#endif // WIDGET_H
