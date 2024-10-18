#include <iostream>
#include "account.h"
using namespace std;
void displayAccount(Account accountToDisplay)
{
    cout << "the owner of the acct is" << accountToDisplay.getName();
    cout << accountToDisplay.getName() << "balance is " << accountToDisplay.getBalance() << endl;
}
int main()
{
    Account myAccount{"Favour", 62};
    Account account2{"Precious", -7};
    displayAccount(myAccount);
    displayAccount(account2);
    displayAccount(myAccount);
    displayAccount(account2);

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

    // prompt for and read name
    // cout << "\nPlease enter the account name: ";
    // string theName;
    // getline(cin, theName);      // read a line of text
    // myAccount.setName(theName); // put theName in myAccount

    // display the name stored in object myAccount
    // cout << "Name in object myAccount is: "
    //     << myAccount.getName() << endl;
    return 0;
}