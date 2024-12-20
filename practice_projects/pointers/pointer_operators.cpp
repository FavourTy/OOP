// pointer operators & and *
#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int *aptr = &a;
    cout << "The address of a is " << &a << "\n The address of aptr is " << aptr;
    cout << "\n\nThe value of a is " << a << "\n The value of aptr is " << *aptr << endl;
}