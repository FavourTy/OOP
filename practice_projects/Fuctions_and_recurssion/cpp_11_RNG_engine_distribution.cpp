#include <iostream>
#include <iomanip>
#include <random> // contains c++ random number generation features
#include <ctime>
using namespace std;

int main()
{
    // use the default random number generation engine to
    // produce uniformly distributed pseudorandom int values from 1 to 6
    default_random_engine engine{static_cast<unsigned int>(time(0))};
    uniform_int_distribution<unsigned int> randomInt{1, 6};

    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        cout << setw(10) << randomInt(engine);
        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
}
