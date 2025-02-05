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
    if (amount < 0) {
        throw WalletException("Deposit amount cannot be negative");
    }
    balances[currency] += (amount - amount * transactionFee);
}

bool Wallet::withdraw(const std::string &currency, double amount) {
    if (amount < 0) {
        throw WalletException("Withdrawal amount cannot be negative");
    }
    auto it = balances.find(currency);
    if (it != balances.end() && it->second >= amount) {
        it->second -= (amount + amount * transactionFee);
        return true;
    }
    throw WalletException("Insufficient funds for withdrawal");
}

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
    throw WalletException("Currency conversion failed");
}

void Wallet::setConversionRate(const std::string &currency, double rate) {
    if (rate <= 0) {
        throw WalletException("Conversion rate must be positive");
    }
    conversionRates[currency] = rate;
}

std::unordered_map<std::string, double> Wallet::getConversionRates() const {
    return conversionRates;
}
