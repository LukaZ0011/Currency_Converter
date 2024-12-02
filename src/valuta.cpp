#include "valuta.h"

//-------------------------------------------------getteri
std::string Valuta::getCurrCode() {
    return currCode;
}

std::string Valuta::getName() {
    return name;
}

double Valuta::getRate(){
    return rate;
}

//-------------------------------------------------setteri 
Valuta& Valuta::setCurrCode(std::string currCode) {
    if (currCode.size() > 3) {
        std::cout << "Neispravan format valute u nazivu\n"; 
    } else {
        for (char& c : currCode) c = std::toupper(static_cast<unsigned char>(c));
        this->currCode = currCode;
    }
    return *this;
}

Valuta& Valuta::setName(std::string name) {
    this->name = name;
    return *this;
}

Valuta& Valuta::setRate(double rate) {
    if (rate < 0) {
        std::cout <<"Tečaj ne može biti manji od nule\n";
    } else {
        this->rate = rate;
    }
    return *this;
}

//-------------------------------------------------konstruktori
Valuta::Valuta(std::string currCode, std::string name, double rate) {
    setCurrCode(currCode);
    setName(name);
    setRate(rate);
}

//-------------------------------------------------dodatne metode
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

Valuta& Valuta::decreaseRate(double postotak) {
    if (postotak > 0) {
        rate -= rate *(postotak / 100.0); 
    } else {
        std::cout << "Greška: postotak ne može biti negativan.\n";
    }
    return *this;
}