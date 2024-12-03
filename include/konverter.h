#pragma once
#include <valuta.h>
#include <vector>
#define BASE_CURRENCY "HRK"

class Konverter {
    public:
    //Getteri
    std::string getBaseCurr();
    std::vector<Valuta> getCurrencies();

    //Setteri
    Konverter& setBaseCurr(std::string baseCurr);
    Konverter& setCurrencies(std::vector<Valuta> currencies);

    //Konstruktori
    Konverter(std::string baseCurr = BASE_CURRENCY, std::vector<Valuta> currencies = {});


    Konverter& addCurrency(Valuta& v);
    void info();

    private:
    std::string baseCurr;
    std::vector<Valuta> currencies;
};