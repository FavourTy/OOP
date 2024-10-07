#include <iostream>
// write a program that inputs three integers and prints the sum
//  average, product, smallest and largest of these numbers
using namespace std;
int main()
{
    int a{0};
    int b{0};
    int c{0};
    int sum{0};
    int average{0};
    int product{0};
    int smallest{0};
    int largest{0};
    cout << "Enter three numbers : " << endl;
    cin >> a >> b >> c;
    sum = a + b + c;
    product = a * b * c;
}