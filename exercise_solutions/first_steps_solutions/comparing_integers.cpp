#include <iostream>
using namespace std;
// write a program that asks the user to enter two integers
// obtains the num from the user
// prints the larger number by the word "is larger."
// if the numbers are equal print the message  "These num are equal"
int main()
{
    int a{0};
    int b{0};
    cout << "Enter two numbers :";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << "is larger";
    };
    if (a < b)
    {
        cout << b << "is larger";
    };
    if (a == b)
    {
        cout << "These numbers are equal";
    };
    return 0;
}