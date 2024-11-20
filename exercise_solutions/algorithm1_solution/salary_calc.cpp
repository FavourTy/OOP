#include <iostream>
using namespace std;
int main()
{
    int salary;
    int hoursWorked;
    cout << "Enter Hours Worked : ";
    cin >> hoursWorked;
    int hourlyRate;
    cout << "Enter Hourly Rate of the employee : ";
    cin >> hourlyRate;
    while (true)
    {

        int salary = hoursWorked * hourlyRate;

        if (hoursWorked > 40)
        {
            salary = (hoursWorked * hourlyRate) + (0.5 * hourlyRate);
            cout << "salary is " << salary << endl;
        }
        else
        {
            cout << "Salary is " << salary << endl;
        }
        cout << "Enter Hours Worked : ";
        cin >> hoursWorked;
        if (hoursWorked == -1)
        {
            break;
        }
        cout << "Enter Hourly Rate of the employee : ";
        cin >> hourlyRate;
    }
}