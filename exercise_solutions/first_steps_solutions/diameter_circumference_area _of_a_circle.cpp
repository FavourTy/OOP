/*Write a
 program that reads in the radius of a circle as an integer and
 prints the circle’s diameter, circumference and area. Use the
 constant value 3.14159 for π. Do all calculations in output
 statements.
*/

#include <iostream>
using namespace std;

int main()
{
    int radius;
    int diameter;
    int circumference;
    int area;
    const int pie = 3.14159;
    cout << "what is the radius of the circle ?";
    cin >> radius;
    area = pie * radius * radius;
    circumference = 2 * pie * radius;
    diameter = circumference / pie;
    cout << "area is " << area << endl;
    cout << "circumference is " << circumference << endl;
    cout << "diameter is " << diameter << endl;
}
