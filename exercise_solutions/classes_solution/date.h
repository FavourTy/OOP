#include <string>
#include <iostream>
class DateClass
{
public:
    DateClass(int displayMonth, int displayDay, int displayYear)
        : day{displayDay}, year{displayYear}
    {

        if (displayMonth == 1 || displayMonth == 2 || displayMonth == 3 || displayMonth == 4 ||
            displayMonth == 5 || displayMonth == 6 || displayMonth == 7 || displayMonth == 8 ||
            displayMonth == 9 || displayMonth == 10 || displayMonth == 11 || displayMonth == 12)
        {
            month = displayMonth;
        }
        else
        {
            month = 1;
        } // a simpler and non-confusing method

        //   if (displayMonth != 1 || displayMonth != 2 || displayMonth != 3 || displayMonth != 4 ||
        //  displayMonth != 5 || displayMonth != 6 || displayMonth != 7 || displayMonth != 8 ||
        // displayMonth != 9 || displayMonth != 10 || displayMonth != 11 || displayMonth != 12

        // )
        //  {
        //  displayMonth = 1;
        //  month = displayMonth;
        // }
        // if (displayMonth != 1)
        // {
        //     displayMonth = 1;
        //     month = displayMonth;
        // }
        // if (displayMonth != 2)
        // {
        //     displayMonth = 1;
        //     month = displayMonth;
        // }
    }

    void displayDate()
        const
    {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }

    void setMonth(int currentMonth)
    {
        month = currentMonth;
    }
    int getMonth()
    {
        return month;
    }
    void setDay(int currentDay)
    {
        month = currentDay;
    }
    int getDay()
    {
        return day;
    }
    void setYear(int currentYear)
    {
        month = currentYear;
    }
    int getYear()
    {
        return year;
    }

private:
    int month;
    int day;
    int year;
};