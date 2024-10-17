#include <iostream>
#include "date.h"
#include <string>
using namespace std;

int main()
{
    DateClass dima{12, 01, 2003};
    cout << "Month : " << dima.getMonth() << endl;
    cout << "Today\'s date is";
    dima.displayDate();
    return 0;
}