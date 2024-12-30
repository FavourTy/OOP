#include <iostream>
#include "date_class.h"
#include "employee.h"
using namespace std;

int main()
{
    Dater birth{7, 24, 1949};
    Dater hire{3, 12, 1998};
    Employee manager{"Bob", "Blue", birth, hire};

    cout << "\n"
         << manager.toString() << endl;
}
