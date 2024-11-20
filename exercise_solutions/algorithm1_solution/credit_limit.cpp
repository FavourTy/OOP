#include <iostream>
using namespace std;

int main()
{
    double acctNo;
    cout << "Enter acct Number or -1 to quit: ";
    cin >> acctNo;
    double beginingBal;
    cout << "Enter beginning balance :";
    cin >> beginingBal;
    double totalCharges;
    cout << "Enter total Charges: ";
    cin >> totalCharges;
    double totalCredits;
    cout << "Enter total Credits : ";
    cin >> totalCredits;
    double creditLimit;
    cout << "Enter credit Limit: ";
    cin >> creditLimit;

    while (true)
    {

        double newbalance = beginingBal + totalCharges - totalCredits;
        cout << "New balance is " << newbalance << endl;
        cout << "Account : " << acctNo << endl;
        cout << "Credit Limit: " << creditLimit << endl;

        if (newbalance > creditLimit)
        {
            cout << "Balance : " << newbalance << endl;
            cout << "credit Limit Exceeded" << endl;
        }
        if (acctNo == -1)
        {
            break;
        }
        cout << "Enter acct Number or -1 to quit: ";
        cin >> acctNo;
        cout << "Enter beginning balance :";
        cin >> beginingBal;
        cout << "Enter total Charges: ";
        cin >> totalCharges;
        cout << "Enter total Credits : ";
        cin >> totalCredits;
        cout << "Enter credit Limit";
        cin >> creditLimit;
    }
}
