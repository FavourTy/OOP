/*
 Write a program that prints the integer equivalent of a character
 typed at the keyboard.
*/

#include <iostream>
using namespace std;
int main()
{
    char sp_cr;
    char upp;
    char low;
    // for upper char
    // cout << "enter an uppercase letter";
    // cin >> upp;
    // cout << static_cast<int>(upp);
    //  for sp_char
    // cout << "enter a special character";
    // cin >> sp_cr;
    // cout << static_cast<int>(sp_cr);

    // for lower_char
    cout << "enter an uppercase letter";
    cin >> low;
    cout << static_cast<int>(low);
    return 0;
}