/*Build a simple banking system using OOP principles. Design a simple command line menu
for user interaction.
*/
#include <iostream>
#include "Banking_system.h"
using namespace std;

// function to display user's initial acct balance
void ToDisplayinitialBalance(BankAccount todisplay)
{
    cout << todisplay.getUserName() << " Initial balance is " << todisplay.displayBalance() << "\n";
}

// function to  deposit money into a user's acct
void DepositMoney(BankAccount &depositmoney)
{
    cout << "Enter Deposit amt: " << "\n";
    double depositamt;
    cin >> depositamt;
    cout << "adding " << depositamt << " to " << depositmoney.displayBalance() << endl;
    depositmoney.deposit(depositamt);
    cout << "Balance is " << depositmoney.displayBalance() << endl;
}

// function to  withdraw money from a user's acct
void withdrawMoney(BankAccount &withdrawmoney)
{
    double withdrawAmt;
    cout << "How much do you want to withdraw ?" << "\n";
    cin >> withdrawAmt;
    while (withdrawAmt > withdrawmoney.displayBalance())
    {
        cout << "You can only withdraw " << withdrawmoney.displayBalance() << " or less \n How much do you want to withdraw ?" << endl;
        cin >> withdrawAmt;
        if (withdrawAmt <= withdrawmoney.displayBalance())
        {
            break;
        }
    }
    cout << "withdrawing " << withdrawAmt << " from " << withdrawmoney.displayBalance() << endl;
    withdrawmoney.withdraw(withdrawAmt);
    cout << "Balance is " << withdrawmoney.displayBalance() << "\n\n";
}

int main()
{
    BankAccount myAccount1{"Favour", 23456, 12.35};
    BankAccount myAccount2{"Aliyah", 1356, 34.56};
    ToDisplayinitialBalance(myAccount1);
    DepositMoney(myAccount1);
    withdrawMoney(myAccount1);

    ToDisplayinitialBalance(myAccount2);
    DepositMoney(myAccount2);
    withdrawMoney(myAccount2);

    return 0;
}