#include <iostream>
#include "timer.h"

using namespace std;

int main()
{
    Timer t;
    t.setHour(18).setMinute(30).setSecond(22); // cascaded function calls

    cout << "Universal time: " << t.toUniversalString()
         << "\nStandard time: " << t.toStandardString();

    // cascaded function calls
    cout << "\nNew standard Time: "
         << t.setTime(20, 20, 20).toStandardString() << endl;
}