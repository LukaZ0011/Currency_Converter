#pragma once
#include <string>
#include <unordered_map>

class Wallet
{
private:
    std::string name;
    std::unordered_map<std::string, double> balances;
    std::unordered_map<std::string, double> conversionRates;
    double transactionFee;

public:
    Wallet(double fee = 0.0, std::string name = "undefined");

    std::string getName() const;

    double getBalance(const std::string &currency) const;

    void deposit(const std::string &currency, double amount);

    bool withdraw(const std::string &currency, double amount);

    bool makeTransaction(const std::string &currency, double amount);

    bool convertCurrency(const std::string &fromCurrency, const std::string &toCurrency, double amount);

    void setConversionRate(const std::string &currency, double rate);

    std::unordered_map<std::string, double> getConversionRates() const;
};
