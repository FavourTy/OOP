// letter Grades

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int total{0};
    unsigned gradeCounter{0};
    int aCount{0};
    int bCount{0};
    int cCount{0};
    int dCount{0};
    int fCount{0};
    cout << "Enter the integer grades in the range 0-100. \n"
         << "Type the end-of-file indicator to terminate input: \n"
         << "On UNIX/Linux/Mac Os X type <Ctrl> d then press Enter\n"
         << "On Windows type <Ctrl> z then press Enter\n";
    int grade;

    while (cin >> grade)

    {
        total += grade;

        ++gradeCounter;
        switch (grade / 10)
        {
        case 9:  // grade was btwn 90
        case 10: // and 100 inclusive
            ++aCount;
            break;
        case 8:
            ++bCount;
            break;
        case 7:
            ++cCount;
            break;
        case 6:
            ++dCount;
            break;
        default:
            ++fCount;
            break;
        }
    }
    cout << fixed << setprecision(2);
    cout << "\nGrade Report:\n";
    if (gradeCounter != 0)
    {
        double average = static_cast<double>(total) / gradeCounter;
        cout << "Total of the " << gradeCounter << "grades entered is "
             << total << "\nClass Average is " << average
             << "\nNumber of students who received each grade:"
             << "\nA: " << aCount << "\nB: "
             << bCount << "\nC: " << cCount << "\nD: "
             << dCount << "\nF: " << fCount << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }
}