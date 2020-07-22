#ifndef THREEFORM_H
#define THREEFORM_H

#include <QWidget>

namespace Ui {
class threeform;
}

class threeform : public QWidget
{
    Q_OBJECT

public:
    explicit threeform(QWidget *parent = nullptr);
    ~threeform();

private:
    Ui::threeform *ui;
};

#endif // THREEFORM_H
