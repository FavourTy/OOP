#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int count{1};
    int total{0};
    while (count <= 5)
    {
        // cout << "\t" << count << "\t";
        total = count * 10;
        cout << setw(4) << total;
        total = count * 100;
        cout << setw(8) << total;
        total = count * 1000;
        cout << setw(10) << total << endl;
        ++count;
    }
}