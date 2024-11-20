#include <string>
#include <cmath>
#include <cstdint>

class BankAccount
{
public:
    BankAccount(int useracctNum, __int64 initialBal) : acctNumber{useracctNum}
    {
        if (initialBal > 0)
        {
            balance = initialBal;
        }
    };
    void deposit(__int64 depositamt)
    {
        if (depositamt > 0)
        {
            balance += depositamt;
        }
    };
    __int64 displayBalance() const
    {
        return balance;
    };

    void withdraw(__int64 amtWithrawal)
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
    void setAccountNumber(int acctNum)
    {
        acctNumber = acctNum;
    }
    int getAcctNumber()
    {
        return acctNumber;
    }
    void SetBalance(__int64 theBalance)
    {
        balance = theBalance;
    }
    double getBalance()
    {
        return balance;
    }
    std::string tostring() const
    {
        std::string dollars{std::to_string(balance / 100)};
        std::string cents{std::to_string(std::abs(balance % 100))};
        return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }

private:
    __int64 balance;
    int acctNumber;
};