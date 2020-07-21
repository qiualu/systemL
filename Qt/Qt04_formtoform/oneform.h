#ifndef ONEFORM_H
#define ONEFORM_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class oneform; }
QT_END_NAMESPACE

class oneform : public QWidget
{
    Q_OBJECT

public:
    oneform(QWidget *parent = nullptr);
    ~oneform();

private:
    Ui::oneform *ui;
};
#endif // ONEFORM_H
