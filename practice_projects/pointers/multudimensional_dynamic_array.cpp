#include <iostream>
using namespace std;

int main()
{
    int n;
    // int cols;
    cout << "rows, cols: ";
    cin >> n;
    int **table = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        table[i] = new int[n];
        // cout << "value is " << *table[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; i < n; ++i)
        {
            cin >> table[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; i < n; ++i)
        {
            cout << table[i][j] << "\n";
        }
    }
}
// for (int i = 0; i < rows; ++i)
// {
//     delete[] table[i];
// }
// delete table;
// table = NULL;
