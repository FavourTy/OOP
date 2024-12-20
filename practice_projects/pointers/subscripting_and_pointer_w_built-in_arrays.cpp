// using subscripting and pointer notations with built-in arrays

#include <iostream>
using namespace std;

int main()
{
    int b[]{10, 20, 30, 40}; // create 4-element built-in array b
    int *bptr{b};            // set bptr to point to built in array b
    // output built in array b using array subscript notation
    cout << "Array b displayed with: \n\nArray subscript notation\n";
    for (size_t i{0}; i < 4; ++i)
    {
        cout << "b[" << i << "] = " << b[i] << "\n";
    }
    // output built in array b using array name and pointer/offset notation
    cout << "\nPointer/offset notation where "
         << "the pointer is the array name\n";
    for (size_t offset1{0}; offset1 < 4; ++offset1)
    {
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << "\n";
    }

    // output built in array b using bptr and array subscript notation
    cout << "\nPointer subscript notation\n";
    for (size_t d{0}; d < 4; ++d)
    {
        cout << "bptr[" << d << "] = " << bptr[d] << "\n";
    }
    // output built in array b using bptr and pointer/offset notation
    cout << "\npointer/offset notation\n";
    for (size_t offset2{0}; offset2 < 4; ++offset2)
    {
        cout << "*(bptr + " << offset2 << ") = " << *(bptr + offset2) << "\n";
    }
}