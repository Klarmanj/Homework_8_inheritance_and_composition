#include "Invoice.h"

int main() {
    Invoice Hammer;
    Hammer.setPartNumber("N-S20SHD-HN");
    Hammer.setPartDescription("20 oz. Steel Rip Claw Hammer");
    Hammer.setQuantity(5);
    Hammer.setPrice(19.97);
    Hammer.printHeader();
    Hammer.printInvoice();
    Invoice Screwdriver("210403440", "#1 x 3 in. Phillips Screwdriver", 6, 4.77);
    Screwdriver.printInvoice();
}
