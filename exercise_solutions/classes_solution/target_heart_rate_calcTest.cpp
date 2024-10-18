#include <iostream>
#include <string>
#include "target_heart_rate_calc.h"
using namespace std;

void ToDispaly(HeartRates toDisplay)
{
    cout << "Your name is " << toDisplay.geetFirstName() << toDisplay.getLastName() << endl;
    cout << "Your Date of birth is " << toDisplay.getDay() << "/" << toDisplay.getmMonth() << "/" << toDisplay.getYear() << endl;
    cout << "You are " << toDisplay.getAge() << " Years old" << endl;
    cout << "Your Maximum Heart Rate is " << toDisplay.getHeartrate() << endl;
    cout << "Your Target Heart Rate Range is " << toDisplay.getThrg() << " beats per minute" << endl;
}

int main()
{
    HeartRates miHeartRate{"Favour Adetayo", " Adeyemi", 06, 2003, 15};
    HeartRates miHeartRate2{"Faith kehinde", " Adeyemi", 06, 2007, 11};
    cout << "print the user info" << endl;
    ToDispaly(miHeartRate);
    ToDispaly(miHeartRate2);
    return 0;
}