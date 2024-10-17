

#include <iostream>
#include <string>
class Account
{
public:
    // constructor initializes data member name with parameter accountName
    Account(std::string accountName, int initialBalance)
        : name{accountName}
    { // member initializer
      // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0)
        {                             // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
    }
    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount)
    {
        if (depositAmount > 0)
        {                                      // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance
        }
    }
    void Withdrawal(int amtwithdrawal)
    {
        if (amtwithdrawal > balance)
        {

            balance = balance - 0;
            std::cout << "withdraaw amount cannot exceed acct balance" << std::endl;
        }

        if (amtwithdrawal <= balance)
        {
            balance = balance - amtwithdrawal;
        }
    }

    // function returns the account balance
    int getBalance() const
    {
        return balance;
    }

    // member function that sets the account name in the object
    void setName(std::string accountName)
    {
        name = accountName; // store the account name
    }

    // member function that retrieves the account name from the object
    std::string getName() const
    {
        return name; // return name's value to this function's caller
    }

private:
    std::string name;
    int balance{0}; // data member containing account holder's name
};