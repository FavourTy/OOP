#include <iostream>
#include "phone_numbr_class.h"
using namespace std;

int main()
{
    PhoneNumber phone; // create object phone
    cout << "Enter phone number in the form (555) 555-5555:" << endl;

    cin >> phone;
    cout << "Phone Number entered was:\n";

    cout << phone << endl;
}