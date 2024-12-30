// time.h
//  Time class definition
//  Member functions are defined in time.cpp
// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

#include <string>

class Time
{
public:
    void setTime(int, int, int);           // set hour, minute and second
    std::string toUniversalString() const; // 24 hour time format string
    std::string toStandardString() const;  // 12 hour time format string

private:
    unsigned int hour{0};   // 0-23{24-hour clock format}
    unsigned int minute{0}; // 0-59
    unsigned int second{0}; // 0 - 59
};

#endif