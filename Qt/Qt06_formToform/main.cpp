

#include <QApplication>

#include "comonform.h"
#include "comtwoform.h"
#include "comthreefrom.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Comonform::InitForm();
    comTwoForm::InitForm();
    comthreefrom::InitForm();


    Comonform::p_oneform->show();

    return a.exec();
}
