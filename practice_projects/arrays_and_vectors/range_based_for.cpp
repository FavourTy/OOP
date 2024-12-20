#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t arraySiz{5};
    array<int, arraySiz> items{1, 2, 3, 4, 5};
    cout << "items before modification: ";
    for (int item : items)
    {
        cout << item << " ";
    }
    for (int &itemRef : items)
    {
        itemRef *= 2;
    }

    cout << "items after modification: ";

    for (int item : items)
    {
        cout << item << " ";
    }
}