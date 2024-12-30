#include <string>
#ifndef SAT_H
#define SAT_H
class Dater
{
private:
    unsigned int month; // 1-12(January-December)
    unsigned int day;   // 1-31 based on month
    unsigned int year;  // any year
    // utility function to check if day is prosper for month and year
    unsigned int checkDay(int) const;

public:
    explicit Dater(unsigned int = 1, unsigned int = 1, unsigned int = 1990);
    ~Dater();
    std::string toString() const;
    static const unsigned int monthPerYear{12}; // month in a year
};
#endif
