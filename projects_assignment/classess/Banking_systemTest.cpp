#include <iostream>
#include "Banking_system.h"
using namespace std;
int main()
{
    BankAccount myAccount1{23456, 12.35};
    BankAccount myAccount2{1356, 34.56};
    cout << "My Balance in Account 1 is " << myAccount1.displayBalance() << "\n"
         << "My Balance in Account 2 is " << myAccount2.displayBalance() << endl;
    cout << "Enter Deposit amt: " << "\n";
    double depositamt;
    cin >> depositamt;
    cout << "adding " << depositamt << " to " << myAccount1.displayBalance() << endl;
    myAccount1.deposit(depositamt);
    cout << "Balance is " << myAccount1.displayBalance() << endl;
    double withdrawAmt;
    cout << "How much do you want to withdraw ?" << "\n";
    cin >> withdrawAmt;
    myAccount1.withdraw(withdrawAmt);
    cout << "balance is " << myAccount1.displayBalance() << endl;
    while (withdrawAmt > myAccount1.displayBalance())
    {
        cout << "You can only withdraw " << myAccount1.displayBalance() << " or less \n How much do you want to withdraw ?" << endl;
        cin >> withdrawAmt;
        if (withdrawAmt <= myAccount1.displayBalance())
        {
            break;
        }
    }
    myAccount1.withdraw(withdrawAmt);
    cout << "  Balance is " << myAccount1.displayBalance();
}