#include <iostream>
#include <stdexcept>
#include "explicit_constructors.h"
using namespace std;
void displayTime(const string &msg, const Sigh &sigh);

int main()
{
    Sigh t1;
    Sigh t2{2};
    Sigh t3{21, 34};
    Sigh t4{12, 25, 42};

    cout << "Constructed with:\n\n";
    displayTime("t1 : all args defaulted", t1);
    displayTime("t2: hour specified; minute and second defaulted", t2);
    displayTime("t3: hour and  minute specified; second defaulted", t3);
    displayTime("t4: hour, minute and second specified", t4);

    try
    {
        Sigh t5(98, 99, 99);
    }

    catch (invalid_argument &e)
    {
        cerr << "Exception while initializing t5: " << e.what() << endl;
    }
}

void displayTime(const string &msg, const Sigh &sigh)
{
    cout << msg << "\nUniversal time: " << sigh.toUniversalString() << "\nStandard time: " << sigh.toStandardString() << "\n\n";
}