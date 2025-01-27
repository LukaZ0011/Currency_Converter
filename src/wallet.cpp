#include "wallet.h"

Wallet::Wallet(double fee, std::string name) : transactionFee(fee), name(name) {}

std::string Wallet::getName() const {
    return name;
}

double Wallet::getBalance(const std::string &currency) const {
    auto it = balances.find(currency);
    if (it != balances.end()) {
        return it->second;
    }
    return 0.0;
}

void Wallet::deposit(const std::string &currency, double amount) {
    balances[currency] += (amount - amount * transactionFee);
}

bool Wallet::withdraw(const std::string &currency, double amount) {
    auto it = balances.find(currency);
    if (it != balances.end() && it->second >= amount) {
        it->second -= (amount + amount * transactionFee);
        return true;
    }
    return false;
}

//UNCOMPLETED, NEED AN END USER 
bool Wallet::makeTransaction(const std::string &currency, double amount) {
    return withdraw(currency, amount);
}

bool Wallet::convertCurrency(const std::string &fromCurrency, const std::string &toCurrency, double amount) {
    auto fromRateIt = conversionRates.find(fromCurrency);
    auto toRateIt = conversionRates.find(toCurrency);
    if (fromRateIt != conversionRates.end() && toRateIt != conversionRates.end() && withdraw(fromCurrency, amount)) {
        double convertedAmount = amount * (toRateIt->second / fromRateIt->second);
        deposit(toCurrency, convertedAmount);
        return true;
    }
    return false;
}

void Wallet::setConversionRate(const std::string &currency, double rate) {
    conversionRates[currency] = rate;
}

std::unordered_map<std::string, double> Wallet::getConversionRates() const {
    return conversionRates;
}
