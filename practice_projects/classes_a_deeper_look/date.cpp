// Date class member function definition'
#include <sstream>
#include <string>
#include "date.h"

using namespace std;
Date ::Date(unsigned int m, unsigned int d, unsigned int y) : month{m},
                                                              day{d}, year{y}
{
}
// print date in string format mm/dd/yyyy
string Date::toString() const
{
    ostringstream output;
    output << month << '/' << day << '/' << year;
    return output.str();
}