#include <iostream>
#include <iomanip>
#include "operator_overloading.h"
using namespace std;
int main()
{
    double real1, imag1, real2, imag2;

    // Input two complex numbers
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    // Create two Complex objects
    Complex num1(real1, imag1);
    Complex num2(real2, imag2);

    // Perform operations
    try
    {
        Complex sum = num1 + num2;
        Complex difference = num1 - num2;
        Complex product = num1 * num2;
        Complex quotient = num1 / num2;

        // Display results
        cout << "\nResults:\n";
        cout << "Sum: ";
        sum.display();

        cout << "Difference: ";
        difference.display();

        cout << "Product: ";
        product.display();

        cout << "Quotient: ";
        quotient.display();
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
