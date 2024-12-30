#include <iostream>
#include "static_class.h"
using namespace std;

int main()
{

    cout << "Number of employees before instantiation of any object is "
         << Staticclass::getCount() << endl; // use class name
    // Staticclass employee;
    {
        Staticclass e1{"susan", "Baker"};
        Staticclass e2{"Favour", "Lois"};
        cout << "Number of employees after instantiation of object is " << Staticclass::getCount();
        cout << "\n\nEmployee 1: "
             << e1.getFirstName() << " " << e1.getLastName()
             << "\n\nEmployee 2: "
             << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    }

    cout << "\nNumber of employees after objects are deleted is "
         << Staticclass::getCount() << endl;
}