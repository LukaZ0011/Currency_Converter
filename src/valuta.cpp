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

void Valuta::setName(std::string name) {
    this->name = name;
}

void Valuta::setRate(double rate) {
    if (rate < 0) {
        std::cout <<"Tečaj ne može biti manji od nule\n";
    } else {
        this->rate = rate;
    }

}

//info
void Valuta::info() {
    std::cout << "\nOznaka: " << currCode << "\n";
    std::cout << "Naziv:  " << name << "\n";
    std::cout << "Tečaj naspram HRK: " << rate << "\n\n"; 
}

Valuta& Valuta::increaseRate(double postotak) {
    if (postotak > 0) {
        rate += rate *(postotak / 100.0); 
    } else {
        std::cout << "Greška: postotak ne može biti negativan.\n";
    }
    return *this;
}