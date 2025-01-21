// overloaded stream insertion and extraction operators
// for class phonenumbers
#include <iomanip>
#include "phone_numbr_class.h"
using namespace std;

ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output << "Area Code: " << number.areaCode << "\nExchange: " << number.exchange
           << "\nLine: " << number.line << "\n"
           << "(" << number.areaCode << ") " << number.exchange << "-"
           << number.line << "\n";
    return output; // enables cout << a << b << c
}

// overloaded stream extraction operator; cannot be a member function
//  if we would invoke it with cin >> somePhoneNumber;
istream &operator>>(istream &input, PhoneNumber &number)
{
    input.ignore();                      // skip (
    input >> setw(3) >> number.areaCode; // input area code
    input.ignore(2);                     // skip) and space
    input >> setw(3) >> number.exchange; // input exchange
    input.ignore();                      // skip dash
    input >> setw(4) >> number.line;     // input line
    return input;                        // enables cin >> a>> b>> c
}