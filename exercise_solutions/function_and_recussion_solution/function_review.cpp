#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2)
{
    return 0.5 * side1 * side2;
}
float hypotenuse(float side1, float side2)
{
    return 0.5 * side1 * side2;
}
int hypotenuse(int side1, int side2)
{
    int result = pow(side1, 2) + pow(side2, 2);
    int finalResult = sqrt(result);
    return finalResult;
}
int smallest(int x, int y, int z)
{
    int smallestValue{x};
    if (smallestValue > y)
    {
        smallestValue = y;
    }
    if (smallestValue > z)
    {
        smallestValue = z;
    }
    return smallestValue;
}
void instruction()
{
    cout << "Hiiiiiii";
}
inline double sphrvolum(const double radius)
{
    double result{1.0};
    result = (4.0 / 3.0) * 3.14159 * pow(radius, 3);
    return result;
}
int main()
{
    int sid1, sid2;
    cout << "Enter the two sides : ";
    cin >> sid1 >> sid2;
    cout << "Hypotenuse is equal to : " << hypotenuse(sid1, sid2);
    int m, p, j;
    cout << "enter three integers : ";
    cin >> m >> p >> j;
    cout << "The smallest integer is " << smallest(m, p, j) << endl;
    cout << "the double value is " << hypotenuse(3.1, 8.8) << endl;
    cout << "the float value is " << hypotenuse(3.1, 8.8) << endl;
    instruction();
    cout << endl;
    double rad;
    cout << "Enter the radius: ";
    cin >> rad;
    cout << setprecision(2) << fixed;
    cout << "The sphere volume is " << sphrvolum(rad) << endl;
}