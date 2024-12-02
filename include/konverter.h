#include "valuta.h"
#include <vector>

class Konverter {
    public:
    //Getteri
    std::string getBaseCurr();
    std::vector<Valuta> getCurrencies();

    //Setteri
    Konverter& setBaseCurr(std::string baseCurr);
    Konverter& setCurrencies(std::vector<Valuta> currencies);

    //Konstruktori
    Konverter();

    private:
    std::string baseCurr;
    std::vector<Valuta> currencies;
};