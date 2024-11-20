#include <iostream>
#include <iomanip>
#include <string>
#include "banking_system_Mv.h"
using namespace std;
int main()
{
    BankAccount myAccount1{23456, 1235};
    BankAccount myAccount2{1356, 3456};
    cout << "My Balance in Account 1 is " << myAccount1.tostring() << "\n"
         << "My Balance in Account 2 is " << myAccount2.tostring() << endl;
    // cout << "balance in ("<< myAccount1.tostring() << ")"
    cout << "Enter Deposit amt: " << "\n";
    __int64 depositamt;
    cin >> depositamt;
    cout << "adding " << depositamt << " to " << myAccount1.displayBalance() << endl;
    myAccount1.deposit(depositamt);
    cout << "Balance is " << myAccount1.displayBalance() << endl;
}