#pragma once
#include <valuta.h>
#include <vector>

class Konverter {
    public:
    //Getteri
    std::string getBaseCurr();
    std::vector<Valuta> getCurrencies();

    //Setteri
    Konverter& setBaseCurr(std::string baseCurr);

    //Konstruktori
    //Konverter();

    Konverter& addCurrency(Valuta& v);

    private:
    std::string baseCurr;
    std::vector<Valuta> currencies;
};