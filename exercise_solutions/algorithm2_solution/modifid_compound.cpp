#include <iostream>
#include <iomanip>
#include <cmath> // for power function
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    double principal{1000.00};
    int year{2};
    cout << "Initial principal " << principal << endl;
    cout << "Interest rate " << year << endl;
    // display headers
    cout << "\nYear"
         << setw(20) << "Amount on deposit" << endl;
    // calc the amt on deposit for each of ten yrs
    // for (unsigned int year{1}; year <= 10; ++year)
    // {
    //     double amount = principal * pow(1.0 + rate, year);
    //     cout << setw(4) << year << setw(20) << amount << endl;
    for (double rate{0.05}; rate <= 0.09; ++rate)
    {
        double amount = principal * pow(1.0 + rate, year);
        cout << setw(4) << rate << setw(20) << amount << endl;
    }
    // }
}