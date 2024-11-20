#include <iostream>
using namespace std;
int main()
{
    double total;
    double sales;
    cout << "Enter sales in dollars (-1 to quit)";
    cin >> sales;
    while (true)
    {
        total = 200 + (0.09) * sales;
        cout << "salary is: $" << total << endl;
        if (sales == -1)
        {
            break;
        }
        cout << "Enter sales in dollars (-1 to quit)";
        cin >> sales;
    }
}