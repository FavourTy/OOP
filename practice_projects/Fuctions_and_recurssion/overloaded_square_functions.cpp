#include <iostream>
using namespace std;
int squarefunction(int x)
{
    cout << "square of integer " << x << " is ";
    return x * x;
}
double squarefunction(double y)
{
    cout << "square of double " << y << " is ";
    return y * y;
}
int main()
{
    cout << squarefunction(7);
    cout << endl;
    cout << squarefunction(7.5);
    cout << endl;
}
// Overloaded functions are distinguished by their signatures. A
// signature is a combination of a function’s name and its parameter
// types (in order).