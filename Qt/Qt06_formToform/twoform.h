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

private:
    Ui::twoForm *ui;
};

#endif // TWOFORM_H
