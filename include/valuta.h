#include <string>
#include <iostream>
#include <cctype>

class Valuta {
public:
    //Getteri
    std::string getCurrCode();
    double getRate();

    //Setteri
    void setCurrCode(std::string currCode);
    void setRate(double rate);

    //Konstruktori
    Valuta() {
        setCurrCode("UKW");  //defaultni
        setRate(0);
    }

    Valuta(std::string currCode):Valuta() { //delegiranje
        setCurrCode(this->currCode);
    }

    //jos dvije dodatne metode (dodaj valutu, azuriraj tecaj)

private:
    std::string currCode;
    double rate;
};
