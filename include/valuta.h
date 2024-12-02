#pragma once
#include <string>
#include <iostream>
#include <cctype>

#define DEFAULT_CURRCODE "UKW"
#define DEFAULT_NAME "Uknown"
#define DEFAULT_RATE 0.0

class Valuta {
public:
    //Getteri
    std::string getCurrCode();
    std::string getName();
    double getRate();

    //Setteri
    Valuta& setCurrCode(std::string currCode);
    Valuta& setRate(double rate);
    Valuta& setName(std::string name);

    //Konstruktori
    Valuta(std::string currCode = DEFAULT_CURRCODE, std::string name = DEFAULT_NAME, double rate = DEFAULT_RATE);

    //info, povecaj i smanji tecaj u postotku
    void info();
    Valuta& increaseRate(double postotak);
    Valuta& decreaseRate(double postotak);

private:
    std::string currCode;
    std::string name;
    double rate;
};
