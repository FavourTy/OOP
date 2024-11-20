#include <iostream>
#include <iomanip>
#include <string>
#include "dollarAmount_class.h"
using namespace std;

int main()
{
    DollarAmount d1{12345};
    DollarAmount d2{1576};
    cout << d1.tostring() << endl;
    cout << "After adding d2 (" << d2.tostring() << ") into  d1 (" << d1.tostring() << ") d1 = ";
    d1.add(d2); // modifies object d1;
    cout << d1.tostring() << "\n";

    cout << "After substracting d1 (" << d1.tostring() << ") from d2 (" << d2.tostring() << ") d2 = ";
    d2.substract(d1); // modifies object d2
    cout << d2.tostring() << "\n";

    cout << "After substracting d2 (" << d2.tostring() << ") from d1 (" << d1.tostring() << ") d1 = ";
    d1.substract(d2);
    cout << d1.tostring() << "\n\n";

    cout << "Enter integer interest rate and divisor. for example :\n"
         << "for     2%,   enter:    2 100\n"
         << "for   2.3%,   enter:   23 1000\n"
         << "for  2.37%,   enter:  237 10000\n"
         << "for 2.375%,   enter: 2375 100000\n>";
    int rate;
    int divisor;
    cin >> rate >> divisor;
    DollarAmount balance{1000000};
    cout << "\nIntial balance: " << balance.tostring() << endl;

    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
    for (unsigned int year{1}; year <= 10; ++year)
    {
        balance.addInt(rate, divisor);
        cout << setw(4) << year << setw(20) << balance.tostring() << endl;
    }
}