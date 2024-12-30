#include "static_class.h"
#include <iostream>
using namespace std;

unsigned int Staticclass::count{0};
unsigned int Staticclass::getCount()
{
    return count;
}

Staticclass::Staticclass(const string &first, const string &last) : firstName{first}, lastName{last}
{
    ++count;
    cout << "employee constructor for " << firstName << " "
         << lastName << " called" << endl;
}

Staticclass::~Staticclass()
{
    cout << "~employee() called for " << firstName << " "
         << lastName << endl;
}

string Staticclass::getFirstName() const
{
    return firstName;
}
string Staticclass::getLastName() const
{
    return lastName;
}