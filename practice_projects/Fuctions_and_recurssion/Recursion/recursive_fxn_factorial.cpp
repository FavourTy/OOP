// Recursive fxn facrorial
#include <iomanip>
#include <iostream>
using namespace std;
unsigned long factorial(unsigned long);
int main()
{
    for (unsigned int counter; counter <= 10; ++counter)
    {
        cout << setw(2) << counter << "!" << factorial(counter) << endl;
    }
}
unsigned long factorial(unsigned long num)
{
    if (num <= 1)
    {             // test for base cases
        return 1; // base cases: 0! = 1 and 1! = 1
    }
    else
    {
        // recursion step
        return num * factorial(num - 1);
    }
}