#include <iostream>
using namespace std;
int cubeByValue(int); // prototype
int main()
{
    int number{5};
    cout << "The original Value of number is " << number;
    number = cubeByValue(number); // pass number by value to cubeByValue
    cout << "\nThe new value of number is " << number << endl;
}

int cubeByValue(int n)
{
    return n * n * n;
}