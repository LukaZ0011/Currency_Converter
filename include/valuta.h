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
    Valuta();
    Valuta(std::string currCode);

    //jos jednu dodatnu metodu (azuriraj tecaj)
    void info();
    Valuta& increaseRate(double postotak);
    Valuta& decreaseRate(double postotak);

private:
    std::string currCode;
    std::string name;
    double rate;
};
