#include <iostream>
#include <sstream>
#include "employee.h"
#include "date_class.h"
using namespace std;

Employee::Employee(const std::string &first, const std::string &last, const Dater &dateOfBirth, const Dater &dateOfHire) : firstName{first},
                                                                                                                           lastName{last},
                                                                                                                           birthDate{dateOfBirth},
                                                                                                                           hireDate{dateOfHire}

{
    cout << "Employee object constructor: " << firstName << " " << lastName << endl;
}

// print Employee obj
string Employee ::toString() const
{
    ostringstream output;
    output << lastName << ", " << firstName << " Hired: "
           << hireDate.toString() << " Birthday: " << birthDate.toString();
    return output.str();
}

Employee::~Employee()
{
    cout << "Employee object destructor: " << firstName << lastName << endl;
}
