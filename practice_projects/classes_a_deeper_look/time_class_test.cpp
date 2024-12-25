#include <iostream>
#include <stdexcept>
#include "time.h"
using namespace std;

void displayTime(const string &message, const Time &time)
{
    cout << message << "\universal time: " << time.toUniversalString()
         << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main()
{
    Time t; // instance object of class time
    displayTime("Intial time: ", t);
    t.setTime(13, 27, 6); // change time
    displayTime("After set time: ", t);

    try
    {
        t.setTime(98, 99, 99);
        catch (invalid_argument &e)
        {
            cout << "Exception: " << e.what() << "\n\n";
        }
    }
    displayTime("After attempting to set an Invalid Time: ", t);
}