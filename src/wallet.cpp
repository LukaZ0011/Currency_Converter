#include "wallet.h"

Wallet::Wallet(double fee) : transactionFee(fee) {}

double Wallet::getBalance(const std::string &currency) const {
    auto it = balances.find(currency);
    if (it != balances.end()) {
        return it->second;
    }
    return 0.0;
}

void Wallet::deposit(const std::string &currency, double amount) {
    balances[currency] += amount;
}

bool Wallet::withdraw(const std::string &currency, double amount) {
    auto it = balances.find(currency);
    if (it != balances.end() && it->second >= amount) {
        it->second -= amount;
        return true;
    }
    return false;
}

bool Wallet::makeTransaction(const std::string &currency, double amount) {
    double totalAmount = amount + (amount * transactionFee);
    return withdraw(currency, totalAmount);
}

bool Wallet::convertCurrency(const std::string &fromCurrency, const std::string &toCurrency, double amount) {
    auto fromRateIt = conversionRates.find(fromCurrency);
    auto toRateIt = conversionRates.find(toCurrency);

    if (fromRateIt != conversionRates.end() && toRateIt != conversionRates.end()) {
        double fromRate = fromRateIt->second;
        double toRate = toRateIt->second;

        double amountInBaseCurrency = amount / fromRate;
        double convertedAmount = amountInBaseCurrency * toRate;

        if (withdraw(fromCurrency, amount)) {
            deposit(toCurrency, convertedAmount);
            return true;
        }
    }
    return false;
}

void Wallet::setConversionRate(const std::string &currency, double rate) {
    conversionRates[currency] = rate;
}
