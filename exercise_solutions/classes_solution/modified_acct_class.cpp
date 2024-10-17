/*
Modify class acctTest to test
member function
withdraw.
*/

#include <iostream>
#include <string>
using namespace std;
#include "modified_acct_class.h";

int main()
{
    Account myAccount{"Favour", 62};
    Account account2{"Precious", -7};
    cout << "the owner of the first acct is" << myAccount.getName();
    cout << "The owner of the sec acct is" << account2.getName();
    cout << myAccount.getName() << "balance is " << myAccount.getBalance() << endl;
    cout << account2.getName() << "balance is " << account2.getBalance() << endl;

    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    myAccount.deposit(depositAmount); // add to account1's balance

    // display balances
    cout << "\n\naccount1: " << myAccount.getName() << " balance is $"
         << myAccount.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount;                              // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance

    // display balances
    cout << "\n\naccount1: " << myAccount.getName() << " balance is $"
         << myAccount.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;
    // show that the initial value of myAccount's name is the empty string
    // cout << "Initial account name is: " << myAccount.getName();

    // withdraw money
    cout << "How much would you like to withdraw" << endl;
    int amtwithdrawal;
    cin >> amtwithdrawal;
    cout << "withdrawing " << amtwithdrawal << "from account 2" << endl;
    account2.Withdrawal(amtwithdrawal); // remove from acct 280
    cout << account2.getBalance() << "is remaining in your acct" << endl;

    cout << "How much would you like to withdraw" << endl;
    cin >> amtwithdrawal;
    cout << "withdrawing " << amtwithdrawal << "from account 1" << endl;
    myAccount.Withdrawal(amtwithdrawal);
    cout << myAccount.getBalance() << "is remaining in your acct" << endl;
}
