#include <string>
#ifndef TIMER_H
#define TIMER_H
class Timer
{
private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};

public:
    explicit Timer(int = 0, int = 0, int = 0);
    ~Timer();
    // set functions (the Time& return types enables cascading)
    Timer &setTime(int, int, int);
    Timer &setHour(int);
    Timer &setMinute(int);
    Timer &setSecond(int);

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    std::string toUniversalString() const;
    std::string toStandardString() const;
};

#endif