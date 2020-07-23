#ifndef THREEFORM_H
#define THREEFORM_H
// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include <QWidget>

namespace Ui {
class threeForm;
}

class threeForm : public QWidget
{
    Q_OBJECT

public:
    explicit threeForm(QWidget *parent = nullptr);
    ~threeForm();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::threeForm *ui;
};

#endif // THREEFORM_H
