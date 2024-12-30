#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <iomanip>
#include "explicit_constructors.h"
using namespace std;

Sigh::Sigh(int hour, int min, int sec)
{
    setTime(hour, min, sec);
}
void Sigh::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Sigh::setHour(int h)
{
    if (h >= 0 && h < 24)
    {
        hour = h;
    }
    else
    {
        throw invalid_argument("hour must be 0-23");
    }
}
void Sigh::setMinute(int m)
{
    if (m >= 0 && m < 60)
    {
        minute = m;
    }
    else
    {
        throw invalid_argument("minute must be 0-59");
    }
}
void Sigh::setSecond(int s)
{
    if (s >= 0 && s < 60)
    {
        second = s;
    }
    else
    {
        throw invalid_argument("second must be 0-59");
    }
}
unsigned int Sigh::getHour() const
{
    return hour;
}
unsigned int Sigh ::getMinute() const
{
    return minute;
}
unsigned int Sigh::getSecond() const
{
    return second;
}

std::string Sigh::toUniversalString() const
{
    ostringstream output;
    output << setfill('0') << setw(2) << getHour() << ":"
           << setw(2) << getMinute() << ":" << setw(2) << getSecond();
    return output.str();
}
std::string Sigh::toStandardString() const
{
    ostringstream output;
    output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
           << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
           << getSecond() << (hour < 12 ? " AM " : "PM");
    return output.str();
}