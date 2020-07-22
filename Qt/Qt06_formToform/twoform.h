#ifndef TWOFORM_H
#define TWOFORM_H

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
