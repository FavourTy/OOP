// Rolling a six-sided dice
#include <iostream>
#include <iomanip>
#include <cstdlib> // contains functions prototype for rand
using namespace std;

int main()
{
    for (unsigned int counter{1}; counter <= 20; ++counter)
    {
        cout << setw(10) << (1 + rand() % 7);
        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
}