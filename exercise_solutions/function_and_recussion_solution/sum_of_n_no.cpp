#include <iostream>
using namespace std;
unsigned long sum(unsigned long);
int main()
{
    cout << sum(5);
}
unsigned long sum(unsigned long num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + sum(num - 1);
    }
}