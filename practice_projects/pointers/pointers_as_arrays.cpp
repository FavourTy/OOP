#include <iostream>
using namespace std;

int main()
{
    int favNum[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a num: ";
        cin >> favNum[i];
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << "\narray[" << i << "] = " << *(favNum + i);
    }

    int savNum[5]{0, 1, 2, 3, 4};

    cout << "value is " << savNum[2];
    cout << "\naddress is " << &savNum[2] << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "array[" << i << "] = " << savNum[i] << "\n";
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << "\narray[" << i << "] = " << *(savNum + i);
    }
}