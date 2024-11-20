// Rolling a six-sided die 60,000,000 times
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned int frequency1{0}; // count of 1s rolled
    unsigned int frequency2{0}; // count of 2s rolled
    unsigned int frequency3{0}; // count of 3s rolled
    unsigned int frequency4{0}; // count of 4s rolled
    unsigned int frequency5{0}; // count of 5s rolled
    unsigned int frequency6{0}; // count of 6s rolled
    unsigned int face;          // stores each roll of the die
    for (unsigned int roll{1}; roll <= 60'000'000; ++roll)
    {
        face = (1 + rand() % 6);
        switch (face)
        {
        case1:
            ++frequency1;
            break;
        case2:
            ++frequency2;
            break;
        case3:
            ++frequency3;
            break;
        case4:
            ++frequency4;
            break;
        case5:
            ++frequency5;
            break;
        case6:
            ++frequency6;
            break;
            // default:
            //  cout << "Program should never get here";
        }
    }

    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "   1" << setw(13) << frequency1
         << "\n  2" << setw(13) << frequency2
         << "\n  3" << setw(13) << frequency3
         << "\n  4" << setw(13) << frequency4
         << "\n  5" << setw(13) << frequency5
         << "\n  6" << setw(13) << frequency6 << endl;
}