#include <iostream>
#include <iomanip>
using namespace std;

int input{0};

int main()
{
    int milesDriven;
    cout << "Enter miles driven (-1 to quit ): " << endl;
    cin >> milesDriven;
    int gallons;
    cout << "Enter Gallons used";
    cin >> gallons;
    while (true)
    {

        double mpg{static_cast<double>(milesDriven) / gallons};
        double totalMphg{static_cast<double>(totalMphg) + mpg};
        if (milesDriven == -1)
        {
            break;
        }
        cout << "MPG this trip" << mpg << endl;
        cout << "Total MPG " << totalMphg << endl;
        cout << "Enter miles driven (--1 to quit ): " << endl;
        cin >> milesDriven;
        cout << "Enter Gallons used";
        cin >> gallons;
    }
    // if (milesDriven == -1)
    // {
    //     cout << "Program fail";
    // }
}