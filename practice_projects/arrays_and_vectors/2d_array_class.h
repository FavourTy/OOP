#include <iostream>
#include <string>
#include <iomanip>

class Gradebook
{
public:
    // constants
    static const size_t students{10};
    static const size_t tests{3};

    Gradebook(const std::string &name, std::array<std::array<int, tests>, students> &gradesArray) : courseName(name), grades(gradesArray)
    {
    }

    // fxn to set course name
    void setName(const std::string &name)
    {
        courseName = name;
    }

    // getcoursename
    const std::string &getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        // call getname
        std::cout << "Welcome to the grade book for\n"
                  << getCourseName() << "!" << std::endl;
    }

    void processGrades() const
    {
        outputGrades();
        // call fxn getAverage to calc average grade

        // call fxn getMinimum and getMax
        std::cout << "Lowest grade is " << getMinimum()
                  << "\nHighest grade is " << getMaximum() << std::endl;
        outputBarchart();
    }

    int getMinimum() const
    {
        int lowGrade{100};
        for (auto const &student : grades)
        {
            // loop through column of current row
            for (auto const &grade : student)
            {
                if (grade < lowGrade)
                {
                    lowGrade = grade;
                }
            }
        }
        return lowGrade;
    }

    int getMaximum() const
    {
        int HighGrade{0};
        for (auto const &student : grades)
        {
            // loop through column of current row
            for (auto const &grade : student)
            {
                if (grade > HighGrade)
                {
                    HighGrade = grade;
                }
            }
        }
        return HighGrade;
    }

    // determine average grade for particular set of grades
    double getAverage(const std::array<int, tests> &setOfGrades) const
    {
        int total{0};

        for (int grade : setOfGrades)
        {
            total += grade;
        }
        return static_cast<double>(total) / setOfGrades.size();
    }
    // display asterisks

    void outputBarchart() const
    {
        std::cout << "\nOverall grade distribution:" << std::endl;

        // stores frequency of grades in each range of 10 grades
        const size_t frequencySize{11};
        std::array<unsigned int, frequencySize> frequency{}; // init to 0s

        // for each grade, increment the ap{propiate frequency
        for (auto const &student : grades)
        {
            for (
                auto const &test : student)
            {
                ++frequency[test / 10];
            }
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

    void outputGrades() const
    {
        std::cout << "\nThe grades are:\n\n";
        std::cout << "             "; // align column heads

        for (size_t test{0}; test < tests; ++test)
        {
            std::cout << "Test " << test + 1 << " ";
        }
        std::cout << "Average" << std::endl;
        for (size_t student{0}; student < grades.size(); ++student)
        {
            std::cout << "Student " << std::setw(2) << student + 1;

            // output student's grades

            for (size_t test{0}; test < grades[student].size(); ++test)
            {
                std::cout << std::setw(8) << grades[student][test];
            }
            double average{getAverage(grades[student])};
            std::cout << std::setw(9) << std::setprecision(2) << std ::fixed << average << std::endl;
        }
    }

private:
    std::string courseName;
    std::array<std::array<int, tests>, students> grades;
};