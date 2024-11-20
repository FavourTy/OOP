#include <iostream>
using namespace std;
int num{7}; // global var
int main()
{
    double num{10.5};
    cout << "Local double value of number = " << num
         << "\nGlobal int value of number = " << ::num << endl;

    // Always using the unary scope resolution operator ( :: ) to refer to
    // global variables (even if there is no collision with a local-variable
    // name) makes it clear that you’re intending to access a global variable
    // rather than a local variable.
}