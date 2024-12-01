#include <iostream>
#include <valuta.h>

int main() {
    Valuta v1, v2;
    v1.setCurrCode("HRK");
    v1.setName("Hrvatska kuna");
    v1.setRate(2);
    v1.info();
    double pos;
    std::cin >> pos;
    std::cout << "jao";
    v1.increaseRate(pos).info();
    
    std::cin.get();
    return 0;
}