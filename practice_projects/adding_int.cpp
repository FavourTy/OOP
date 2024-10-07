// Addition Program that displays the sum of two numbers
#include <iostream> // enables program to perform input and output

using namespace std; // using
// function main begins program execution
int main()
{
    // declaring and initializing variables
    int number1; // first integer to add (initializing to 0)
    int number2; // second integer to add (initializing to 0)
    int sum;     // sum of number1 and number2 (initialized to 0)

    cout << "enter a first number :";    // prompt user for first number
    cin >> number1;                      // read first num from user into number 1
    cout << "enter the second number: "; // prompt user for second number
    cin >> number2;                      // read second num from user into number 1
    sum = number1 + number2;             // add the num and store it into the sum var
    cout << "sum is " << sum << endl;    // display the results
    return 0;

} // end function main