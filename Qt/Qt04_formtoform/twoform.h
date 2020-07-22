#ifndef TWOFORM_H
#define TWOFORM_H

#include <QWidget>

namespace Ui {
class twoform;
}

class twoform : public QWidget
{
    Q_OBJECT

public:
    explicit twoform(QWidget *parent = nullptr);
    ~twoform();

private:
    Ui::twoform *ui;
};

#endif // TWOFORM_H
