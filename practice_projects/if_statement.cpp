#include <iostream>
// comparing integers using if statement, relational operators
// and equality operators

using namespace std; // program uses namespace std
// function main begins program execution
int main()
{
    int number1; // first number to compare
    int number2; // second number to compare

    cout << "Enter two numbers to compare: "; // Prompt the user to enter the numbers to compare
    cin >> number1 >> number2;                // read the data provided by the user into number one and two

    // check if the conditions are met
    if (number1 == number2)
    {                                               // check if the two numbers entered by the user are equal
        cout << number1 << "==" << number2 << endl; // if the numbers are equal, display this
    }
    if (number1 > number2)
    {                                              // check if the  number1 entered by the user is greater than number2
        cout << number1 << ">" << number2 << endl; // if number1 is greater than number2, display this
    }
    if (number1 < number2)
    {                                              // check if the  number1 entered by the user is lesser than number2
        cout << number1 << "<" << number2 << endl; // if number1 is lesser than number2, display this
    }
    if (number1 >= number2)
    {                                               // check if the  number1 entered by the user is greater and equals to number2
        cout << number1 << ">=" << number2 << endl; // if number1 is greater than  and equals to number2, display this
    }
    if (number1 <= number2)
    {                                               // check if the  number1 entered by the user is lesser and equal to  number2
        cout << number1 << "<=" << number2 << endl; // if number1 is lesser than  and equals to number2, display this
    }
    if (number1 != number2)
    {                                               // check if the  number1 entered by the user is not equal to number2
        cout << number1 << "!=" << number2 << endl; // if number1 is not equal to number2, display this
    }
    return 0;
} // end fxn main