
class BankAccount
{
public:
    BankAccount(int useracctNum, double initialBal) : accountNumber{useracctNum}
    {
        if (initialBal > 0)
        {
            balance = initialBal;
        }
    };
    void deposit(double depositamt)
    {
        if (depositamt > 0)
        {
            balance += depositamt;
        }
    };
    double displayBalance() const
    {
        return balance;
    };

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
    void setAccountNumber(int acctNum)
    {
        accountNumber = acctNum;
    }
    int getAcctNumber()
    {
        return accountNumber;
    }
    void SetBalance(double theBalance)
    {
        balance = theBalance;
    }
    double getBalance()
    {
        return balance;
    }

private:
    int accountNumber;
    double balance{0.0};
};