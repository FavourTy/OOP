#include <iostream>
using namespace std;
int main()
{
    unsigned int failed{0};
    unsigned int passed{0};
    unsigned studentCounter{1};
    while (studentCounter <= 10)
    {
        cout << "Enter Result : 1 for pass , 2 for fail ";
        int result;
        cin >> result;
        if (result == 1)
        {
            passed = passed + 1;
        }
        else
        {
            failed = failed + 1;
        }
        while (result != 1 & result != 2)
        {
            cout << "Enter the correct value : ";
            cin >> result;
        }

        studentCounter = studentCounter + 1;
    }
    cout << "passed : " << passed << endl;
    cout << "failed : " << failed << endl;
    {
        cout << "Bonus to the instructor !" << endl;
    }
}