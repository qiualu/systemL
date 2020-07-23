#ifndef COMTWOFORM_H
#define COMTWOFORM_H
// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include"twoform.h"
class comTwoForm
{
public:
    comTwoForm();

    static twoForm *p_twoForm;

    static void InitForm();

};

#endif // COMTWOFORM_H
