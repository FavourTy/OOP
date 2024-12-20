#include <iostream>
#include <array>
#include "grade_book_class.h"
using namespace std;

int main()
{
    const array<int, GradeBook::students> grades{
        87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    string courseName{
        "CSC101 Introduction to c++ Programming"};
    GradeBook myGradebook(courseName, grades);
    myGradebook.displayMessage();
    myGradebook.processGrades();
}