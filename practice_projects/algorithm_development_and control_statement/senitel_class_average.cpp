#include <iostream>
#include <iomanip> //parameterized stream manipulators
using namespace std;
int main()
{
    int tota1{0};
    unsigned int gradeCounter{0};
    cout << "Enter grade or -1 to quit ";
    int grade;
    cin >> grade;
    while (grade != -1)
    {
        tota1 = tota1 + grade;
        gradeCounter = gradeCounter + 1;
        cout << "Enter grade or -1 to quit ";
        cin >> grade;
    }
    if (gradeCounter != 0)
    {
        double average{static_cast<double>(tota1) / gradeCounter};
        cout << "\nTotal of the " << gradeCounter
             << " grades entered is " << tota1;
        cout << setprecision(2) << fixed;
        cout << "\nClass average is " << average << endl;
    }
    else
    {
        cout << "No grades were entered" << endl;
    }
    return 0;
}