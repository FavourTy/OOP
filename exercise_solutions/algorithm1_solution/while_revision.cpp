#include <iostream>
using namespace std;
unsigned int i{1};
unsigned int po{1};

int main()
{
    unsigned int x{1};
    unsigned int total{0};
    while (x <= 10)
    {
        // int y = x * x;
        cout << x << endl;
        total += x;
        ++x;
    }
    cout << "Total is " << total << endl;
}