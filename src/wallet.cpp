#include "wallet.h"

Wallet::Wallet() : balance(0.0) {}

double Wallet::getBalance() const
{
    return balance;
}

void Wallet::deposit(double amount)
{
    balance += amount;
}

bool Wallet::withdraw(double amount)
{
    if (amount <= balance)
    {
        balance -= amount;
        return true;
    }
    return false;
}
