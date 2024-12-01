#include <iostream>
#include <valuta.h>

int main() {
    Valuta v1, v2;
    v1.setCurrCode("HRK");
    v1.setName("Hrvatska kuna");
    v1.setRate(2);
    v1.info();

    v2.setCurrCode("EUR");
    v2.setName("Euro");
    v2.setRate(1);
    v2.info();
    std::cin.get();
    return 0;
}