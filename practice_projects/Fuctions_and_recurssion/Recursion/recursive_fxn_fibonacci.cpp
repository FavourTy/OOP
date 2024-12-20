// Recursive function fibonacci
#include <iostream>
using namespace std;
unsigned long fibonacci(unsigned long); // fxn prototype

int main()
{
    for (unsigned int counter{0}; counter <= 10; ++counter)
    {
        cout << "fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
    }
    cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(30) = " << fibonacci(35) << endl;
}

unsigned long fibonacci(unsigned long num)
{
    if ((0 == num) || (1 == num))
    {
        return num;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}