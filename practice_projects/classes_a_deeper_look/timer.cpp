#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <string>
#include "timer.h"
using namespace std;

// constructor function to initialize private data
// calls member function setTime to set variables;
// default values are 0(see class definition)

Timer::Timer(int hr, int min, int sec)
{
    setTime(hr, min, sec);
}

Timer ::~Timer()
{
}

Timer &Timer::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
    return *this; // enables cascading
}

Timer &Timer::setHour(int h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        throw invalid_argument("hour must be 0-23");
    }
    return *this; // enables cascading
}

Timer &Timer::setMinute(int m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        throw invalid_argument("minute must be 0-59");
    }
    return *this; // enables cascading
}

Timer &Timer::setSecond(int s)
{
    if (s >= 0 && s < 60)
    {
        second = s;
    }
    else
    {
        throw invalid_argument("second must be 0-59");
    }
    return *this; // enables cascading
}

unsigned int Timer::getHour() const
{
    return hour;
}

unsigned int Timer::getMinute() const
{
    return minute;
}

unsigned int Timer::getSecond() const
{
    return second;
}

string Timer::toUniversalString() const
{
    ostringstream output;
    output << setfill('0') << setw(2) << getHour() << ":"
           << setw(2) << getMinute() << ":" << setw(2)
           << getSecond();
    return output.str();
}

string Timer::toStandardString() const
{
    ostringstream output;
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
           << getSecond() << (hour < 12 ? "AM" : "PM");
    return output.str();
}