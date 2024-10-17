#include <iostream>
#include <string>

class Employee
{
public:
    Employee(std::string name, std::string ltName, int intialSalary)
        : firstName{name}, lastName{ltName}
    {
        if (intialSalary > 0)
        {
            montlySalary = intialSalary;
        }
    }
    int getYearlysalary()
    {
        return montlySalary * 12;
    }
    void Percentris(int percR)
    {
        montlySalary = (montlySalary * percR) / 100;
    }
    void setFirstName(std::string employeeFirstName)
    {
        firstName = employeeFirstName;
    }
    std::string getFirstName()
    {
        return firstName;
    }
    void setLastName(std::string employeeLastName)
    {
        lastName = employeeLastName;
    }
    std::string getLastName()
    {
        return lastName;
    }
    void setMontlySalary(int employeeMontlySalary)
    {
        montlySalary = employeeMontlySalary;
    }
    int getMontlySalary()
    {
        return montlySalary;
    }

private:
    std ::string firstName;
    std ::string lastName;
    int montlySalary{0};
};