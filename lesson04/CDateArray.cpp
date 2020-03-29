#include "CDateArray.h"

CDateArray::CDateArray(unsigned int nDates){
    mDates = new CDate[nDates];
    mSize = nDates;
}

CDateArray::~CDateArray(void){
    delete[] mDates;
    // NULL is not defined. is the same that 0
    mDates = 0;
    mSize = 0;
}