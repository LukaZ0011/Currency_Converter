#include <iostream>
#include "valuta.h"

int main() {
    Valuta v1, v2;
    v1.info();
    v1.setCurrCode("HRK");
    v1.setName("Hrvatska kuna");
    v1.setRate(2);
    v1.info();
    double pos;
    std::cin >> pos;
    v1.decreaseRate(pos).info();
    return 0;
}