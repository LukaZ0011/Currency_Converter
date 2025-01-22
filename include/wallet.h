#pragma once

class Wallet
{
private:
    double balance;
    double transactionFee;

public:
    Wallet(double fee = 0.0);

    double getBalance() const;

    void deposit(double amount);

    bool withdraw(double amount);

    bool makeTransaction(double amount);
};
