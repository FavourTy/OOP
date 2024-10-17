/* Write a program that reads an integer and
 determines and prints whether it’s odd or even.
*/

#include <iostream>
using namespace std;

int main()
{
    int even_number;
    int odd_number;
    int input_num;
    cout << "enter a number : ";
    cin >> input_num;
    even_number = input_num % 2;
    odd_number = input_num % 2;
    if (even_number == 0)
    {
        cout << "it is an even number";
    }
    if (odd_number != 0)
    {
        cout << " it is an odd number";
    }
}