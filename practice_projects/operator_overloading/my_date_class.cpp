/*Date class member and
 friend function definition*/

#include <iostream>
#include <string>
#include "my_date_class.h"
using namespace std;
const array<unsigned int, 13> Date::days{
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31};

Date::Date(int month, int day, int year)
{
    setDate(month, day, year);
}

void Date::setDate(int mn, int dy, int yr)
{
    if (mn >= 1 && mn <= 12)
    {
        month = mn;
    }
    else
    {
        throw invalid_argument{"month must be 1-12"};
    }
    if (yr >= 1900 && yr <= 2100)
    {
        year = yr;
    }
    else
    {
        throw invalid_argument{"Year must be >=1900 and <=2100"};
    }
    if ((mn == 2 && leapYear(year) && dy >= 1 && dy <= 29) || (dy >= 1 && dy <= days[mn]))
    {
        day = dy;
    }
    else
    {
        throw invalid_argument{"Day is out of range for current month and year"};
    }
}
// overloaded prefix increment operator
Date &Date::operator++()
{
    helpIncrement(); // increment date
    return *this;    // reference return to create an lvalue
}
/*overloaded postfix increment operator

note that the dummy integer parameter does not have a parameter name*/
Date &Date::operator++(int)
{
    Date temp{*this};
    helpIncrement();

    // return incremented, saved, temporary object
    return temp; // value return; not a reference return
}

// add specified number of days to date
Date &Date::operator+=(unsigned int additionalDays)
{
    for (unsigned int i = 0; i < additionalDays; ++i)
    {
        helpIncrement(); // increment date
    }
    return *this; // enables cascading
}

/*if the year is a leap year,
return true; otherwise, return false*/

bool Date::leapYear(int testYear)
{
    return (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0));
}
bool Date::endOfMonth(int testDay) const
{
    if (month == 2 && leapYear(year))
    {
        return testDay == 29; // last day of feb. in leap year
    }
    else
    {
        return testDay == days[month];
    }
}

// function to help increment the date

void Date::helpIncrement()
{
    // day is not end of the month
    if (!endOfMonth(day))
    {
        ++day;
    }
    else
    {
        if (month < 12)
        {            // day is end of month and month < 12
            ++month; // increment month
            day = 1; // first day of the month
        }
        else
        {
            ++year;    // increment year
            month = 1; // first month of new year
            day = 1;   //  first day of new month
        }
    }
}

ostream &operator<<(ostream &output, const Date &d)
{
    static string monthName[13]{
        "", "January", "Februrary", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};
    output << monthName[d.month] << ' ' << d.day << ", " << d.year;
    return output; // enables cascading
}