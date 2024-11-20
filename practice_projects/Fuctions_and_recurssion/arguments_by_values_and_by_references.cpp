#include <iostream>
using namespace std;
int squaredByValue(int);        // function prototype (value pass)
void squaredByReference(int &); // function prototype (reference pass)

int main()
{
    int x{2};
    int y{3};
    // demonstrate square by value
    cout << "\nx = " << x << " before squared by value\n";
    cout << " value returned by SquaredByValue: "
         << squaredByValue(x) << endl;
    cout << "x = " << x << " after squared by reference\n"
         << endl;
    // demonstrate square by reference
    cout << "y =" << y << " before squared by reference \n";
    cout << "value returned by SquaredByReference: " << endl;
    squaredByReference(y);
    cout << "y = " << y << " after squared by Reference" << endl;
}
int squaredByValue(int num)
{
    return num *= num; // caller argument not modified
}
void squaredByReference(int &numberRef)
{
    numberRef *= numberRef; // caller argument modified
}
