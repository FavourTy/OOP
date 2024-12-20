#include <iostream>
#include <iomanip>
using namespace std;
unsigned long factorial(unsigned int);
int main()
{
    for (unsigned int counter{0}; counter <= 10; counter++)
    {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}

unsigned long factorial(unsigned int num)
{
    unsigned long result{1};
    for (unsigned int j{num}; j >= 1; --j)
    {
        result *= j;
    }
    return result;
}