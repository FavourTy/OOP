#include <string>
#include <iostream>
#include "health_records_computerization.h"
using namespace std;

int main()
{
    std::string fName;
    std::string lName;
    std::string gde;
    int height;
    int weight;
    int year;
    int month;
    int day;
    HealthProfile userHealthProfile{fName, lName, gde, height, weight, day, year, month};
    // HealthProfile profile{"Favour", "Adeyemi", "female", 58, 53, 06, 2003, 15};
    cout << "Input your FirstName :" << endl;
    cin >> fName;
    userHealthProfile.setFirstname(fName);
    cout << "Input your LastName :" << endl;
    cin >> lName;
    userHealthProfile.setLastName(lName);
    cout << "Input your Gender :" << endl;
    cin >> gde;
    userHealthProfile.setGender(gde);
    cout << "Input your Height in Inches :" << endl;
    cin >> height;
    userHealthProfile.setHeight(height);
    cout << "Input your Weight in Pounds :" << endl;
    cin >> weight;
    userHealthProfile.setWeight(weight);
    cout << "Input the year you were born :" << endl;
    cin >> year;
    userHealthProfile.setYear(year);
    cout << "Input the month you were born :" << endl;
    cin >> month;
    userHealthProfile.setMonth(month);
    cout << "Input the day you were born :" << endl;
    cin >> day;
    userHealthProfile.setDay(day);

    userHealthProfile.DisplayInfo();
    return 0;
}