#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    // const variable can be used to specify array size
    const size_t arraySize{5}; // must initialize in declaration

    array<int, arraySize> values; // array values has 5 elements

    for (size_t i{0}; i < values.size(); ++i)
    {
        values[i] = 3 + 3 * i;
    }
    cout << "Element" << setw(10) << "Value" << endl;

    for (size_t j{0}; j < values.size(); ++j)
    {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }
}