#ifndef COMONFORM_H
#define COMONFORM_H
// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "widget.h"

class Comonform
{
public:
    Comonform();

    static Widget *p_oneform;
    static void InitForm();


};

#endif // COMONFORM_H
