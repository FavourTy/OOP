/*
 Create a class called
Invoice that a
 hardware store might use to represent an invoice for an item
 sold at the store.
*/
#include <string>

class Invoice
{
public:
    Invoice(std::string InvoicePartnumber, std::string InvoiceDescriptionNumber, int initialQuantity, int initialPrice)
        : partNumber{InvoicePartnumber}, partDescription{InvoiceDescriptionNumber}
    {
        if (initialQuantity > 0)
        {
            quantity = initialQuantity;
        }

        if (initialPrice > 0)
        {
            price = initialPrice;
        }
    }
    void addPrice(int addprice)
    {
        if (addprice > 0)
        {
            price = price + addprice;
        }
    }
    void addQuantity(int addquantity)
    {
        if (addquantity > 0)
        {
            quantity = quantity + addquantity;
        }
    }

    int getInvoiceAmt()
    {
        return quantity * price;
    }
    void setpartNumber(std::string invoicepartNumber)
    {
        partNumber = invoicepartNumber;
    }
    std::string getPartNumber()
    {
        return partNumber;
    }
    void setpartDescription(std::string invoicePartDescription)
    {
        partDescription = invoicePartDescription;
    }
    std::string getPartDescription()
    {
        return partDescription;
    }
    void setQuantity(int invoiceQuantity)
    {
        quantity = invoiceQuantity;
    }
    int getQuantity()
    {
        return quantity;
    }
    void SetPrice(int invoicePrice)
    {
        price = invoicePrice;
    }
    int getPrice()
    {
        return price;
    }

private:
    std::string partNumber;      // data member partnumber
    std::string partDescription; // data member part description
    int quantity{0};             // data member quantity
    int price{0};                // data member price
};
