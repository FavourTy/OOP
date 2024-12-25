// Bank Account class
#include <string>
class BankAccount
{
public:
    // constructor
    BankAccount(std::string name, int useracctNum, double initialBal) : accountNumber{useracctNum}, userName{name}
    {
        if (initialBal > 0)
        {
            balance = initialBal;
        }
    };

    // Method to deposit(add) money to an acct
    void deposit(double depositamt)
    {
        if (depositamt > 0)
        {
            balance += depositamt;
        }
    };

    // Method to display the user acct balance
    double displayBalance() const
    {
        return balance;
    };

    // Method to withdraw money from a user acct
    void withdraw(double amtWithrawal)
    {
        if (balance > amtWithrawal)
        {
            balance -= amtWithrawal;
        }
        else
        {
            balance -= 0;
        }
    }

    // User name setter
    void setUserName(std::string name)
    {
        userName = name;
    }

    // User name setter
    std::string getUserName()
    {
        return userName;
    }

    // Account number setter
    void setAccountNumber(int acctNum)
    {
        accountNumber = acctNum;
    }

    // Account number getter
    int getAcctNumber()
    {
        return accountNumber;
    }

    // Account bal setter
    void SetBalance(double theBalance)
    {
        balance = theBalance;
    }

    // Account balance getter
    double getBalance()
    {
        return balance;
    }

    // data members
private:
    std::string userName;
    int accountNumber;
    double balance{0.0};
};