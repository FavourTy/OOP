#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class GradeBook
{

public:
    // const no of stu who took the test

    static const size_t students{10};
    GradeBook(const std::string &name, const std::array<int, students> &gradesArray) : courseName{name}, grades{gradesArray}
    {
    }
    void setCourseName(const std::string &name)
    {
        courseName = name;
    }
    const std::string &getCourseName() const
    {
        return courseName;
    }
    // display msg to the gradebook user
    void displayMessage()
        const
    {
        // call getname
        std::cout << "Welcome to the grade book for\n"
                  << getCourseName() << "!" << std::endl;
    }

    // output the contents of the grades array
    void outputGrades()
        const
    {
        std::cout << "\nThe grades are:\n\n";

        // output each student grade
        for (size_t student{0}; student < grades.size(); ++student)
        {
            std::cout << "Student " << std::setw(2) << student + 1 << ": "
                      << std::setw(3) << grades[student] << std::endl;
        }
    }

    // perform various operations on the data (none modify d data)
    void processGrades() const
    {
        outputGrades();
        // call fxn getAverage to calc average grade
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "\nClass average is " << getAverage() << std::endl;

        // call fxn getMinimum and getMax
        std::cout << "Lowest grade is " << getMinimum()
                  << "\nHighest grade is " << getMaximum() << std::endl;

        outputBarchart();
    }

    int getMinimum() const
    {
        int lowGrade{100}; // assume lowest grade is 100
        for (int grade : grades)
        {
            if (grade < lowGrade)
            {
                lowGrade = grade;
            }
        }
        return lowGrade;
    }
    double getAverage() const
    {
        int total{0};
        for (int grade : grades)
        {
            total += grade;
        }
        return static_cast<double>(total) / grades.size();
    }
    int getMaximum() const
    {
        int highGrade{0}; // assume highest grade is 100
        for (int grade : grades)
        {
            if (grade > highGrade)
            {
                highGrade = grade;
            }
        }
        return highGrade;
    }
    void outputBarchart() const
    {
        std::cout << "\nGrade distribution:" << std::endl;

        // stores frequency of grades in each range of 10 grades
        const size_t frequencySize{11};
        std::array<int, frequencySize> frequency{};

        // for each grade, increment the ap{propiate frequency
        for (int grade : grades)
        {
            ++frequency[grade / 10];
        }
        for (size_t count{0}; count < frequencySize; ++count)
        {
            {
                if (0 == count)
                {
                    std::cout << " 0-9: ";
                }
                else if (10 == count)
                {
                    std::cout << " 100: ";
                }
                else
                {
                    std::cout << count * 10 << "-" << (count * 10) + 9 << ": ";
                }
                for (unsigned int stars{0}; stars < frequency[count]; ++stars)
                {
                    std::cout << "*";
                }
                std::cout << std ::endl;
            }
        }
    }

private:
    std::string courseName;
    std::array<int, students> grades;
};