#include <iostream>
#include <valuta.h>

int main() {
    Valuta v1;
    std::cout << v1.getCurrCode() << "\n";
    std::cout << v1.getRate() << "\n";
    v1.setCurrCode("HRK");
    v1.setRate(2);
    std::cout << v1.getCurrCode() << "\n";
    std::cout << v1.getRate() << "\n";
    std::cin.get();
    return 0;
}