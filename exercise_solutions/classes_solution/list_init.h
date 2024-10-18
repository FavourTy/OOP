#include <iostream>
#include <string>

class ListInit
{

public:
    ListInt(unsigned int userAccountNumber, std::string userFirstName, std::string userLastname, double userBalance)
        : accountNumber{userAccountNumber}, firstName{userFirstName}, lastName{userLastname}, balance{userBalance}
    {
    }

private:
    unsigned int accountNumber;
    std::string firstName;
    std::string lastName;
    double balance;
};
