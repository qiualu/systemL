#include "comtwoform.h"

twoForm *comTwoForm::p_twoForm = NULL;
comTwoForm::comTwoForm()
{

}
void comTwoForm::InitForm(){

    p_twoForm = new twoForm();

}
