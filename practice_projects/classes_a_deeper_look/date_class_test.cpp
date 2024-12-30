#include <array>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "date_class.h"
using namespace std;

// constructor confirms proper value for month calls
// utility function checkDay to confirm proper value for day

Dater ::Dater(unsigned int mn, unsigned int dy, unsigned int yr) : month{mn},
                                                                   day{checkDay(dy)}, year{yr}
{
    if (mn < 1 || mn > monthPerYear)
    {
        throw invalid_argument("month must be 1-12");
    }
    // output Date object to show when its constructor is called
    cout << "Date object constructor for date " << toString() << endl;
}

string Dater::toString() const
{
    ostringstream output;
    output << month << '/' << day << '/' << year;
    return output.str();
}

Dater ::~Dater()
{
    cout << "Date object destructor for date " << toString() << endl;
}

unsigned int Dater::checkDay(int testDay) const
{
    static const array<int, monthPerYear + 1> daysPerMonth{
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // determine whether testDay is valid for specified month
    if (testDay > 0 && testDay <= daysPerMonth[month])
    {
        return testDay;
    }

    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        return testDay;
    }
    throw invalid_argument("invalid day for current month and year");
}
