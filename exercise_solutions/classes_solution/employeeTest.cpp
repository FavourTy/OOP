#include <iostream>
#include "employee.h"
#include <string>
using namespace std;

int main()
{
    Employee employee1{"Favour Adetayo", " Adeyemi", 9000};
    Employee employee2{"Opeyemi Babatunde", " Oyedokun", -7000};
    cout << employee1.getFirstName() << employee1.getLastName() << " yearly salary is " << employee1.getYearlysalary() << endl;
    cout << employee2.getFirstName() << employee2.getLastName() << " yearly salary is " << employee2.getYearlysalary() << endl;
    // 10 percent raise for employee 1
    int percentRaise;
    cout << "How many percent raise : " << endl;
    cin >> percentRaise;
    employee1.Percentris(percentRaise);
    cout << employee1.getFirstName() << employee1.getLastName() << " yearly salary is " << employee1.getYearlysalary() << endl;
    // 10 pecent Raise for employee 2
    cout << "How many percent raise : " << endl;
    cin >> percentRaise;
    employee2.Percentris(percentRaise);
    cout << employee2.getFirstName() << employee2.getLastName() << " yearly salary is " << employee2.getYearlysalary() << endl;
}