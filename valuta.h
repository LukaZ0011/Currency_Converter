#include <string>

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
        setCurrCode("Unkown");  //defaultni
        setRate(0);
    }

    Valuta(std::string currCode):Valuta() { //delegiranje
        setCurrCode(this->currCode);
    }

private:
    std::string currCode;
    double rate;
};
