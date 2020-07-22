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

private:
    Ui::threeForm *ui;
};

#endif // THREEFORM_H
