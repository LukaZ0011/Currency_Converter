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

Konverter& Konverter::setCurrencies(std::vector<Valuta> currencies) {
    this->currencies = currencies;
    return *this;
}

//-------------------------------------------------konstruktori
Konverter::Konverter(std::string baseCurr, std::vector<Valuta> currencies) : baseCurr(baseCurr), currencies(currencies) {}

//-------------------------------------------------dodatne metode
Konverter& Konverter::addCurrency(Valuta& v) {
    if (v.getName() != DEFAULT_NAME &&
        v.getCurrCode() != DEFAULT_CURRCODE &&
        v.getRate() != DEFAULT_RATE) {
            currencies.push_back(v);
    } else {
        std::cout << "Molimo unesite važeću valutu\n";
    }
    return *this;
}

void Konverter::info() {
    std::cout << "Bazna valuta: " << baseCurr << "\n";
    std::cout << "Lista podržanih valuta: \n";
    for (auto& i : currencies) {
        std::cout << i.getCurrCode() << " => " << baseCurr << " | Tečaj: " << i.getRate() << "\n";
    }
}