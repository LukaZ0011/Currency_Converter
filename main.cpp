#include <iostream>
#include "valuta.h"
#include "konverter.h"


int main() {
    Valuta v1,v2,v3;
    std::vector<Valuta> vec;
    
    v1.setName("Euro").setCurrCode("Eur").setRate(7);
    v1.info();
    v2.setName("Funti").setCurrCode("GBP").setRate(8);
    v2.info();
    v3.setName("Dolar").setCurrCode("usd").setRate(6);
    v3.info();

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    
    Konverter k1;
    k1.setCurrencies(vec);
    k1.info();
    
    return 0;
}