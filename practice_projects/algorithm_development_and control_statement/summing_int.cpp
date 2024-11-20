#include <iostream>
using namespace std;
int main()
{
    unsigned int total{0};
    for (unsigned int number{1}; number <= 10; number += 1)
    {
        total += number;
    }
    cout << "The sum is " << total;
}