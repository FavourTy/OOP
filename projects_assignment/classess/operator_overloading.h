// Complex class

#include <iostream>
class Complex

{
private:
    double real;
    double imaginary;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    // Overload addition operator
    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Overload subtraction operator
    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    // Overload multiplication operator
    Complex operator*(const Complex &other) const
    {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return Complex(newReal, newImaginary);
    }

    // Overload division operator
    Complex operator/(const Complex &other) const
    {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        if (denominator == 0)
        {
            throw std::invalid_argument("Division by zero!");
        }
        double newReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double newImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return Complex(newReal, newImaginary);
    }

    // Display function
    void display() const
    {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << real;
        if (imaginary >= 0)
        {
            std::cout << " + " << imaginary << "i";
        }
        else
        {
            std::cout << " - " << -imaginary << "i";
        }
        std::cout << std::endl;
    }
};