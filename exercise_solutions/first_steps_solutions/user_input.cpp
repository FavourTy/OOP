#include <iostream>
// Reading an integer from the user and storing it into the integer variable age
int main()
{
    int age{0};                                               // declare the int age and initializing to zero
    std::cout << "Enter your age :\r ";                       // prompt user to enter age
    std::cin >> age;                                          // read the int age
    std::cout << "you are" << age << "year age" << std::endl; // display the result
    return 0;
}