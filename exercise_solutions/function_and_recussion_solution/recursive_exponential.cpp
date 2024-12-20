#include <iostream>
using namespace std;

unsigned int exponential(unsigned int, unsigned int);
int main()
{
    int bass{2};
    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        cout << "The value of (" << counter << ") = " << exponential(counter, bass) << endl;
    }

    // cout << "exponential is  " << exponential(2, 3);
}

unsigned int exponential(unsigned int bas, unsigned int expo)
{
    if (expo == 1)
    {
        return bas;
    }
    else if (expo == 0)
    {
        return 1;
    }

    else
    {
        return bas * exponential(bas, expo - 1);
    }
}