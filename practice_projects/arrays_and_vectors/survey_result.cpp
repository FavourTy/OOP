#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    // define array sizes
    const size_t responseSize{22}; // size of array responses
    const size_t frequencySize{8}; // size of array frequency
    const array<unsigned int, responseSize> response{
        1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5, 7, 7};
    array<unsigned int, frequencySize> frequency{};

    for (size_t ans{0}; ans < response.size(); ++ans)
    {
        ++frequency[response[ans]];
    }
    cout << "Rating" << setw(12) << "Frequency" << endl;

    for (size_t rating{1}; rating < frequency.size(); ++rating)
    {
        cout << setw(6) << rating << setw(12) << frequency[rating] << endl;
    }
}