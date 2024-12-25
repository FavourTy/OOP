/*Create an employee management system using inheritance.*/
/*Demonstrate virtual functions and polymorphism by using base class pointers to access
derived objects.
*/

#include <iostream>
#include "inheritance_and_polymorphism.h"
using namespace std;

int main()
{

    Manager manger1("", 0, 0);              // Create a Manager object
    Engineer engineer1("Perez", 30'000, 3); // Create an Engineer object

    Employee *emp1 = &manger1;   // Pointer to Manager object
    Employee *emp2 = &engineer1; // Pointer to Engineer object

    // Declare variables for user input
    std::string name;
    double salary;
    double bonus;

    // Prompt the user to enter the Manager's name and set it using the setName function
    cout << "Manager's name: ";
    cin >> name;
    emp1->setName(name); // Use the Employee pointer to set the Manager's name

    // Prompt the user to enter the Manager's base salary and set it using the setSalary function
    cout << "Manager's base salary: ";
    cin >> salary;
    emp1->setSalary(salary); // Use the Employee pointer to set the Manager's salary

    // Prompt the user to enter the Manager's bonus and set it directly using the Manager object
    cout << "Manager's bonus: ";
    cin >> bonus;
    manger1.setBonus(bonus); // Directly set the bonus for the Manager object

    emp1->calculateSalary(); // Calculate and display the total salary for the Manager using the Employee pointer
    emp2->calculateSalary(); // Calculate and display the total salary for the Engineer using the Employee pointer
}