#include <iostream>
using namespace std;
#include "date.h"

int main()
{
    Date dat1{7, 4, 2001};
    Date dat2;

    cout << "date1 = " << dat1.toString()
         << "\ndate2 = " << dat2.toString() << "\n\n";

    dat2 = dat1; // default memberwise assignment

    cout << "After default memberwise ass  date2 = " << dat2.toString() << endl;
}