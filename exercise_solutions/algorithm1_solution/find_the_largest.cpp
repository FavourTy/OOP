#include <iostream>
using namespace std;
int main()
{
    int counter{1};
    int number;
    int largst = INT_MAX;
    while (counter <= 10)
    {
        cout << "Enter a number";
        cin >> number;
        ++counter;
    }
    if (largst > number)
    {
        number = largst;
        cout << "Th largst no is " << number;
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     unsigned int count{1};

//     while (count <= 20)
//     {
//         cout << (count % 2 == 1 ? "****" : "++++++++")
//              << endl;
//         ++count;
//     }
// }