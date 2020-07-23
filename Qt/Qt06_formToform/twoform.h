#ifndef TWOFORM_H
#define TWOFORM_H
// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QWidget>

namespace Ui {
class twoForm;
}

class twoForm : public QWidget
{
    Q_OBJECT

public:
    explicit twoForm(QWidget *parent = nullptr);
    ~twoForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::twoForm *ui;
};

#endif // TWOFORM_H
