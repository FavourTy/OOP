#include <iostream>
using namespace std;
int main()
{
    int a{0};
    int b{0};
    int sum{0};
    int product{0};
    int difference{0};
    int quotient{0};
    cout << "Entter two numbers: ";
    cin >> a >> b;
    sum = a + b;
    product = a * b;
    difference = a - b;
    quotient = a ^ b;
    cout << "The sum of the two numbers is" << sum << endl;
    cout << "The product of the two numbers is" << product << endl;
    cout << "The difference of the numbers is" << difference << endl;
    cout << "The quotient of the number is" << quotient << endl;
    return 0;
}