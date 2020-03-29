#include "CDateClass.h"
#include "CDateArray.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    
    CDate d;

    CDate::date_elem e=10;

    d.init(7,11,2007);
    d.add_month(1);
    d.add_day(e);

    CDateArray october(31);
    // copy object with constructor
    CDate cop = d;
    // same value but different memory location (address)
    cout << &d << endl;
    cout << &cop << endl;

    CDate *p_d2 = new CDate(1,1,2000);
    // assignment operator = (!= from copy constructor)
    *p_d2 = d; 

    return 0;
}