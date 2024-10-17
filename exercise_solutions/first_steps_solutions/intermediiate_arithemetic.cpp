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
    average = (a + b + c) / 3;
    /*largest = max(a(b,c));
    smallest = min(a, b, c);*/
    if ((a > b) && (a > c))
    {
        cout << "Largest is " << a << endl;
    }
    if (b > a && b > c)
    {
        cout << "Largest is " << b << endl;
    }
    if (c > b && c > a)
    {
        cout << "Largest is " << c << endl;
    }
    if (a < b && a < c)
    {
        cout << "Smallest is " << a << endl;
    }
    if (b < c && b < a)
    {
        cout << "Smallest is " << b << endl;
    }
    if (c < a && c < b)
    {
        cout << "Smallest is " << c << endl;
    }
    cout << "sum is" << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;
    // cout << "Smallest is " << smallest << endl;
    // cout << "Largest is " << largest << endl;
    return 0;
}