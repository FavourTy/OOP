/*
 Create a class called
HeartRates. The class
 attributes should include the person’s first name, last name and
 date of birth (consisting of separate attributes for the month,
 day and year of birth). Your class should have a constructor
 that receives this data as parameters. For each attribute
 provide set and get functions. The class also should include a
 member function that calculates and returns the person’s age
 (in years), a member function that calculates and returns the
 person’s maximum heart rate and a member function that
 calculates and returns the person’s target heart rate.
*/

#include <iostream>
#include <string>
class HeartRates
{

public:
    HeartRates(std::string userFirstName, std::string userLastName, int userMonth, int userYear, int userDay) : firstName{userFirstName}, lastName{userLastName}, year{userYear}, month{userMonth}, day{userDay}
    {
    }

    int getAge()
    {
        return dateOfBirth = 2024 - year;
    }

    int getHeartrate()
    {
        return 220 - dateOfBirth;
    }
    int getThrg()
    {
        return (220 - dateOfBirth) * 70 / 100;
    }

    void setFirstName(std::string theFirstName)
    {
        firstName = theFirstName;
    }
    std::string geetFirstName()
    {
        return firstName;
    }
    void setLastName(std::string theLastName)
    {
        lastName = theLastName;
    }
    std::string getLastName()
    {
        return lastName;
    }
    void setDateofBirth(int theDOB)
    {
        dateOfBirth = theDOB;
    }
    int getDOB()
    {
        return dateOfBirth;
    }
    void setMonth(int theMonth)
    {
        month = theMonth;
    }
    int getmMonth()
    {
        return month;
    }
    void setYear(int theYear)
    {
        year = theYear;
    }
    int getYear()
    {
        return year;
    }
    void setDay(int theDay)
    {
        day = theDay;
    }
    int getDay()
    {
        return day;
    }

private:
    std::string firstName;
    std::string lastName;
    int dateOfBirth{0};
    int month{0};
    int year{0};
    int day{0};
};
