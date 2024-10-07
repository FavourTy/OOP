#include <iostream>
// writing a basic if statement
int main()
{
    int number;
    std::cout << "Enter the number 7" << std::endl;
    std::cin >> number;
    if (number == 7)
    {
        std::cout << "The variable number is equal to 7" << std::endl;
    }
    if (number != 7)
    {
        std::cout << "The variable number is not equal to 7" << std::endl;
    }
    return 0;
}