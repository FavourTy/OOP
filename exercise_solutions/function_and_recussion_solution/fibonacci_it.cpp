// Write a
// nonrecursive version of the function fibonacci

#include <iostream>
#include <iomanip>
using namespace std;
unsigned long long int fibonacci(int);
int main()
{
    // cout << setw(2) << "fibonacci(4) = " << fibonacci(4);
    //      fibonacci(counter);

    for (unsigned int counter{0}; counter <= 10; counter++)
    {
        cout << setw(2) << "fibonacci(" << counter << ") = " << fibonacci(counter);
        cout << endl;
    }
};

unsigned long long int fibonacci(int num)
{

    unsigned long long int a{0};
    unsigned long long int b{1};
    unsigned long long int rst;
    if (num == 0)
    {
        return a;
    }
    if (num == 1)
    {
        return b;
    }

    for (unsigned int i{2}; i <= num; i++)
    {
        rst = a + b;
        a = b;
        b = rst;

        // if (i == 0)
        // {
        //     cout << a << endl;
        // }
        // else if (i == 1)
        // {
        //     cout << b << endl;
        // }
        // else
        // {
        //     int rst = a + b;
        //     cout << rst << endl;
        //     a = b;
        //     b = rst;
        // }
    }
    return rst;
}