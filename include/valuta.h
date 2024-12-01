#include <string>
#include <iostream>
#include <cctype>

class Valuta {
public:
    //Getteri
    std::string getCurrCode();
    std::string getName();
    double getRate();

    //Setteri
    void setCurrCode(std::string currCode);
    void setRate(double rate);
    void setName(std::string);

    //Konstruktori
    Valuta() {
        setCurrCode("UKW");  //defaultni
        setName("Unknown");
        setRate(0.0);
    }

    Valuta(std::string currCode):Valuta() { //delegiranje
        setCurrCode(currCode);
    }

    //jos jednu dodatnu metodu (azuriraj tecaj)
    void info();
    Valuta& increaseRate(double postotak);

private:
    std::string currCode;
    std::string name;
    double rate;
};
