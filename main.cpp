#include <iostream>
#include "valuta.h"
#include "konverter.h"


int main() {
    Valuta v1;
    v1.info();
    v1.setName("Euro").setCurrCode("Eur").setRate(7);

    Konverter k1;
    k1.addCurrency(v1);

    return 0;
}