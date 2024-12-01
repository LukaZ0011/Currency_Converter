#include "valuta.h"



//getteri
std::string Valuta::getCurrCode() {
    return currCode;
};

double Valuta::getRate(){
    return rate;
}

//setteri 
void Valuta::setCurrCode(std::string currCode) {
    if (currCode.size() > 3) {
        std::cout << "Neispravan format valute u nazivu\n"; 
    } else {
        for (char& c : currCode) c = std::toupper(static_cast<unsigned char>(c));
        this->currCode = currCode;
    }
}

void Valuta::setRate(double rate) {
    if (rate < 0) {
        std::cout <<"Tečaj ne može biti manji od nule\n";
    } else {
        this->rate = rate;
    }

}