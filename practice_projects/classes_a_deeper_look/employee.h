#include <string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "date_class.h"
class Employee
{
private:
    std::string firstName; // composiion member object
    std::string lastName;  // composiion member object
    const Dater birthDate; // composiion member object
    const Dater hireDate;  // composiion member object
public:
    Employee(const std::string &, const std::string &, const Dater &, const Dater &);
    std::string toString() const;
    ~Employee();
};

#endif
