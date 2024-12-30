#include <string>
#ifndef TIME_H
#define TIME_H

class Sigh
{
private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};

public:
    explicit Sigh(int = 0, int = 0, int = 0); // default constructor
    // set functions
    void setTime(int, int, int); // set hour
    void setHour(int);           // set hour(after validation)
    void setMinute(int);         // set minute (after validation)
    void setSecond(int);         // set second (after validation)
    // get functions
    unsigned int getHour() const;   // return hour
    unsigned int getMinute() const; // return minute
    unsigned int getSecond() const; // return  second

    std::string toUniversalString() const; // 24-hour time format string
    std::string toStandardString() const;  // 12-hour time format string
};

#endif
