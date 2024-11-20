#include <iostream>
#include "maximum.h"
using namespace std;
int main()
{
    cout << "Input three integer value is: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;
    cout << "\nmaximum value is " << maximum(int1, int2, int3) << endl;

    cout << "\nInput three integer value is: ";
    double double1, double2, double3;
    cin >> double1 >> double2 >> double3;
    cout << "\nmaximum value is " << maximum(double1, double2, double3) << endl;

    cout << "\nInput three integer value is: ";
    char char1, char2, char3;
    cin >> char1 >> char2 >> char3;
    cout << "\nmaximum value is " << maximum(char1, char2, char3) << endl;
}