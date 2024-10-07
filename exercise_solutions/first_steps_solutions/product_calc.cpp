#include <iostream>
using namespace std;

// Document a program that calc the products of three integers
//  Declare Declare the variables and initialize each to 0.
//  Prompt the user to enter three integers.
// Read three integers from the keyboard and store them in the variables
//  compute the product of the three int contained in the variable
//  print the product result
//  Return a value from main indicating that the program terminated successfully
// solution

int main()
{
    int x{0};      // Declaring the first variable x and initializing to 0
    int y{0};      // Declaring the second variable y and initializing to 0
    int z{0};      // Declaring the third variable z and initializing to 0
    int result{0}; // Declaring the variable result  and initializing to 0

    cout << "Enter the first number : " << endl; // prompts the user for  first number
    cin >> x;                                    // Read the first number and store it  into x

    cout << "Enter the second number : " << endl; // prompts user for the second number
    cin >> y;                                     // Read the second number and store it  into y

    cout << "Enter the third number :" << endl; // prompts user for the third number
    cin >> z;                                   // Read the third number and store it  into z

    result = x * y * z;                          // multiply the three number and store it into result
    cout << "The product is " << result << endl; // display the result
    return 0;                                    // program terminated successfully
}