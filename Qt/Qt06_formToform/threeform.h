#ifndef THREEFORM_H
#define THREEFORM_H

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
