#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm> // contains sort and binary- search
using namespace std;

int main()
{
    const size_t arraySiz{7};
    array<string, arraySiz> colors{"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};
    cout << "unsorted array:\n";
    for (int count{0}; count < colors.size(); ++count)
    {
        cout << colors[count] << " ";
    }
    sort(colors.begin(), colors.end());
    cout << "\nSorted array:\n";
    for (int count{0}; count < colors.size(); ++count)
    {
        cout << colors[count] << " ";
    }

    bool found{binary_search(colors.begin(), colors.end(), "Indigo")};
    cout << "\n\n\"indigo\" " << (found ? "was" : "was not")
         << " found in colors " << endl;

    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "\n\n\"Cyan\" " << (found ? "was" : "was not")
         << " found in colors " << endl;
}