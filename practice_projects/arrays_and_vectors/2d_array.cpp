#include <iostream>
#include <array>
using namespace std;
const size_t rows{3};
const size_t columns{3};

void printArray(const array<array<int, columns>, rows> &);

int main()
{
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    array<array<int, columns>, rows> array2{1, 2, 3, 4, 5};
    cout << "values in array1 by row are :" << endl;
    printArray(array1);

    cout << "values in array2 by row are :" << endl;
    printArray(array2);
}

void printArray(const array<array<int, columns>, rows> &a)
{

    for (size_t row{0}; row < a.size(); ++row)
    {
        for (size_t column{0}; column < a[row].size(); ++column)
        {
            cout << a[row][column] << " ";
        }
        cout << endl;
    }
    // for (auto const &row : a)
    // {
    //     for (auto const &element : row)
    //     {
    //         cout << element << " ";
    //     }
    //     cout << endl;
    // }
}