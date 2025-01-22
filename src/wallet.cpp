#include "wallet.h"

Wallet::Wallet(double fee) : balance(0.0), transactionFee(fee) {}

double Wallet::getBalance() const {
    return balance;
}

void Wallet::deposit(double amount) {
    balance += amount;
}

bool Wallet::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}

bool Wallet::makeTransaction(double amount) {
    double totalAmount = amount + (amount * transactionFee);
    return withdraw(totalAmount);
}
