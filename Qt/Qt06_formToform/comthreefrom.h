#ifndef COMTHREEFROM_H
#define COMTHREEFROM_H
// MSVC中文乱码
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#include "threeform.h"

class comthreefrom
{
public:
    comthreefrom();

    static threeForm *P_threeform;

    static void InitForm();

};

#endif // COMTHREEFROM_H
