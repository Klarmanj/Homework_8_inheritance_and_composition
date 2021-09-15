#include "Invoice.h"
#include <iomanip>


void Invoice::setPartNumber(string part_Number) {
    partNumber = part_Number;
}
string Invoice::getPartNumber() const {
    return partNumber;
}
void Invoice::setPartDescription(string part_Description) {
    partDescription = part_Description;
}
string Invoice::getPartDescription() const {
    return partDescription;
}
void Invoice::setQuantity(int quantity_of_product) {
    quantity = quantity_of_product;
}
int Invoice::getQuantity() const {
    return quantity;
}
void Invoice::setPrice(double cost) {
    price = cost;
}
double Invoice::getPrice() const {
    return price;
}
double Invoice::getInvoiceAmount() const {
    return (quantity * price);
}
void Invoice::printInvoice() const {
    cout <<  setw(15) << left << getQuantity() << setw(19) << getPartNumber() << setw(35) << getPartDescription() <<  setw(10) << right << getPrice() << setw(25) << getInvoiceAmount() << '\n';
}
void Invoice::printHeader() const {
    cout << setw(15) << left << "Quantity" << setw(19) << "Part Number" << setw(35) << "Part Description" << setw(10) << right << "Price" << setw(25) << "Total Invoice Amount"  << '\n';
}
