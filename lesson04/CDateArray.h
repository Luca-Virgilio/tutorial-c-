#ifndef CDateArray_H
#define CDateArray_H

#include "CDateClass.h"

class CDateArray{
    public:
    CDateArray(unsigned int nDates);

    CDateArray(void);
    ~CDateArray(void);
    private:
    CDate *mDates;
    unsigned int mSize;

};

#endif