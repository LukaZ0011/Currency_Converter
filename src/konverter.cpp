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

//-------------------------------------------------konstruktori



//-------------------------------------------------dodatne metode
Konverter& Konverter::addCurrency(Valuta& v) {
    if (v.getName() != DEFAULT_NAME &&
        v.getCurrCode() != DEFAULT_CURRCODE &&
        v.getRate() != DEFAULT_RATE) {
    } else {
        std::cout << "Molimo unesite važeću valutu\n";
    }
    currencies.push_back(v);
    return *this;
}

void Konverter::info() {
    std::cout << "Lista podržanih valuta: \n";
    for (auto& i : currencies) {
        std::cout << i.getCurrCode() << "->" << baseCurr << "Tečaj: " << i.getRate() << "\n";
    }
}