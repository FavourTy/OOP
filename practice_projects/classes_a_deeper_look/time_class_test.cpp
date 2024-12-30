#include <iostream>
#include <stdexcept>
#include "time.h"
using namespace std;
void displayTime(const string &message, const Time &time);

int main()
{
    Time t; // instance object of class time
    displayTime("Intial time: ", t);
    int hour;
    int min;
    int sec;
    cout << "what is the time? ";
    cin >> hour >> min >> sec;
    t.setTime(hour, min, sec);
    displayTime("\nAfter inputing time", t);
    t.setTime(13, 27, 6); // change time
    displayTime("\nAfter set time: ", t);

    try
    {
        t.setTime(98, 99, 99);
    }

    catch (invalid_argument &e)
    {
        cout << "Exception: " << e.what() << "\n\n";
    }

    displayTime("After attempting to set an Invalid Time: ", t);
}

void displayTime(const string &message, const Time &time)
{
    cout << message << "\nuniversal time: " << time.toUniversalString()
         << "\nStandard time: " << time.toStandardString() << "\n\n";
}
