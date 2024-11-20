#include <iostream>
using namespace std;
int main()
{

    for (unsigned int counter{20}; counter >= 2; counter -= 2)
    {
        cout << counter;
    }
    return 0;
}