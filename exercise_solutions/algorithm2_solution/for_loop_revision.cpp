#include <iostream>
using namespace std;
int main()
{

    // for (unsigned int x{100}; x >= 1; x--)
    // {
    //     cout << x << " " << endl;
    // }
    // for(unsigned int x{1}; x<=20; ++x ){
    //  if(x%5 == 0){
    //     cout << x << endl;
    //  }
    // else{
    //      cout << x << '\t';
    // }

    // }
    // unsigned int x{1};
    // while (x <= 20)
    // {
    //     if (x % 5 == 0)
    //     {
    //         cout << x << endl;
    //     }
    //     else
    //     {
    //         cout << x << '\t';
    //     }
    //     ++x;
    // }

    unsigned int product{1};
    for (unsigned int count{1}; count <= 15; count += 2)
    {
        // if (count % 2 != 0)
        //     // {
        //     //     sum += count;
        //     // }
        product = product * count;
    }

    cout << "Sum is " << product << endl;
}