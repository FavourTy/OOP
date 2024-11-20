// square fxn used to demonstrate the fxn
// call stack and activation records

#include <iostream>
using namespace std;
int square(int);
int main()
{
    int a{10};
    cout << a << "squared: " << square(a) << endl;
}
int square(int x)
{
    return x * x;
}