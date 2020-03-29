#ifndef CDateClass_H
#define CDateClass_H

class CDate
{
    // access modifier
public:
    // in absence of modifier, is private.
    typedef int date_elem;

private:
    // member data
    date_elem mDay, mMonth, mYear;
    bool isvalid(date_elem pD, date_elem pM, date_elem pY);

public:
    CDate(void); // default constructor
    CDate(date_elem pD, date_elem pM, date_elem pY);
    CDate(const CDate& p); // copy constructor
    CDate &operator=(const CDate &Y); // assignment operator
    //distructor
    // ~CDate(void);

    void init(date_elem pD, date_elem pM, date_elem pY);

    void add_day(date_elem pD);
    void add_month(date_elem pM);
    void add_year(date_elem pY);

}; // remember ;

#endif
