#include <iostream>
using namespace std;

size_t getSize(double *);

int main()
{

    // int num[4]{1, 2, 3, 4};
    // int *numptr;
    // numptr = &num[0];
    // cout << "print = " << &num[2]
    //      << "\nprint = " << numptr;

    double numbers[22];
    cout << "The number of bytes in the array is " << sizeof numbers;
    cout << "\nThe number of bytes returned by get size is " << getSize(numbers) << endl;
}

return size of ptr
    size_t
    getSize(double *ptr)
{
    return sizeof(ptr);
}