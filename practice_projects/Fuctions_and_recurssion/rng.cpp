#include <iostream>
#include <ctime>
#include <random>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    default_random_engine engine{static_cast<unsigned int>(time(0))};
    uniform_int_distribution<unsigned int> randomInt(1000, 9999);

    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        cout << setw(5) << randomInt(engine);
        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
}