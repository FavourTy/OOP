#include <iostream>
#include "invoice.h"
#include <string>
using namespace std;

int main()
{
    Invoice myInvoice1{"1AW", "Detegent", -2, -5};
    Invoice myInvoice2{"2AS", "Perfume", 5, -7};

    cout << "\nInvoice1 partnumber is : " << myInvoice1.getPartNumber() << endl;
    cout << "Invoice1 partDescription is : " << myInvoice1.getPartDescription() << endl;
    cout << "my Invoice1 initial quantity is: " << myInvoice1.getQuantity() << endl;
    cout << "my Invoice1  initial price is: " << myInvoice1.getPrice() << endl;
    // my invoice1
    int quantityamt;
    cout << "what is the quantity of " << myInvoice1.getPartDescription() << endl;
    cin >> quantityamt;
    myInvoice1.addQuantity(quantityamt);

    int priceamt;
    cout << "what is the price of " << myInvoice1.getPartDescription() << endl;
    cin >> priceamt;
    myInvoice1.addPrice(priceamt);
    cout << "The price of " << myInvoice1.getPartDescription() << " is " << myInvoice1.getPrice() << endl;
    cout << "The total amount is " << myInvoice1.getInvoiceAmt();
    // my invoice2
    cout << "Invoice2 part number is : " << myInvoice2.getPartNumber() << endl;
    cout << "Invoice2 part Description is : " << myInvoice2.getPartDescription() << endl;
    cout << "my Invoice2 initial quantity is : " << myInvoice2.getQuantity() << endl;
    cout << "my Invoice2  initial price is: " << myInvoice2.getPrice() << endl;

    cout << "what is the quantity of " << myInvoice2.getPartDescription() << endl;
    cin >> quantityamt;
    myInvoice2.addQuantity(quantityamt);

    cout << "what is the price of " << myInvoice2.getPartDescription() << endl;
    cin >> priceamt;
    myInvoice2.addPrice(priceamt);
    cout << "The price of " << myInvoice2.getPartDescription() << " is " << myInvoice2.getPrice() << endl;
    cout << "The total quantity is " << myInvoice2.getQuantity() << endl;

    cout << "The total amount is " << myInvoice2.getInvoiceAmt();
    return 0;
}