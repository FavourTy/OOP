#include <iostream>
using namespace std;
int main()
{
    int x = 9;
    int y = 11;
    y = x;
    x = y;
    if (x < 10)
    {
        if (y > 10)
            cout << "*****" << endl;
    }
    else
    {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
    }

    // if (x < 10)
    // {
    //     if (y > 10)
    //     {
    //         cout << "*****" << endl;
    //     }
    // }
    // else
    // {
    //     cout << "#####" << endl;
    //     cout << "$$$$$" << endl;
    // }
}