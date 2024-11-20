#include <string>
#include <iostream>
class HealthProfile
{
public:
    HealthProfile(std::string FirstName, std::string LastName, std::string Gender, int Height, int Weight, int Month, int Year, int Day)
        : firstName{FirstName}, lastName{LastName},
          gender{Gender}, day{Day}, height{Height},
          weight{Weight}, month{Month},
          year{Year}

    {
    }
    int calcAge() const
    {
        return 2024 - year;
    }
    int calcMhR() const
    {
        return 220 - calcAge();
    }
    int calcThR() const
    {
        return (220 - calcMhR()) * 70 / 100;
    }
    int calcBMI() const
    {
        return (weight * 703) / (height * height);
    }
    void setFirstname(std::string FirstName)
    {
        firstName = FirstName;
    }
    std::string getFirstName()
    {
        return firstName;
    }
    void setLastName(std::string LastName)
    {
        lastName = LastName;
    }
    std::string getLastName()
    {
        return lastName;
    }
    void setGender(std::string Gender)
    {
        gender = Gender;
    }
    std::string getGender()
    {
        return gender;
    }
    void setMonth(int Month)
    {
        month = Month;
    }
    int getMonth()
    {
        return month;
    }
    void setYear(int Year)
    {
        year = Year;
    }
    int getYear()
    {
        return year;
    }
    void setDay(int Day)
    {
        day = Day;
    }
    int getDay()
    {
        return day;
    }
    void setWeight(int Weight)
    {
        weight = Weight;
    }
    int getWeight()
    {
        return weight;
    }
    void setHeight(int Height)
    {
        height = Height;
    }
    int getHeight()
    {
        return height;
    }

    void DisplayInfo() const
    {
        std::cout << "Your name is " << firstName << lastName << std::endl;
        std::cout << "Your Date of birth is " << day << "/" << month << "/" << year << std::endl;
        std::cout << "You are a " << gender << std::endl;
        std::cout << "You are " << height << " inches tall" << std::endl;
        std::cout << "You weigh " << weight << " pounds" << std::endl;
        std::cout << "You are " << calcAge() << " Years old" << std::endl;
        std::cout << "Your Maximum Heart Rate is " << calcMhR() << std::endl;
        std::cout << "Your Target Heart Rate Range is " << calcThR() << " beats per minute" << std::endl;
        std::cout << "Your Body Mass Index Value is " << calcBMI() << std::endl;
        std::cout << "BMI Values: Evaluate your BMI" << std::endl;
        std::cout << "Underweight : less than 18.5" << std::endl;
        std::cout << "Normal : between 18.5 and 24.9" << std::endl;
        std::cout << "Overweight : between 25 and 29.9 " << std::endl;
        std::cout << "Obese : 30 0r greater" << std::endl;
    }

private:
    std::string firstName;
    std::string lastName;
    std::string gender;
    int month{0};
    int year{0};
    int day{0};
    int height{0};
    int weight{0};
};