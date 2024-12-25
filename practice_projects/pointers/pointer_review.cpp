#include <iostream>
using namespace std;
int main()
{
    int y{5};
    int *yptr;
    yptr = &y;
    cout << "yptr = " << *yptr << endl;
    cout << "yptr = " << yptr << endl;

    int z;
    int *zptr = &z;
    *zptr = 7;
    cout << "z = " << z;
    cout << "\nz location in memory = " << &z
         << "\n*zptr = " << *zptr
         << "\n*zptr location in memory = " << zptr;
}