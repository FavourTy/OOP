#include <iostream>
#include <array>
using namespace std;

void staticArrayInit();    // function prototype
void AutomaticArrayInit(); // function prototype
const size_t arraySiz{3};

int main()
{
    cout << "First Call to each function:\n";
    staticArrayInit();
    AutomaticArrayInit();

    cout << "\n\nsecond call to each function:\n";
    staticArrayInit();
    AutomaticArrayInit();
    cout << endl;
}

// function to demonstrate a static local array
void staticArrayInit(void)
{
    // init elements to 0 first time fxn is called
    static array<int, arraySiz> array1; // Static local array

    cout << "\nvalues on entering staticArrayInit:\n";

    // output contents of array1
    for (size_t i{0}; i < array1.size(); ++i)
    {
        cout << "array1[" << i << "] = " << array1[i] << " ";
    }

    cout << "\nvalues on exiting staticArrayInit:\n";

    // modify and output contents of array1
    for (size_t j{0}; j < array1.size(); ++j)
    {
        cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
    }
}

// function to demonstrate an automatic local array
void AutomaticArrayInit(void)
{
    // init elements each time fxn is called
    array<int, arraySiz> array2{1, 2, 3}; // automatic local array

    cout << "\nvalues on entering automaticArrayInit:\n";

    // output contents of array2
    for (size_t i{0}; i < array2.size(); ++i)
    {
        cout << "array2[" << i << "] = " << array2[i] << " ";
    }

    cout << "\nvalues on exiting automaticArrayInit:\n";

    // modify and output contents of array2
    for (size_t j{0}; j < array2.size(); ++j)
    {
        cout << "array2[" << j << "] = " << (array2[j] += 5) << " ";
    }
}
