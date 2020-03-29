#include "CDateClass.h"

CDate::CDate(void){
    mDay=1;
    mMonth =1;
    mYear= 1900;
}
CDate:: CDate(date_elem pD, date_elem pM, date_elem pY){
    mDay=pD;
    mMonth= pM;
    mYear = pY;    
}
CDate::CDate(const CDate& p){
    mDay = p.mDay;
    mMonth = p.mMonth;
    mYear = p.mYear;
}

void CDate::init(date_elem pD, date_elem pM, date_elem pY){
    if(isvalid(pD, pM, pY)){
        mDay=pD;
        mMonth= pM;
        mYear = pY;
    }
   
}

CDate&CDate::operator=(const CDate &Y){
    if(&Y != this){
        mDay = Y.mDay;
        mMonth = Y.mMonth;
        mYear = Y.mYear;
    }
    return *this;
}

void CDate::add_day(date_elem pD){
    if(isvalid(mDay+pD,mMonth, mYear)){
    mDay = mDay + pD;
    }
}
void CDate::add_month(date_elem pM){
    if(isvalid(mDay,mMonth + pM, mYear)){
    mMonth = mMonth + pM;
    }
}

void CDate::add_year(date_elem pY){
    if(isvalid(mDay,mMonth, mYear+pY)){
    mYear += pY;
    }
}
bool CDate::isvalid(date_elem pD, date_elem pM, date_elem pY){
    if(pD <= 31 && pM <=12 ) return true;
    else return false;
}