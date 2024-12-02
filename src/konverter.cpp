#include "konverter.h"

//-------------------------------------------------getteri

std::string Konverter::getBaseCurr() {
    return baseCurr;
}

std::vector<Valuta> Konverter::getCurrencies() {
    return currencies;
}

//-------------------------------------------------setteri

Konverter& Konverter::setBaseCurr(std::string baseCurr) {
    this->baseCurr = baseCurr;
    return *this;
}

Konverter& Konverter::addCurrency(Valuta& v) {
    if (v.getName() != DEFAULT_NAME &&
        v.getCurrCode() != DEFAULT_CURRCODE &&
        v.getRate() != DEFAULT_RATE) {
        std::cout << "valuta je vazeca\n";
    } else {
        std::cout << "Molimo unesite važeću valutu\n";
    }
    //currencies.push_back(v);
    return *this;
}

//-------------------------------------------------konstruktori
