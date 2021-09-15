#include <iostream>
#include <string>

using namespace std;

class Invoice{
    string partDescription;
    string partNumber;
    double price;
    int quantity;
public:
    void setPartNumber(string);
    string getPartNumber() const;
    void setPartDescription(string);
    string getPartDescription() const;
    void setQuantity(int);
    int getQuantity() const;
    void setPrice(double);
    double getPrice() const;
    double getInvoiceAmount() const;
    void printInvoice() const;
    void printHeader() const;
    Invoice(){
        partNumber = "";
        partDescription = "";
        quantity = 0;
        price = 0.0;
    }
    Invoice(string pN, string pD, int q, double p){
        partDescription = pD;
        partNumber = pN;
        price = p;
        quantity = q;
    }
};
